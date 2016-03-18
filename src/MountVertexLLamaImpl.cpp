// @(#) $Id: MountVertexLLamaImpl.cpp 206078 2014-06-11 22:50:00Z rmarson $
//
// ALMA - Atacama Large Millimeter Array
// (c) Associated Universities Inc., 2008 - 2011, 2013 - 2014
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA

#include <MountVertexLLamaImpl.h>
#include <maciACSComponentDefines.h>
#include <ControlExceptions.h>
#include <LogToAudience.h>
#include <string>
#include <iostream> 
#include <iomanip> 

using log_audience::OPERATOR;
using ControlExceptions::CAMBErrorExImpl;
using ControlExceptions::CAMBErrorEx;
using ControlExceptions::INACTErrorExImpl;
using ControlExceptions::INACTErrorEx;
using ControlExceptions::HardwareErrorExImpl;
using ControlExceptions::HardwareErrorEx;
using std::string;
using std::ostringstream;
using Control::LongSeq;
using std::vector;

MountVertexLLamaImpl::MountVertexLLamaImpl(const ACE_CString& name, maci::ContainerServices* pCS)
    : MountVertexLLamaBase(name, pCS)
{
    antennaModel_m = "MountVertexLLama";
}

MountVertexLLamaImpl::~MountVertexLLamaImpl()
{
}

void MountVertexLLamaImpl::hwInitializeAction(){
    MountVertexLLamaBase::hwInitializeAction();

    // Set metrology mode to a default state
    try {
        LongSeq metrMode;
        metrMode.length(4);
        metrMode[0] = 0x42; // (bit 5 and bit 1)
        metrMode[1] = 0;
        metrMode[2] = 0;
        metrMode[3] = 0;

        SET_METR_MODE(metrMode);
    } catch (CAMBErrorEx& ex) {
        string msg = "Cannot set the metrology mode to the default value";
        msg += " as there is a communications problem with the ACU.";
        LOG_TO_OPERATOR(LM_ERROR, msg);
        CAMBErrorExImpl newEx(ex,  __FILE__, __LINE__, __PRETTY_FUNCTION__);
        newEx.addData("Detail", msg);
        newEx.log();
        // TODO Set an alarm
    } catch (INACTErrorEx& ex) {
        string msg = "Cannot set the metrology mode to the default value";
        msg += " as the control software is not operational.";
        LOG_TO_OPERATOR(LM_ERROR, msg);
        INACTErrorExImpl newEx(ex,  __FILE__, __LINE__, __PRETTY_FUNCTION__);
        newEx.addData("Detail", msg);
        newEx.log();
        // TODO Set an alarm
    }

    // Set receiver cabin temperature
    try {
      long actualSetTemp = static_cast<long>(round(receiverCabinTemp_m));
      SET_REC_CAB_TEMP(actualSetTemp);
      ostringstream msg;
      msg << "Receiver cabin temperature set to " << actualSetTemp << "[C]"; 
      LOG_TO_OPERATOR(LM_INFO, msg.str());
    } catch (CAMBErrorEx& ex) {
        string msg = "Cannot set the receiver cabin temperature to the default value";
        msg += " as there is a communications problem with the ACU.";
        LOG_TO_OPERATOR(LM_ERROR, msg);
        CAMBErrorExImpl newEx(ex,  __FILE__, __LINE__, __PRETTY_FUNCTION__);
        newEx.addData("Detail", msg);
        newEx.log();
        // TODO Set an alarm
    } catch (INACTErrorEx& ex) {
        string msg = "Cannot set the receiver cabin temperature to the default value";
        msg += " as the control software is not operational.";
        LOG_TO_OPERATOR(LM_ERROR, msg);
        INACTErrorExImpl newEx(ex,  __FILE__, __LINE__, __PRETTY_FUNCTION__);
        newEx.addData("Detail", msg);
        newEx.log();
        // TODO Set an alarm
    } 
}

void MountVertexLLamaImpl::
SET_METR_MODE(const LongSeq& world) {

    MountBase::SET_METR_MODE(world);
    ostringstream msg;
    msg << "SET_METR_MODE command executed with parameters: ["
        << world[0] << ", "
        << world[1] << ", "
        << world[2] << ", "
        << world[3] << "]";
    LOG_TO_OPERATOR(LM_NOTICE, msg.str());
}

double MountVertexLLamaImpl::subrefXLimit() {
    return 0.007; // 7mm
}

double MountVertexLLamaImpl::subrefZLimit() {
    return 0.011; // 11mm
}

double MountVertexLLamaImpl::timeToSlew(double dAz, double dEl, 
                                   double maxAzSpeed, double maxElSpeed, 
                                   double maxEl) {
    double tAz, tEl;
    if (maxEl < 60.0*M_PI/180.0
        && dAz < 3.0*M_PI/180.0 
        && dEl < 1.5*M_PI/180.0) {
        // Within fast switching mode limits.
        // DV spec with waiver is 0.6'' error by 2.096s (95% success)
        tAz = 0.5 + (2.096-0.5) * (dAz / (maxAzSpeed/2));
        tEl = 0.5 + (2.096-0.5) * (dEl / (maxElSpeed/2));
    } else {
        // Beyond fast switching limit, for long slews it seems to take
        // just under 3 sec longer than constant full speed would
        // imply. Here we assume this holds down to the same distances
        // as the FS limit, and then keep it continuous with a line
        // down to 0.5s at zero distance.
        if (dAz < 3.0*M_PI/180.0) {
            tAz = 0.5 + (3.5-0.5) * (dAz / (maxAzSpeed/2));
        } else {
            tAz = (dAz-3.0*M_PI/180.0)/maxAzSpeed + 3.5;
        }

        if (dEl < 1.5*M_PI/180.0) {
            tEl = 0.5 + (3.5-0.5) * (dEl /  (maxAzSpeed/2));
        } else {
            tEl = (dEl-1.5*M_PI/180)/maxElSpeed + 3.5;
        }
    }
    return (tAz > tEl) ? tAz : tEl;
}

vector<double> MountVertexLLamaImpl::getSensorTemperaturesForFocusModel() {
    vector<double> temps;
    ACS::Time ts;
    temps.push_back(getMetrTempsSensor00(ts));
    temps.push_back(getMetrTempsSensor01(ts));
    temps.push_back(getMetrTempsSensor02(ts));
    temps.push_back(getMetrTempsSensor03(ts));
    temps.push_back(getMetrTempsSensor04(ts));
    temps.push_back(getMetrTempsSensor05(ts));
    temps.push_back(getMetrTempsSensor06(ts));
    temps.push_back(getMetrTempsSensor07(ts));
    return temps;
}

/* --------------- [ MACI DLL support functions ] -----------------*/
MACI_DLL_SUPPORT_FUNCTIONS(MountVertexLLamaImpl)
