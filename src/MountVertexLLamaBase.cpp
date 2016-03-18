/**
 * ALMA - Atacama Large Millimeter Array
 * (c) European Southern Observatory, 2002
 * (c) Associated Universities Inc., 2002
 * Copyright by ESO (in the framework of the ALMA collaboration),
 * Copyright by AUI (in the framework of the ALMA collaboration),
 * All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307  USA
 *
 * WARNING! DO NOT MODIFY THIS FILE!
 *  ---------------------------------------------------------
 * | This is generated code!  Do not modify this file.       |
 * | Any changes will be lost when the file is re-generated. |
 *  ---------------------------------------------------------
 *
 */

#include <loggingLoggable.h>
#include <loggingGetLogger.h>
#include <loggingACEMACROS.h>
#include <string>
#include <sstream>
#include <MountVertexLLamaBase.h>

#include <controlDeviceImpl.h>
#include <ControlPointArchival.h>

#include <TETimeUtil.h>
#include <acsutilTimeStamp.h>

#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include <limits>
#include <cerrno>
#include <cmath>
#include <linux/types.h>

// For conversion of raw data to data and back.
#include <TypeConversion.h>
// Includes for Utils helpers
#include <Utils.h>

/// Constructor
MountVertexLLamaBase::MountVertexLLamaBase(const ACE_CString& name,
    maci::ContainerServices* cs):

    MountVertexImpl(name, cs)

    , rcaMonitorCanError(0x07001)

    , rcaMonitorSystemId(0x70004)

    , rcaMonitorNumTrans(0x70002)

    , rcaMonitorSwRevLevel(0x70000)

    , rcaMonitorStowPin(0x0024)

    , rcaMonitorSystemStatus(0x0023)

    , rcaMonitorAzEncStatus(0x0018)

    , rcaMonitorElEncStatus(0x0008)

    , rcaMonitorElStatus(0x000b)

    , rcaMonitorMetrDeltasDisp(0x7010)

    , sppMetrDeltasDisp(this)

    , rcaMonitorMetrDeltasSpem(0x7011)

    , sppMetrDeltasSpem(this)

    , rcaMonitorMetrDeltasTilt(0x7012)

    , sppMetrDeltasTilt(this)

    , rcaMonitorMetrDeltasTilttemp(0x7013)

    , sppMetrDeltasTilttemp(this)

    , rcaMonitorMetrEquipStatus(0x0032)

    , rcaMonitorMetrMode(0x0031)

    , rcaMonitorMetrTemps19(0x4019)

    , sppMetrTemps19(this)

    , scaleMetrTempsSensor100(0.01)

    , offsetMetrTempsSensor100(273.15)

    , scaleMetrTempsSensor101(0.01)

    , offsetMetrTempsSensor101(273.15)

    , scaleMetrTempsSensor102(0.01)

    , offsetMetrTempsSensor102(273.15)

    , scaleMetrTempsSensor103(0.01)

    , offsetMetrTempsSensor103(273.15)

    , rcaMonitorMetrTemps1a(0x4020)

    , sppMetrTemps1a(this)

    , scaleMetrTempsSensor104(0.01)

    , offsetMetrTempsSensor104(273.15)

    , scaleMetrTempsSensor105(0.01)

    , offsetMetrTempsSensor105(273.15)

    , scaleMetrTempsSensor106(0.01)

    , offsetMetrTempsSensor106(273.15)

    , scaleMetrTempsSensor107(0.01)

    , offsetMetrTempsSensor107(273.15)

    , rcaMonitorMetrTemps1b(0x4021)

    , sppMetrTemps1b(this)

    , scaleMetrTempsSensor108(0.01)

    , offsetMetrTempsSensor108(273.15)

    , scaleMetrTempsSensor109(0.01)

    , offsetMetrTempsSensor109(273.15)

    , scaleMetrTempsSensor110(0.01)

    , offsetMetrTempsSensor110(273.15)

    , scaleMetrTempsSensor111(0.01)

    , offsetMetrTempsSensor111(273.15)

    , rcaMonitorMetrTemps1c(0x4022)

    , sppMetrTemps1c(this)

    , scaleMetrTempsSensor112(0.01)

    , offsetMetrTempsSensor112(273.15)

    , scaleMetrTempsSensor113(0.01)

    , offsetMetrTempsSensor113(273.15)

    , scaleMetrTempsSensor114(0.01)

    , offsetMetrTempsSensor114(273.15)

    , scaleMetrTempsSensor115(0.01)

    , offsetMetrTempsSensor115(273.15)

    , rcaMonitorMetrTemps1d(0x4023)

    , sppMetrTemps1d(this)

    , scaleMetrTempsSensor116(0.01)

    , offsetMetrTempsSensor116(273.15)

    , scaleMetrTempsSensor117(0.01)

    , offsetMetrTempsSensor117(273.15)

    , scaleMetrTempsSensor118(0.01)

    , offsetMetrTempsSensor118(273.15)

    , scaleMetrTempsSensor119(0.01)

    , offsetMetrTempsSensor119(273.15)

    , rcaMonitorMetrTemps1e(0x4024)

    , sppMetrTemps1e(this)

    , scaleMetrTempsSensor120(0.01)

    , offsetMetrTempsSensor120(273.15)

    , scaleMetrTempsSensor121(0.01)

    , offsetMetrTempsSensor121(273.15)

    , scaleMetrTempsSensor122(0.01)

    , offsetMetrTempsSensor122(273.15)

    , scaleMetrTempsSensor123(0.01)

    , offsetMetrTempsSensor123(273.15)

    , rcaMonitorMetrTemps1f(0x4025)

    , sppMetrTemps1f(this)

    , scaleMetrTempsSensor124(0.01)

    , offsetMetrTempsSensor124(273.15)

    , scaleMetrTempsSensor125(0.01)

    , offsetMetrTempsSensor125(273.15)

    , scaleMetrTempsSensor126(0.01)

    , offsetMetrTempsSensor126(273.15)

    , scaleMetrTempsSensor127(0.01)

    , offsetMetrTempsSensor127(273.15)

    , rcaMonitorPtModelCoeff07(0x3047)

    , rcaMonitorPtModelCoeff08(0x3048)

    , rcaMonitorPtModelCoeff09(0x3049)

    , rcaMonitorSubrefRotation(0x002a)

    , scaleSubrefRotationXTip(0.0001)

    , offsetSubrefRotationXTip(0.0)

    , scaleSubrefRotationYTilt(0.0001)

    , offsetSubrefRotationYTilt(0.0)

    , scaleSubrefRotationZTilt(0.0001)

    , offsetSubrefRotationZTilt(0.0)

    , rcaMonitorSubrefDeltaRot(0x0026)

    , sppSubrefDeltaRot(this)

    , scaleSubrefDeltaRotXTip(0.0001)

    , offsetSubrefDeltaRotXTip(0.0)

    , scaleSubrefDeltaRotYTilt(0.0001)

    , offsetSubrefDeltaRotYTilt(0.0)

    , scaleSubrefDeltaRotZTilt(0.0001)

    , offsetSubrefDeltaRotZTilt(0.0)

    , rcaMonitorSubrefStatus(0x0029)

    , rcaMonitorOtherStatus(0x8003a)

    , sppOtherStatus(this)

    , rcaMonitorPowerStatus(0x0030)

    , rcaMonitorUps2Alarms(0x004c)

    , sppUps2Alarms(this)

    , rcaMonitorUps2BatteryOutput(0x0048)

    , sppUps2BatteryOutput(this)

    , rcaMonitorUps2BatteryStatus(0x0049)

    , sppUps2BatteryStatus(this)

    , rcaMonitorUps2BypassVolts(0x004a)

    , sppUps2BypassVolts(this)

    , rcaMonitorUps2Freqs(0x004b)

    , sppUps2Freqs(this)

    , rcaMonitorUps1InverterSw(0x80035)

    , sppUps1InverterSw(this)

    , rcaMonitorUps2InverterSw(0x80045)

    , sppUps2InverterSw(this)

    , rcaMonitorUps2InverterVolts(0x004d)

    , sppUps2InverterVolts(this)

    , rcaMonitorUps2OutputCurrent(0x0046)

    , sppUps2OutputCurrent(this)

    , rcaMonitorUps2OutputVolts(0x0045)

    , sppUps2OutputVolts(this)

    , rcaMonitorUpsStatus1(0x80039)

    , sppUpsStatus1(this)

    , rcaMonitorUpsStatus2(0x80049)

    , sppUpsStatus2(this)

    , rcaMonitorAcStatus(0x002c)

    , rcaMonitorShutter(0x002e)

    , rcaControlCntlSubrefDeltaRot(0x1026)

    , rcaControlCntlSubrefRotation(0x1028)

    , rcaControlSelftestStop(0x1032)

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    AmbDeviceImpl::setBaseAddress(0UL);

}

MountVertexLLamaBase::~MountVertexLLamaBase()
{
    AUTO_TRACE(__PRETTY_FUNCTION__);
}

CORBA::Boolean MountVertexLLamaBase::isSimulated()
{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    return false;
}

void MountVertexLLamaBase::initialize()
{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    // Call the base class implementation so it can set up the common properties

    MountVertexImpl::initialize();

    // create the properties specific to the MountVertexLLama
    try
    {
        const ACE_CString nameWithSep(cdbName_m + ":");

        if(timeThread_p != 0)
        {
            timeThread_p->resume();
        }
        else
        {
            acsErrTypeLifeCycle::LifeCycleExImpl ex(__FILE__, __LINE__,
                __PRETTY_FUNCTION__);
            ex.addData("Detail", "Could not start the time keeper thread. "
                "because it has not been properly created. This is a serious "
                "problem and the component will not be initialised.");
            ex.log();
            throw ex;
        }

        cacheCanError.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getCanError, 2.0, currentTime));

        cacheSystemId.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getSystemId, 2.0, currentTime));

        cacheSwRevLevel.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getSwRevLevel, 2.0, currentTime));

        cacheStowPin.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getStowPin, 2.0, currentTime));

        cacheSystemStatus.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getSystemStatus, 2.0, currentTime));

        cacheAzEncStatus.reset(new AMB::Cache< MountVertexLLamaBase, unsigned char >(this, &MountVertexLLamaBase::getAzEncStatus, 2.0, currentTime));

        cacheElEncStatus.reset(new AMB::Cache< MountVertexLLamaBase, unsigned char >(this, &MountVertexLLamaBase::getElEncStatus, 2.0, currentTime));

        cacheElStatus.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getElStatus, 2.0, currentTime));

        cacheMetrDeltasDisp.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< int > >(this, &MountVertexLLamaBase::getMetrDeltasDisp, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_DELTAS_DISP");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrDeltasDisp =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< int >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrDeltasDispProxy, getLogger()), true);

        }

        cacheMetrDeltasSpem.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< int > >(this, &MountVertexLLamaBase::getMetrDeltasSpem, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_DELTAS_SPEM");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrDeltasSpem =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< int >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrDeltasSpemProxy, getLogger()), true);

        }

        cacheMetrDeltasTilt.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< int > >(this, &MountVertexLLamaBase::getMetrDeltasTilt, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_DELTAS_TILT");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrDeltasTilt =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< int >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrDeltasTiltProxy, getLogger()), true);

        }

        cacheMetrDeltasTilttemp.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< int > >(this, &MountVertexLLamaBase::getMetrDeltasTilttemp, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_DELTAS_TILTTEMP");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrDeltasTilttemp =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< int >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrDeltasTilttempProxy, getLogger()), true);

        }

        cacheMetrEquipStatus.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getMetrEquipStatus, 2.0, currentTime));

        cacheMetrMode.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getMetrMode, 2.0, currentTime));

        cacheMetrTemps19.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps19, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_19");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps19 =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps19Proxy, getLogger()), true);

        }

        cacheMetrTemps1a.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps1a, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_1A");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps1a =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps1aProxy, getLogger()), true);

        }

        cacheMetrTemps1b.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps1b, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_1B");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps1b =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps1bProxy, getLogger()), true);

        }

        cacheMetrTemps1c.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps1c, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_1C");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps1c =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps1cProxy, getLogger()), true);

        }

        cacheMetrTemps1d.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps1d, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_1D");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps1d =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps1dProxy, getLogger()), true);

        }

        cacheMetrTemps1e.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps1e, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_1E");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps1e =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps1eProxy, getLogger()), true);

        }

        cacheMetrTemps1f.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getMetrTemps1f, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "METR_TEMPS_1F");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppMetrTemps1f =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getMetrTemps1fProxy, getLogger()), true);

        }

        cacheSubrefRotation.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getSubrefRotation, 2.0, currentTime));

        cacheSubrefDeltaRot.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getSubrefDeltaRot, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "SUBREF_DELTA_ROT");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppSubrefDeltaRot =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getSubrefDeltaRotProxy, getLogger()), true);

        }

        cacheSubrefStatus.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getSubrefStatus, 2.0, currentTime));

        cacheOtherStatus.reset(new AMB::Cache< MountVertexLLamaBase, unsigned char >(this, &MountVertexLLamaBase::getOtherStatus, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "OTHER_STATUS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppOtherStatus =

                new baci::ROpattern(propName, getComponent(),

                new AMB::RODevIO< MountVertexLLamaBase, unsigned char, ACS::pattern >(this, &MountVertexLLamaBase::getOtherStatusProxy, getLogger()), true);

        }

        cachePowerStatus.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getPowerStatus, 2.0, currentTime));

        cacheUps2Alarms.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< unsigned char > >(this, &MountVertexLLamaBase::getUps2Alarms, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_ALARMS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2Alarms =

                new baci::ROpattern(propName, getComponent(),

                new AMB::RODevIO< MountVertexLLamaBase, std::vector< unsigned char >, ACS::pattern >(this, &MountVertexLLamaBase::getUps2AlarmsProxy, getLogger()), true);

        }

        cacheUps2BatteryOutput.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2BatteryOutput, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_BATTERY_OUTPUT");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2BatteryOutput =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2BatteryOutputProxy, getLogger()), true);

        }

        cacheUps2BatteryStatus.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2BatteryStatus, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_BATTERY_STATUS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2BatteryStatus =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2BatteryStatusProxy, getLogger()), true);

        }

        cacheUps2BypassVolts.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2BypassVolts, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_BYPASS_VOLTS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2BypassVolts =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2BypassVoltsProxy, getLogger()), true);

        }

        cacheUps2Freqs.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2Freqs, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_FREQS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2Freqs =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2FreqsProxy, getLogger()), true);

        }

        {
            const ACE_CString propName(nameWithSep + "UPS1_INVERTER_SW");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps1InverterSw =

                new baci::ROlong(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, unsigned char, CORBA::Long >(this, &MountVertexLLamaBase::getUps1InverterSwProxy, getLogger()), true);

        }

        {
            const ACE_CString propName(nameWithSep + "UPS2_INVERTER_SW");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2InverterSw =

                new baci::ROlong(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, unsigned char, CORBA::Long >(this, &MountVertexLLamaBase::getUps2InverterSwProxy, getLogger()), true);

        }

        cacheUps2InverterVolts.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2InverterVolts, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_INVERTER_VOLTS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2InverterVolts =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2InverterVoltsProxy, getLogger()), true);

        }

        cacheUps2OutputCurrent.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2OutputCurrent, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_OUTPUT_CURRENT");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2OutputCurrent =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2OutputCurrentProxy, getLogger()), true);

        }

        cacheUps2OutputVolts.reset(new AMB::Cache< MountVertexLLamaBase, std::vector< short > >(this, &MountVertexLLamaBase::getUps2OutputVolts, 2.0, currentTime));

        {
            const ACE_CString propName(nameWithSep + "UPS2_OUTPUT_VOLTS");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUps2OutputVolts =

                new baci::ROlongSeq(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, std::vector< short >, ACS::longSeq >(this, &MountVertexLLamaBase::getUps2OutputVoltsProxy, getLogger()), true);

        }

        {
            const ACE_CString propName(nameWithSep + "UPS_STATUS_1");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUpsStatus1 =

                new baci::ROlong(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, unsigned char, CORBA::Long >(this, &MountVertexLLamaBase::getUpsStatus1Proxy, getLogger()), true);

        }

        {
            const ACE_CString propName(nameWithSep + "UPS_STATUS_2");
            /**
             * Create new property with new DevIO. The DevIO will automatically
             * be deleted on destruction of the property.
             */
            sppUpsStatus2 =

                new baci::ROlong(propName, getComponent(),
                new AMB::RODevIO< MountVertexLLamaBase, unsigned char, CORBA::Long >(this, &MountVertexLLamaBase::getUpsStatus2Proxy, getLogger()), true);

        }

        cacheAcStatus.reset(new AMB::Cache< MountVertexLLamaBase, unsigned char >(this, &MountVertexLLamaBase::getAcStatus, 2.0, currentTime));

        cacheShutter.reset(new AMB::Cache< MountVertexLLamaBase, unsigned char >(this, &MountVertexLLamaBase::getShutter, 2.0, currentTime));

        AmbDeviceImpl::setChannelNumber(2UL);

        AmbDeviceImpl::setNodeAddress(0x0UL);

    }
    catch(const ControlExceptions::CDBErrorExImpl& ex)
    {
        // getElement can throw this exception
        throw acsErrTypeLifeCycle::LifeCycleExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const baciErrTypeProperty::PropertyActivationExImpl& ex)
    {
        // properties initialization can throw this exception
        throw acsErrTypeLifeCycle::LifeCycleExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

void MountVertexLLamaBase::cleanUp()
{
    // No need to check if the device is already in hwStop state.  This is
    // done in Control::HardwareDeviceImpl::hwStop() anyway.
    try
    {
        Control::HardwareDeviceImpl::hwStop();
    }
    catch(...)
    {
        LOG_TO_OPERATOR(LM_WARNING, "Caught an exception during transition to "
            "the hardware stop state.  Continuing anyway.");
    }

    MountVertexImpl::cleanUp();

}

/**
 * Get the RCA for monitor point CAN_ERROR.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCACanError() const
{
    return rcaMonitorCanError;
}

/// MonitorPoint: CAN_ERROR
/// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error.

/**
 * Get the current value of CAN_ERROR from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getCanError(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorCanError + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< unsigned char > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    timeCanError0 = timestamp;

    timeCanError1 = timestamp;

    timeCanError2 = timestamp;

    timeCanError3 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCACanError(const unsigned long rca)
{
    rcaMonitorCanError = rca;
}

///This getCanErrorProxy enusures we call the virtual getCanError
/// and not the MountVertexLLamaBase::getCanError as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getCanErrorProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getCanError(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: CAN_ERROR
/// ACU error conditions. This monitor point returns an error 
/// stack which includes an error code and an identification 
/// of the command causing the error.

/**
 * Get the RCA for monitor point SYSTEM_ID.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCASystemId() const
{
    return rcaMonitorSystemId;
}

/// MonitorPoint: SYSTEM_ID
/// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future.

/**
 * Get the current value of SYSTEM_ID from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getSystemId(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorSystemId + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(3U);

    std::vector< AmbDataMem_t > rawBytes(3U);

    std::vector< unsigned char > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    timeSystemId0 = timestamp;

    timeSystemId1 = timestamp;

    timeSystemId2 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCASystemId(const unsigned long rca)
{
    rcaMonitorSystemId = rca;
}

///This getSystemIdProxy enusures we call the virtual getSystemId
/// and not the MountVertexLLamaBase::getSystemId as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getSystemIdProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSystemId(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SYSTEM_ID
/// Get ACU hardware and software identifiers. Currently only 
/// a software revision level is supported, but could be expanded 
/// to include hardware identifiers in future.

/**
 * Get the RCA for monitor point NUM_TRANS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCANumTrans() const
{
    return rcaMonitorNumTrans;
}

/// MonitorPoint: NUM_TRANS
/// Number of CAN transactions handled by ACU since power up.

/**
 * Get the current value of NUM_TRANS from the device.
 */

unsigned int MountVertexLLamaBase::getNumTrans(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorNumTrans + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    unsigned int raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned int ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCANumTrans(const unsigned long rca)
{
    rcaMonitorNumTrans = rca;
}

///This getNumTransProxy enusures we call the virtual getNumTrans
/// and not the MountVertexLLamaBase::getNumTrans as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned int MountVertexLLamaBase::getNumTransProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getNumTrans(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: NUM_TRANS
/// Number of CAN transactions handled by ACU since power up.

/**
 * Get the RCA for monitor point SW_REV_LEVEL.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCASwRevLevel() const
{
    return rcaMonitorSwRevLevel;
}

/// MonitorPoint: SW_REV_LEVEL
/// Revision level of vendor ACU code.

/**
 * Get the current value of SW_REV_LEVEL from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getSwRevLevel(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorSwRevLevel + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(3U);

    std::vector< AmbDataMem_t > rawBytes(3U);

    std::vector< unsigned char > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    valueSwRevLevelMajor = static_cast< unsigned char >(
        raw[0]);

    timeSwRevLevelMajor = timestamp;

    valueSwRevLevelMinor = static_cast< unsigned char >(
        raw[1]);

    timeSwRevLevelMinor = timestamp;

    valueSwRevLevelPatch = static_cast< unsigned char >(
        raw[2]);

    timeSwRevLevelPatch = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCASwRevLevel(const unsigned long rca)
{
    rcaMonitorSwRevLevel = rca;
}

///This getSwRevLevelProxy enusures we call the virtual getSwRevLevel
/// and not the MountVertexLLamaBase::getSwRevLevel as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getSwRevLevelProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSwRevLevel(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SW_REV_LEVEL
/// Revision level of vendor ACU code.

/// MonitorPoint: SW_REV_LEVEL_MAJOR
/// Major revision level.

/**
 * Get the current value of SW_REV_LEVEL_MAJOR from the device.
 */

unsigned char MountVertexLLamaBase::getSwRevLevelMajor(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSwRevLevel->getVal(timeSwRevLevelMajor);

    timestamp = timeSwRevLevelMajor;
    return valueSwRevLevelMajor;
}

///This getSwRevLevelMajorProxy enusures we call the virtual getSwRevLevelMajor
/// and not the MountVertexLLamaBase::getSwRevLevelMajor as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getSwRevLevelMajorProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSwRevLevelMajor(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SW_REV_LEVEL_MINOR
/// Minor revision level.

/**
 * Get the current value of SW_REV_LEVEL_MINOR from the device.
 */

unsigned char MountVertexLLamaBase::getSwRevLevelMinor(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSwRevLevel->getVal(timeSwRevLevelMinor);

    timestamp = timeSwRevLevelMinor;
    return valueSwRevLevelMinor;
}

///This getSwRevLevelMinorProxy enusures we call the virtual getSwRevLevelMinor
/// and not the MountVertexLLamaBase::getSwRevLevelMinor as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getSwRevLevelMinorProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSwRevLevelMinor(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SW_REV_LEVEL_PATCH
/// Patch level.

/**
 * Get the current value of SW_REV_LEVEL_PATCH from the device.
 */

unsigned char MountVertexLLamaBase::getSwRevLevelPatch(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSwRevLevel->getVal(timeSwRevLevelPatch);

    timestamp = timeSwRevLevelPatch;
    return valueSwRevLevelPatch;
}

///This getSwRevLevelPatchProxy enusures we call the virtual getSwRevLevelPatch
/// and not the MountVertexLLamaBase::getSwRevLevelPatch as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getSwRevLevelPatchProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSwRevLevelPatch(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/**
 * Get the RCA for monitor point STOW_PIN.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAStowPin() const
{
    return rcaMonitorStowPin;
}

/// MonitorPoint: STOW_PIN
/// Position of antenna stow pins.

/**
 * Get the current value of STOW_PIN from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getStowPin(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorStowPin + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(2U);

    std::vector< AmbDataMem_t > rawBytes(2U);

    std::vector< unsigned char > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueStowPinAzPin1Inserted.

    valueStowPinAzPin1Inserted = ((raw[0] & 0x01) != 0) ? true : false;

    timeStowPinAzPin1Inserted = timestamp;

    // Set valueStowPinAzPin1Released.

    valueStowPinAzPin1Released = ((raw[0] & 0x02) != 0) ? true : false;

    timeStowPinAzPin1Released = timestamp;

    // Set valueStowPinAzLocalSystemError.

    valueStowPinAzLocalSystemError = ((raw[0] & 0x04) != 0) ? true : false;

    timeStowPinAzLocalSystemError = timestamp;

    // Set valueStowPinAzMotionTimeout.

    valueStowPinAzMotionTimeout = ((raw[0] & 0x08) != 0) ? true : false;

    timeStowPinAzMotionTimeout = timestamp;

    // Set valueStowPinAzPositionSwitchTimeout.

    valueStowPinAzPositionSwitchTimeout = ((raw[0] & 0x10) != 0) ? true : false;

    timeStowPinAzPositionSwitchTimeout = timestamp;

    // Set valueStowPinElPin1Inserted.

    valueStowPinElPin1Inserted = ((raw[1] & 0x01) != 0) ? true : false;

    timeStowPinElPin1Inserted = timestamp;

    // Set valueStowPinElPin1Released.

    valueStowPinElPin1Released = ((raw[1] & 0x02) != 0) ? true : false;

    timeStowPinElPin1Released = timestamp;

    // Set valueStowPinElLocalSystemError.

    valueStowPinElLocalSystemError = ((raw[1] & 0x04) != 0) ? true : false;

    timeStowPinElLocalSystemError = timestamp;

    // Set valueStowPinElMotionTimeout.

    valueStowPinElMotionTimeout = ((raw[1] & 0x08) != 0) ? true : false;

    timeStowPinElMotionTimeout = timestamp;

    // Set valueStowPinElPositionSwitchTimeout.

    valueStowPinElPositionSwitchTimeout = ((raw[1] & 0x10) != 0) ? true : false;

    timeStowPinElPositionSwitchTimeout = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAStowPin(const unsigned long rca)
{
    rcaMonitorStowPin = rca;
}

///This getStowPinProxy enusures we call the virtual getStowPin
/// and not the MountVertexLLamaBase::getStowPin as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getStowPinProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getStowPin(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: STOW_PIN
/// Position of antenna stow pins.

/// MonitorPoint: STOW_PIN_AZ_PIN1_INSERTED
/// Azimuth stow pin inserted (set=inserted)

/**
 * Get the current value of STOW_PIN_AZ_PIN1_INSERTED from the device.
 */

bool MountVertexLLamaBase::getStowPinAzPin1Inserted(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinAzPin1Inserted);

    timestamp = timeStowPinAzPin1Inserted;
    return valueStowPinAzPin1Inserted;
}

/// MonitorPoint: STOW_PIN_AZ_PIN1_RELEASED
/// Azimuth stow pin released (set=released)

/**
 * Get the current value of STOW_PIN_AZ_PIN1_RELEASED from the device.
 */

bool MountVertexLLamaBase::getStowPinAzPin1Released(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinAzPin1Released);

    timestamp = timeStowPinAzPin1Released;
    return valueStowPinAzPin1Released;
}

/// MonitorPoint: STOW_PIN_AZ_LOCAL_SYSTEM_ERROR
/// Azimuth stow pin Local sytem error (set=error)

/**
 * Get the current value of STOW_PIN_AZ_LOCAL_SYSTEM_ERROR from the device.
 */

bool MountVertexLLamaBase::getStowPinAzLocalSystemError(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinAzLocalSystemError);

    timestamp = timeStowPinAzLocalSystemError;
    return valueStowPinAzLocalSystemError;
}

/// MonitorPoint: STOW_PIN_AZ_MOTION_TIMEOUT
/// Azimuth stow pin motion timeout

/**
 * Get the current value of STOW_PIN_AZ_MOTION_TIMEOUT from the device.
 */

bool MountVertexLLamaBase::getStowPinAzMotionTimeout(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinAzMotionTimeout);

    timestamp = timeStowPinAzMotionTimeout;
    return valueStowPinAzMotionTimeout;
}

/// MonitorPoint: STOW_PIN_AZ_POSITION_SWITCH_TIMEOUT
/// Azimuth stow position switch timeout

/**
 * Get the current value of STOW_PIN_AZ_POSITION_SWITCH_TIMEOUT from the device.
 */

bool MountVertexLLamaBase::getStowPinAzPositionSwitchTimeout(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinAzPositionSwitchTimeout);

    timestamp = timeStowPinAzPositionSwitchTimeout;
    return valueStowPinAzPositionSwitchTimeout;
}

/// MonitorPoint: STOW_PIN_EL_PIN1_INSERTED
/// Elevation stow pin 1 inserted (set=inserted)

/**
 * Get the current value of STOW_PIN_EL_PIN1_INSERTED from the device.
 */

bool MountVertexLLamaBase::getStowPinElPin1Inserted(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinElPin1Inserted);

    timestamp = timeStowPinElPin1Inserted;
    return valueStowPinElPin1Inserted;
}

/// MonitorPoint: STOW_PIN_EL_PIN1_RELEASED
/// Elevation stow pin 1 inserted (set=released)

/**
 * Get the current value of STOW_PIN_EL_PIN1_RELEASED from the device.
 */

bool MountVertexLLamaBase::getStowPinElPin1Released(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinElPin1Released);

    timestamp = timeStowPinElPin1Released;
    return valueStowPinElPin1Released;
}

/// MonitorPoint: STOW_PIN_EL_LOCAL_SYSTEM_ERROR
/// Elevation stow pin local sytem error (set=error)

/**
 * Get the current value of STOW_PIN_EL_LOCAL_SYSTEM_ERROR from the device.
 */

bool MountVertexLLamaBase::getStowPinElLocalSystemError(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinElLocalSystemError);

    timestamp = timeStowPinElLocalSystemError;
    return valueStowPinElLocalSystemError;
}

/// MonitorPoint: STOW_PIN_EL_MOTION_TIMEOUT
/// Elevation stow pin motion timeout

/**
 * Get the current value of STOW_PIN_EL_MOTION_TIMEOUT from the device.
 */

bool MountVertexLLamaBase::getStowPinElMotionTimeout(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinElMotionTimeout);

    timestamp = timeStowPinElMotionTimeout;
    return valueStowPinElMotionTimeout;
}

/// MonitorPoint: STOW_PIN_EL_POSITION_SWITCH_TIMEOUT
/// Elevation stow position switch timeout

/**
 * Get the current value of STOW_PIN_EL_POSITION_SWITCH_TIMEOUT from the device.
 */

bool MountVertexLLamaBase::getStowPinElPositionSwitchTimeout(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheStowPin->getVal(timeStowPinElPositionSwitchTimeout);

    timestamp = timeStowPinElPositionSwitchTimeout;
    return valueStowPinElPositionSwitchTimeout;
}

/**
 * Get the RCA for monitor point SYSTEM_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCASystemStatus() const
{
    return rcaMonitorSystemStatus;
}

/// MonitorPoint: SYSTEM_STATUS
/// System status

/**
 * Get the current value of SYSTEM_STATUS from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getSystemStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorSystemStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< unsigned char > raw(6U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueEmergencyStop.

    valueEmergencyStop = ((raw[0] & 0x01) != 0) ? true : false;

    timeEmergencyStop = timestamp;

    // Set valueStairwayInterlock.

    valueStairwayInterlock = ((raw[0] & 0x02) != 0) ? true : false;

    timeStairwayInterlock = timestamp;

    // Set valueHandlingInterlock.

    valueHandlingInterlock = ((raw[0] & 0x04) != 0) ? true : false;

    timeHandlingInterlock = timestamp;

    // Set valueSmokeAlarmCondition.

    valueSmokeAlarmCondition = ((raw[0] & 0x08) != 0) ? true : false;

    timeSmokeAlarmCondition = timestamp;

    // Set valueAcuBootingFailure.

    valueAcuBootingFailure = ((raw[0] & 0x10) != 0) ? true : false;

    timeAcuBootingFailure = timestamp;

    // Set valueSurvivalStowDtMissingCmd.

    valueSurvivalStowDtMissingCmd = ((raw[0] & 0x20) != 0) ? true : false;

    timeSurvivalStowDtMissingCmd = timestamp;

    // Set valueSurvivalStowDtMissingPulse.

    valueSurvivalStowDtMissingPulse = ((raw[0] & 0x40) != 0) ? true : false;

    timeSurvivalStowDtMissingPulse = timestamp;

    // Set valueTimePulseMissing.

    valueTimePulseMissing = ((raw[0] & 0x80) != 0) ? true : false;

    timeTimePulseMissing = timestamp;

    // Set valueSafeSwitch.

    valueSafeSwitch = ((raw[1] & 0x01) != 0) ? true : false;

    timeSafeSwitch = timestamp;

    // Set valuePowerFailure.

    valuePowerFailure = ((raw[1] & 0x02) != 0) ? true : false;

    timePowerFailure = timestamp;

    // Set valueLine24vFailure.

    valueLine24vFailure = ((raw[1] & 0x04) != 0) ? true : false;

    timeLine24vFailure = timestamp;

    // Set valueBreakerFailure.

    valueBreakerFailure = ((raw[1] & 0x08) != 0) ? true : false;

    timeBreakerFailure = timestamp;

    // Set valueAcuFanFailure.

    valueAcuFanFailure = ((raw[1] & 0x10) != 0) ? true : false;

    timeAcuFanFailure = timestamp;

    // Set valueCommunicationErrorAcuPlc.

    valueCommunicationErrorAcuPlc = ((raw[1] & 0x20) != 0) ? true : false;

    timeCommunicationErrorAcuPlc = timestamp;

    // Set valueCabinetOverTemp.

    valueCabinetOverTemp = ((raw[1] & 0x40) != 0) ? true : false;

    timeCabinetOverTemp = timestamp;

    // Set valueAlmaEStop.

    valueAlmaEStop = ((raw[1] & 0x80) != 0) ? true : false;

    timeAlmaEStop = timestamp;

    // Set valueRampToReceiverCabinNoTiltedUp.

    valueRampToReceiverCabinNoTiltedUp = ((raw[2] & 0x02) != 0) ? true : false;

    timeRampToReceiverCabinNoTiltedUp = timestamp;

    // Set valueDoorToNasmythCabinAOpen.

    valueDoorToNasmythCabinAOpen = ((raw[2] & 0x04) != 0) ? true : false;

    timeDoorToNasmythCabinAOpen = timestamp;

    // Set valueDoorToNasmythCabinBOpen.

    valueDoorToNasmythCabinBOpen = ((raw[2] & 0x08) != 0) ? true : false;

    timeDoorToNasmythCabinBOpen = timestamp;

    // Set valueAccessInterlock.

    valueAccessInterlock = ((raw[2] & 0x10) != 0) ? true : false;

    timeAccessInterlock = timestamp;

    // Set valueReceiverCabinDoorOpen.

    valueReceiverCabinDoorOpen = ((raw[2] & 0x20) != 0) ? true : false;

    timeReceiverCabinDoorOpen = timestamp;

    // Set valuePedestalDoorOpen.

    valuePedestalDoorOpen = ((raw[2] & 0x40) != 0) ? true : false;

    timePedestalDoorOpen = timestamp;

    // Set valueDriveCabinetOpen.

    valueDriveCabinetOpen = ((raw[2] & 0x80) != 0) ? true : false;

    timeDriveCabinetOpen = timestamp;

    // Set valueEmergencyStopCabinet.

    valueEmergencyStopCabinet = ((raw[3] & 0x01) != 0) ? true : false;

    timeEmergencyStopCabinet = timestamp;

    // Set valueEmergencyStopAzDrivesEquipContainer.

    valueEmergencyStopAzDrivesEquipContainer = ((raw[3] & 0x02) != 0) ? true : false;

    timeEmergencyStopAzDrivesEquipContainer = timestamp;

    // Set valueEmergencyStopInsideAntennaBase.

    valueEmergencyStopInsideAntennaBase = ((raw[3] & 0x04) != 0) ? true : false;

    timeEmergencyStopInsideAntennaBase = timestamp;

    // Set valueEmergencyStopPlatform2RecvCabin.

    valueEmergencyStopPlatform2RecvCabin = ((raw[3] & 0x08) != 0) ? true : false;

    timeEmergencyStopPlatform2RecvCabin = timestamp;

    // Set valueEmergencyStopNasmythCabinsAb.

    valueEmergencyStopNasmythCabinsAb = ((raw[3] & 0x10) != 0) ? true : false;

    timeEmergencyStopNasmythCabinsAb = timestamp;

    // Set valueEmergencyStopAcessToPlatformOutsidePedestal.

    valueEmergencyStopAcessToPlatformOutsidePedestal = ((raw[3] & 0x20) != 0) ? true : false;

    timeEmergencyStopAcessToPlatformOutsidePedestal = timestamp;

    // Set valueEmergencyStopPortableControlUnit.

    valueEmergencyStopPortableControlUnit = ((raw[3] & 0x40) != 0) ? true : false;

    timeEmergencyStopPortableControlUnit = timestamp;

    // Set valueEmergencyStopControlContainer.

    valueEmergencyStopControlContainer = ((raw[3] & 0x80) != 0) ? true : false;

    timeEmergencyStopControlContainer = timestamp;

    // Set valueAutoLubricationSystemFailure.

    valueAutoLubricationSystemFailure = ((raw[4] & 0x01) != 0) ? true : false;

    timeAutoLubricationSystemFailure = timestamp;

    // Set valueAutoLubricationSystemMalfunction.

    valueAutoLubricationSystemMalfunction = ((raw[4] & 0x02) != 0) ? true : false;

    timeAutoLubricationSystemMalfunction = timestamp;

    // Set valueCommunicationErrorAcuUps1.

    valueCommunicationErrorAcuUps1 = ((raw[5] & 0x01) != 0) ? true : false;

    timeCommunicationErrorAcuUps1 = timestamp;

    // Set valueCommunicationErrorAcuUps2.

    valueCommunicationErrorAcuUps2 = ((raw[5] & 0x02) != 0) ? true : false;

    timeCommunicationErrorAcuUps2 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCASystemStatus(const unsigned long rca)
{
    rcaMonitorSystemStatus = rca;
}

///This getSystemStatusProxy enusures we call the virtual getSystemStatus
/// and not the MountVertexLLamaBase::getSystemStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getSystemStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSystemStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SYSTEM_STATUS
/// System status

/// MonitorPoint: EMERGENCY_STOP
/// Emergency Stop. Set means applied

/**
 * Get the current value of EMERGENCY_STOP from the device.
 */

bool MountVertexLLamaBase::getEmergencyStop(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStop);

    timestamp = timeEmergencyStop;
    return valueEmergencyStop;
}

/// MonitorPoint: STAIRWAY_INTERLOCK
/// Stairway Interlock. Set means Applied

/**
 * Get the current value of STAIRWAY_INTERLOCK from the device.
 */

bool MountVertexLLamaBase::getStairwayInterlock(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeStairwayInterlock);

    timestamp = timeStairwayInterlock;
    return valueStairwayInterlock;
}

/// MonitorPoint: HANDLING_INTERLOCK
/// Handling Interlock. Set meand applied.

/**
 * Get the current value of HANDLING_INTERLOCK from the device.
 */

bool MountVertexLLamaBase::getHandlingInterlock(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeHandlingInterlock);

    timestamp = timeHandlingInterlock;
    return valueHandlingInterlock;
}

/// MonitorPoint: SMOKE_ALARM_CONDITION
/// Smoke Alarm Condition. Set means detected

/**
 * Get the current value of SMOKE_ALARM_CONDITION from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmCondition(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeSmokeAlarmCondition);

    timestamp = timeSmokeAlarmCondition;
    return valueSmokeAlarmCondition;
}

/// MonitorPoint: ACU_BOOTING_FAILURE
/// ACU Booting Failure. Set means failed

/**
 * Get the current value of ACU_BOOTING_FAILURE from the device.
 */

bool MountVertexLLamaBase::getAcuBootingFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeAcuBootingFailure);

    timestamp = timeAcuBootingFailure;
    return valueAcuBootingFailure;
}

/// MonitorPoint: SURVIVAL_STOW_DT_MISSING_CMD
/// Survival stow due to missing commands after idle time. Set 
    /// means applied

/**
 * Get the current value of SURVIVAL_STOW_DT_MISSING_CMD from the device.
 */

bool MountVertexLLamaBase::getSurvivalStowDtMissingCmd(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeSurvivalStowDtMissingCmd);

    timestamp = timeSurvivalStowDtMissingCmd;
    return valueSurvivalStowDtMissingCmd;
}

/// MonitorPoint: SURVIVAL_STOW_DT_MISSING_PULSE
/// Survival stow due to missing time pulse after idele time. 
    /// Set means applied

/**
 * Get the current value of SURVIVAL_STOW_DT_MISSING_PULSE from the device.
 */

bool MountVertexLLamaBase::getSurvivalStowDtMissingPulse(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeSurvivalStowDtMissingPulse);

    timestamp = timeSurvivalStowDtMissingPulse;
    return valueSurvivalStowDtMissingPulse;
}

/// MonitorPoint: TIME_PULSE_MISSING
/// time pulse missing. Set means missing.

/**
 * Get the current value of TIME_PULSE_MISSING from the device.
 */

bool MountVertexLLamaBase::getTimePulseMissing(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeTimePulseMissing);

    timestamp = timeTimePulseMissing;
    return valueTimePulseMissing;
}

/// MonitorPoint: SAFE_SWITCH
/// Safe switch status information

/**
 * Get the current value of SAFE_SWITCH from the device.
 */

bool MountVertexLLamaBase::getSafeSwitch(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeSafeSwitch);

    timestamp = timeSafeSwitch;
    return valueSafeSwitch;
}

/// MonitorPoint: POWER_FAILURE
/// Power Failure

/**
 * Get the current value of POWER_FAILURE from the device.
 */

bool MountVertexLLamaBase::getPowerFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timePowerFailure);

    timestamp = timePowerFailure;
    return valuePowerFailure;
}

/// MonitorPoint: LINE_24V_FAILURE
/// 24V failure

/**
 * Get the current value of LINE_24V_FAILURE from the device.
 */

bool MountVertexLLamaBase::getLine24vFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeLine24vFailure);

    timestamp = timeLine24vFailure;
    return valueLine24vFailure;
}

/// MonitorPoint: BREAKER_FAILURE
/// breaker failure

/**
 * Get the current value of BREAKER_FAILURE from the device.
 */

bool MountVertexLLamaBase::getBreakerFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeBreakerFailure);

    timestamp = timeBreakerFailure;
    return valueBreakerFailure;
}

/// MonitorPoint: ACU_FAN_FAILURE
/// ACU fan failure

/**
 * Get the current value of ACU_FAN_FAILURE from the device.
 */

bool MountVertexLLamaBase::getAcuFanFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeAcuFanFailure);

    timestamp = timeAcuFanFailure;
    return valueAcuFanFailure;
}

/// MonitorPoint: COMMUNICATION_ERROR_ACU_PLC
/// communication error ACU_PLC

/**
 * Get the current value of COMMUNICATION_ERROR_ACU_PLC from the device.
 */

bool MountVertexLLamaBase::getCommunicationErrorAcuPlc(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeCommunicationErrorAcuPlc);

    timestamp = timeCommunicationErrorAcuPlc;
    return valueCommunicationErrorAcuPlc;
}

/// MonitorPoint: CABINET_OVER_TEMP
/// cabinet over temperature

/**
 * Get the current value of CABINET_OVER_TEMP from the device.
 */

bool MountVertexLLamaBase::getCabinetOverTemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeCabinetOverTemp);

    timestamp = timeCabinetOverTemp;
    return valueCabinetOverTemp;
}

/// MonitorPoint: ALMA_E_STOP
/// ALMA e-stop failure

/**
 * Get the current value of ALMA_E_STOP from the device.
 */

bool MountVertexLLamaBase::getAlmaEStop(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeAlmaEStop);

    timestamp = timeAlmaEStop;
    return valueAlmaEStop;
}

/// MonitorPoint: RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP
/// Ramp to receiver cabin not tilted up status information

/**
 * Get the current value of RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP from the device.
 */

bool MountVertexLLamaBase::getRampToReceiverCabinNoTiltedUp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeRampToReceiverCabinNoTiltedUp);

    timestamp = timeRampToReceiverCabinNoTiltedUp;
    return valueRampToReceiverCabinNoTiltedUp;
}

/// MonitorPoint: DOOR_TO_NASMYTH_CABIN_A_OPEN
/// Door to Nasmyth cabin A open

/**
 * Get the current value of DOOR_TO_NASMYTH_CABIN_A_OPEN from the device.
 */

bool MountVertexLLamaBase::getDoorToNasmythCabinAOpen(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeDoorToNasmythCabinAOpen);

    timestamp = timeDoorToNasmythCabinAOpen;
    return valueDoorToNasmythCabinAOpen;
}

/// MonitorPoint: DOOR_TO_NASMYTH_CABIN_B_OPEN
/// Door to Nasmyth cabin B open

/**
 * Get the current value of DOOR_TO_NASMYTH_CABIN_B_OPEN from the device.
 */

bool MountVertexLLamaBase::getDoorToNasmythCabinBOpen(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeDoorToNasmythCabinBOpen);

    timestamp = timeDoorToNasmythCabinBOpen;
    return valueDoorToNasmythCabinBOpen;
}

/// MonitorPoint: ACCESS_INTERLOCK
/// Acess Interlock

/**
 * Get the current value of ACCESS_INTERLOCK from the device.
 */

bool MountVertexLLamaBase::getAccessInterlock(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeAccessInterlock);

    timestamp = timeAccessInterlock;
    return valueAccessInterlock;
}

/// MonitorPoint: RECEIVER_CABIN_DOOR_OPEN
/// receiver cabin door open status information

/**
 * Get the current value of RECEIVER_CABIN_DOOR_OPEN from the device.
 */

bool MountVertexLLamaBase::getReceiverCabinDoorOpen(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeReceiverCabinDoorOpen);

    timestamp = timeReceiverCabinDoorOpen;
    return valueReceiverCabinDoorOpen;
}

/// MonitorPoint: PEDESTAL_DOOR_OPEN
/// pedestal door open warning information

/**
 * Get the current value of PEDESTAL_DOOR_OPEN from the device.
 */

bool MountVertexLLamaBase::getPedestalDoorOpen(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timePedestalDoorOpen);

    timestamp = timePedestalDoorOpen;
    return valuePedestalDoorOpen;
}

/// MonitorPoint: DRIVE_CABINET_OPEN
/// drive cabinet open warning information

/**
 * Get the current value of DRIVE_CABINET_OPEN from the device.
 */

bool MountVertexLLamaBase::getDriveCabinetOpen(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeDriveCabinetOpen);

    timestamp = timeDriveCabinetOpen;
    return valueDriveCabinetOpen;
}

/// MonitorPoint: EMERGENCY_STOP_CABINET
/// emergency stop cabinet failure

/**
 * Get the current value of EMERGENCY_STOP_CABINET from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopCabinet(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopCabinet);

    timestamp = timeEmergencyStopCabinet;
    return valueEmergencyStopCabinet;
}

/// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER
/// emergency stop AZ drives failure / equipment container

CORBA::Boolean MountVertexLLamaBase::GET_EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Boolean ret(getEmergencyStopAzDrivesEquipContainer(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER

/**
 * Get the current value of EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopAzDrivesEquipContainer(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopAzDrivesEquipContainer);

    timestamp = timeEmergencyStopAzDrivesEquipContainer;
    return valueEmergencyStopAzDrivesEquipContainer;
}

/// MonitorPoint: EMERGENCY_STOP_INSIDE_ANTENNA_BASE
/// emergency stop inside antenna base failure

/**
 * Get the current value of EMERGENCY_STOP_INSIDE_ANTENNA_BASE from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopInsideAntennaBase(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopInsideAntennaBase);

    timestamp = timeEmergencyStopInsideAntennaBase;
    return valueEmergencyStopInsideAntennaBase;
}

/// MonitorPoint: EMERGENCY_STOP_PLATFORM_2_RECV_CABIN
/// emergency stop platform 2 failure / receiver cabin

CORBA::Boolean MountVertexLLamaBase::GET_EMERGENCY_STOP_PLATFORM_2_RECV_CABIN(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Boolean ret(getEmergencyStopPlatform2RecvCabin(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/// MonitorPoint: EMERGENCY_STOP_PLATFORM_2_RECV_CABIN

/**
 * Get the current value of EMERGENCY_STOP_PLATFORM_2_RECV_CABIN from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopPlatform2RecvCabin(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopPlatform2RecvCabin);

    timestamp = timeEmergencyStopPlatform2RecvCabin;
    return valueEmergencyStopPlatform2RecvCabin;
}

/// MonitorPoint: EMERGENCY_STOP_NASMYTH_CABINS_AB
/// emergency stop Nasmyth cabins A/B

CORBA::Boolean MountVertexLLamaBase::GET_EMERGENCY_STOP_NASMYTH_CABINS_AB(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Boolean ret(getEmergencyStopNasmythCabinsAb(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/// MonitorPoint: EMERGENCY_STOP_NASMYTH_CABINS_AB

/**
 * Get the current value of EMERGENCY_STOP_NASMYTH_CABINS_AB from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopNasmythCabinsAb(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopNasmythCabinsAb);

    timestamp = timeEmergencyStopNasmythCabinsAb;
    return valueEmergencyStopNasmythCabinsAb;
}

/// MonitorPoint: EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL
/// emergency stop access to platform / outside pedestal

CORBA::Boolean MountVertexLLamaBase::GET_EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Boolean ret(getEmergencyStopAcessToPlatformOutsidePedestal(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/// MonitorPoint: EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL

/**
 * Get the current value of EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopAcessToPlatformOutsidePedestal(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopAcessToPlatformOutsidePedestal);

    timestamp = timeEmergencyStopAcessToPlatformOutsidePedestal;
    return valueEmergencyStopAcessToPlatformOutsidePedestal;
}

/// MonitorPoint: EMERGENCY_STOP_PORTABLE_CONTROL_UNIT
/// emergency stop portable control unit failure

/**
 * Get the current value of EMERGENCY_STOP_PORTABLE_CONTROL_UNIT from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopPortableControlUnit(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopPortableControlUnit);

    timestamp = timeEmergencyStopPortableControlUnit;
    return valueEmergencyStopPortableControlUnit;
}

/// MonitorPoint: EMERGENCY_STOP_CONTROL_CONTAINER
/// emergency stop control container

CORBA::Boolean MountVertexLLamaBase::GET_EMERGENCY_STOP_CONTROL_CONTAINER(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Boolean ret(getEmergencyStopControlContainer(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/// MonitorPoint: EMERGENCY_STOP_CONTROL_CONTAINER

/**
 * Get the current value of EMERGENCY_STOP_CONTROL_CONTAINER from the device.
 */

bool MountVertexLLamaBase::getEmergencyStopControlContainer(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeEmergencyStopControlContainer);

    timestamp = timeEmergencyStopControlContainer;
    return valueEmergencyStopControlContainer;
}

/// MonitorPoint: AUTO_LUBRICATION_SYSTEM_FAILURE
/// Auto lubrication system failure

/**
 * Get the current value of AUTO_LUBRICATION_SYSTEM_FAILURE from the device.
 */

bool MountVertexLLamaBase::getAutoLubricationSystemFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeAutoLubricationSystemFailure);

    timestamp = timeAutoLubricationSystemFailure;
    return valueAutoLubricationSystemFailure;
}

/// MonitorPoint: AUTO_LUBRICATION_SYSTEM_MALFUNCTION
/// Auto lubrication system malfunction

/**
 * Get the current value of AUTO_LUBRICATION_SYSTEM_MALFUNCTION from the device.
 */

bool MountVertexLLamaBase::getAutoLubricationSystemMalfunction(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeAutoLubricationSystemMalfunction);

    timestamp = timeAutoLubricationSystemMalfunction;
    return valueAutoLubricationSystemMalfunction;
}

/// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS1
/// communication error ACU_UPS1

/**
 * Get the current value of COMMUNICATION_ERROR_ACU_UPS1 from the device.
 */

bool MountVertexLLamaBase::getCommunicationErrorAcuUps1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeCommunicationErrorAcuUps1);

    timestamp = timeCommunicationErrorAcuUps1;
    return valueCommunicationErrorAcuUps1;
}

/// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS2
/// communication error ACU_UPS2

CORBA::Boolean MountVertexLLamaBase::GET_COMMUNICATION_ERROR_ACU_UPS2(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Boolean ret(getCommunicationErrorAcuUps2(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS2

/**
 * Get the current value of COMMUNICATION_ERROR_ACU_UPS2 from the device.
 */

bool MountVertexLLamaBase::getCommunicationErrorAcuUps2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemStatus->getVal(timeCommunicationErrorAcuUps2);

    timestamp = timeCommunicationErrorAcuUps2;
    return valueCommunicationErrorAcuUps2;
}

/**
 * Get the RCA for monitor point AZ_ENC_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAAzEncStatus() const
{
    return rcaMonitorAzEncStatus;
}

/// MonitorPoint: AZ_ENC_STATUS
/// Status of azimuth encoder.

/**
 * Get the current value of AZ_ENC_STATUS from the device.
 */

unsigned char MountVertexLLamaBase::getAzEncStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorAzEncStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    // Set valueAzEncDoesNotRespond.

    valueAzEncDoesNotRespond = ((raw & 0x08) != 0) ? true : false;

    timeAzEncDoesNotRespond = timestamp;

    // Set valueAzEncPositionMeaningless.

    valueAzEncPositionMeaningless = ((raw & 0x20) != 0) ? true : false;

    timeAzEncPositionMeaningless = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAAzEncStatus(const unsigned long rca)
{
    rcaMonitorAzEncStatus = rca;
}

///This getAzEncStatusProxy enusures we call the virtual getAzEncStatus
/// and not the MountVertexLLamaBase::getAzEncStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getAzEncStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getAzEncStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: AZ_ENC_STATUS
/// Status of azimuth encoder.

/// MonitorPoint: AZ_ENC_DOES_NOT_RESPOND
/// Encoder does not respond.

/**
 * Get the current value of AZ_ENC_DOES_NOT_RESPOND from the device.
 */

bool MountVertexLLamaBase::getAzEncDoesNotRespond(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAzEncStatus->getVal(timeAzEncDoesNotRespond);

    timestamp = timeAzEncDoesNotRespond;
    return valueAzEncDoesNotRespond;
}

/// MonitorPoint: AZ_ENC_POSITION_MEANINGLESS
/// Position read from encoder does not make sense.

/**
 * Get the current value of AZ_ENC_POSITION_MEANINGLESS from the device.
 */

bool MountVertexLLamaBase::getAzEncPositionMeaningless(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAzEncStatus->getVal(timeAzEncPositionMeaningless);

    timestamp = timeAzEncPositionMeaningless;
    return valueAzEncPositionMeaningless;
}

/**
 * Get the RCA for monitor point EL_ENC_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAElEncStatus() const
{
    return rcaMonitorElEncStatus;
}

/// MonitorPoint: EL_ENC_STATUS
/// Status of elevation encoders.

/**
 * Get the current value of EL_ENC_STATUS from the device.
 */

unsigned char MountVertexLLamaBase::getElEncStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorElEncStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    // Set valueElEncDoesNotRespond.

    valueElEncDoesNotRespond = ((raw & 0x08) != 0) ? true : false;

    timeElEncDoesNotRespond = timestamp;

    // Set valueElEncPositionMeaningless.

    valueElEncPositionMeaningless = ((raw & 0x20) != 0) ? true : false;

    timeElEncPositionMeaningless = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAElEncStatus(const unsigned long rca)
{
    rcaMonitorElEncStatus = rca;
}

///This getElEncStatusProxy enusures we call the virtual getElEncStatus
/// and not the MountVertexLLamaBase::getElEncStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getElEncStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getElEncStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: EL_ENC_STATUS
/// Status of elevation encoders.

/// MonitorPoint: EL_ENC_DOES_NOT_RESPOND
/// Encoder does not respond.

/**
 * Get the current value of EL_ENC_DOES_NOT_RESPOND from the device.
 */

bool MountVertexLLamaBase::getElEncDoesNotRespond(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElEncStatus->getVal(timeElEncDoesNotRespond);

    timestamp = timeElEncDoesNotRespond;
    return valueElEncDoesNotRespond;
}

/// MonitorPoint: EL_ENC_POSITION_MEANINGLESS
/// Position read from encoder does not make sense.

/**
 * Get the current value of EL_ENC_POSITION_MEANINGLESS from the device.
 */

bool MountVertexLLamaBase::getElEncPositionMeaningless(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElEncStatus->getVal(timeElEncPositionMeaningless);

    timestamp = timeElEncPositionMeaningless;
    return valueElEncPositionMeaningless;
}

/**
 * Get the RCA for monitor point EL_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAElStatus() const
{
    return rcaMonitorElStatus;
}

/// MonitorPoint: EL_STATUS
/// Status of elevation axis. Conditions may be fault conditions 
    /// or status information. Fault conditions require the use 
    /// of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

/**
 * Get the current value of EL_STATUS from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getElStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorElStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< unsigned char > raw(8U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueElPrelimitUp.

    valueElPrelimitUp = ((raw[0] & 0x01) != 0) ? true : false;

    timeElPrelimitUp = timestamp;

    // Set valueElPrelimitDown.

    valueElPrelimitDown = ((raw[0] & 0x02) != 0) ? true : false;

    timeElPrelimitDown = timestamp;

    // Set valueElLimitUp.

    valueElLimitUp = ((raw[0] & 0x04) != 0) ? true : false;

    timeElLimitUp = timestamp;

    // Set valueElLimitDown.

    valueElLimitDown = ((raw[0] & 0x08) != 0) ? true : false;

    timeElLimitDown = timestamp;

    // Set valueElEmergencyLimitUp.

    valueElEmergencyLimitUp = ((raw[0] & 0x10) != 0) ? true : false;

    timeElEmergencyLimitUp = timestamp;

    // Set valueElEmergencyLimitDown.

    valueElEmergencyLimitDown = ((raw[0] & 0x20) != 0) ? true : false;

    timeElEmergencyLimitDown = timestamp;

    // Set valueElSecondEmergencyLimitUpLimit.

    valueElSecondEmergencyLimitUpLimit = ((raw[0] & 0x40) != 0) ? true : false;

    timeElSecondEmergencyLimitUpLimit = timestamp;

    // Set valueElSecondEmergencyLimitDownLimit.

    valueElSecondEmergencyLimitDownLimit = ((raw[0] & 0x80) != 0) ? true : false;

    timeElSecondEmergencyLimitDownLimit = timestamp;

    // Set valueElServoFailure.

    valueElServoFailure = ((raw[1] & 0x01) != 0) ? true : false;

    timeElServoFailure = timestamp;

    // Set valueElOverspeedFault.

    valueElOverspeedFault = ((raw[1] & 0x02) != 0) ? true : false;

    timeElOverspeedFault = timestamp;

    // Set valueElImmobileFailure.

    valueElImmobileFailure = ((raw[1] & 0x04) != 0) ? true : false;

    timeElImmobileFailure = timestamp;

    // Set valueElSpeedZeroStatus.

    valueElSpeedZeroStatus = ((raw[1] & 0x08) != 0) ? true : false;

    timeElSpeedZeroStatus = timestamp;

    // Set valueElStowPositionStatus.

    valueElStowPositionStatus = ((raw[1] & 0x10) != 0) ? true : false;

    timeElStowPositionStatus = timestamp;

    // Set valueElEncoderFailure.

    valueElEncoderFailure = ((raw[1] & 0x20) != 0) ? true : false;

    timeElEncoderFailure = timestamp;

    // Set valueElInsaneVelocityFeedback.

    valueElInsaneVelocityFeedback = ((raw[1] & 0x40) != 0) ? true : false;

    timeElInsaneVelocityFeedback = timestamp;

    // Set valueElBrake1Failure.

    valueElBrake1Failure = ((raw[2] & 0x01) != 0) ? true : false;

    timeElBrake1Failure = timestamp;

    // Set valueElBrake2Failure.

    valueElBrake2Failure = ((raw[2] & 0x02) != 0) ? true : false;

    timeElBrake2Failure = timestamp;

    // Set valueElBrake3Failure.

    valueElBrake3Failure = ((raw[2] & 0x04) != 0) ? true : false;

    timeElBrake3Failure = timestamp;

    // Set valueElBrake4Failure.

    valueElBrake4Failure = ((raw[2] & 0x08) != 0) ? true : false;

    timeElBrake4Failure = timestamp;

    // Set valueElAmplifier1Failure.

    valueElAmplifier1Failure = ((raw[3] & 0x01) != 0) ? true : false;

    timeElAmplifier1Failure = timestamp;

    // Set valueElAmplifier2Failure.

    valueElAmplifier2Failure = ((raw[3] & 0x02) != 0) ? true : false;

    timeElAmplifier2Failure = timestamp;

    // Set valueElAmplifier3Failure.

    valueElAmplifier3Failure = ((raw[3] & 0x04) != 0) ? true : false;

    timeElAmplifier3Failure = timestamp;

    // Set valueElAmplifier4Failure.

    valueElAmplifier4Failure = ((raw[3] & 0x08) != 0) ? true : false;

    timeElAmplifier4Failure = timestamp;

    // Set valueElCanCommErrorToServoAmplifiers.

    valueElCanCommErrorToServoAmplifiers = ((raw[3] & 0x10) != 0) ? true : false;

    timeElCanCommErrorToServoAmplifiers = timestamp;

    // Set valueElBreakerFault.

    valueElBreakerFault = ((raw[3] & 0x20) != 0) ? true : false;

    timeElBreakerFault = timestamp;

    // Set valueElMotor1OverTemp.

    valueElMotor1OverTemp = ((raw[4] & 0x01) != 0) ? true : false;

    timeElMotor1OverTemp = timestamp;

    // Set valueElMotor2OverTemp.

    valueElMotor2OverTemp = ((raw[4] & 0x02) != 0) ? true : false;

    timeElMotor2OverTemp = timestamp;

    // Set valueElMotor3OverTemp.

    valueElMotor3OverTemp = ((raw[4] & 0x04) != 0) ? true : false;

    timeElMotor3OverTemp = timestamp;

    // Set valueElMotor4OverTemp.

    valueElMotor4OverTemp = ((raw[4] & 0x08) != 0) ? true : false;

    timeElMotor4OverTemp = timestamp;

    // Set valueElRegenerationResistorOverTemp.

    valueElRegenerationResistorOverTemp = ((raw[4] & 0x10) != 0) ? true : false;

    timeElRegenerationResistorOverTemp = timestamp;

    // Set valueElServoOscillationFailure.

    valueElServoOscillationFailure = ((raw[4] & 0x20) != 0) ? true : false;

    timeElServoOscillationFailure = timestamp;

    // Set valueElAuxiliaryEncoderFailure.

    valueElAuxiliaryEncoderFailure = ((raw[4] & 0x40) != 0) ? true : false;

    timeElAuxiliaryEncoderFailure = timestamp;

    // Set valueElPositionDeviation.

    valueElPositionDeviation = ((raw[4] & 0x80) != 0) ? true : false;

    timeElPositionDeviation = timestamp;

    // Set valueElAuxMotor12OffStatus.

    valueElAuxMotor12OffStatus = ((raw[6] & 0x01) != 0) ? true : false;

    timeElAuxMotor12OffStatus = timestamp;

    // Set valueElAuxMotor34OffStatus.

    valueElAuxMotor34OffStatus = ((raw[6] & 0x02) != 0) ? true : false;

    timeElAuxMotor34OffStatus = timestamp;

    // Set valueElGearbox1OilLevelWarning.

    valueElGearbox1OilLevelWarning = ((raw[6] & 0x10) != 0) ? true : false;

    timeElGearbox1OilLevelWarning = timestamp;

    // Set valueElGearbox2OilLevelWarning.

    valueElGearbox2OilLevelWarning = ((raw[6] & 0x20) != 0) ? true : false;

    timeElGearbox2OilLevelWarning = timestamp;

    // Set valueElGearbox3OilLevelWarning.

    valueElGearbox3OilLevelWarning = ((raw[6] & 0x40) != 0) ? true : false;

    timeElGearbox3OilLevelWarning = timestamp;

    // Set valueElGearbox4OilLevelWarning.

    valueElGearbox4OilLevelWarning = ((raw[6] & 0x80) != 0) ? true : false;

    timeElGearbox4OilLevelWarning = timestamp;

    // Set valueElComputerDisabled.

    valueElComputerDisabled = ((raw[7] & 0x01) != 0) ? true : false;

    timeElComputerDisabled = timestamp;

    // Set valueElAxisDisabled.

    valueElAxisDisabled = ((raw[7] & 0x02) != 0) ? true : false;

    timeElAxisDisabled = timestamp;

    // Set valueElHandheldPcuOperation.

    valueElHandheldPcuOperation = ((raw[7] & 0x04) != 0) ? true : false;

    timeElHandheldPcuOperation = timestamp;

    // Set valueElAxisInStopStatus.

    valueElAxisInStopStatus = ((raw[7] & 0x08) != 0) ? true : false;

    timeElAxisInStopStatus = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAElStatus(const unsigned long rca)
{
    rcaMonitorElStatus = rca;
}

///This getElStatusProxy enusures we call the virtual getElStatus
/// and not the MountVertexLLamaBase::getElStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getElStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getElStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: EL_STATUS
/// Status of elevation axis. Conditions may be fault conditions 
/// or status information. Fault conditions require the use 
/// of the CLEAR_FAULT_CMD to clear, while status information 
/// will clear when the hardware condition is cleared.

/// MonitorPoint: EL_PRELIMIT_UP
/// PRELIMIT_UP

/**
 * Get the current value of EL_PRELIMIT_UP from the device.
 */

bool MountVertexLLamaBase::getElPrelimitUp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElPrelimitUp);

    timestamp = timeElPrelimitUp;
    return valueElPrelimitUp;
}

/// MonitorPoint: EL_PRELIMIT_DOWN
/// PRELIMIT_DOWN

/**
 * Get the current value of EL_PRELIMIT_DOWN from the device.
 */

bool MountVertexLLamaBase::getElPrelimitDown(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElPrelimitDown);

    timestamp = timeElPrelimitDown;
    return valueElPrelimitDown;
}

/// MonitorPoint: EL_LIMIT_UP
/// LIMIT_UP

/**
 * Get the current value of EL_LIMIT_UP from the device.
 */

bool MountVertexLLamaBase::getElLimitUp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElLimitUp);

    timestamp = timeElLimitUp;
    return valueElLimitUp;
}

/// MonitorPoint: EL_LIMIT_DOWN
/// LIMIT_DOWN

/**
 * Get the current value of EL_LIMIT_DOWN from the device.
 */

bool MountVertexLLamaBase::getElLimitDown(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElLimitDown);

    timestamp = timeElLimitDown;
    return valueElLimitDown;
}

/// MonitorPoint: EL_EMERGENCY_LIMIT_UP
/// EMERGENCY_LIMIT_UP

/**
 * Get the current value of EL_EMERGENCY_LIMIT_UP from the device.
 */

bool MountVertexLLamaBase::getElEmergencyLimitUp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElEmergencyLimitUp);

    timestamp = timeElEmergencyLimitUp;
    return valueElEmergencyLimitUp;
}

/// MonitorPoint: EL_EMERGENCY_LIMIT_DOWN
/// EMERGENCY_LIMIT_DOWN

/**
 * Get the current value of EL_EMERGENCY_LIMIT_DOWN from the device.
 */

bool MountVertexLLamaBase::getElEmergencyLimitDown(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElEmergencyLimitDown);

    timestamp = timeElEmergencyLimitDown;
    return valueElEmergencyLimitDown;
}

/// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT
/// SECOND_EMERGENCY_LIMIT_UP_LIMIT

/**
 * Get the current value of EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT from the device.
 */

bool MountVertexLLamaBase::getElSecondEmergencyLimitUpLimit(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElSecondEmergencyLimitUpLimit);

    timestamp = timeElSecondEmergencyLimitUpLimit;
    return valueElSecondEmergencyLimitUpLimit;
}

/// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT
/// SECOND_EMERGENCY_LIMIT_DOWN_LIMIT

/**
 * Get the current value of EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT from the device.
 */

bool MountVertexLLamaBase::getElSecondEmergencyLimitDownLimit(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElSecondEmergencyLimitDownLimit);

    timestamp = timeElSecondEmergencyLimitDownLimit;
    return valueElSecondEmergencyLimitDownLimit;
}

/// MonitorPoint: EL_SERVO_FAILURE
/// SERVO_FAILURE

/**
 * Get the current value of EL_SERVO_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElServoFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElServoFailure);

    timestamp = timeElServoFailure;
    return valueElServoFailure;
}

/// MonitorPoint: EL_OVERSPEED_FAULT
/// OVERSPEED_FAULT

/**
 * Get the current value of EL_OVERSPEED_FAULT from the device.
 */

bool MountVertexLLamaBase::getElOverspeedFault(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElOverspeedFault);

    timestamp = timeElOverspeedFault;
    return valueElOverspeedFault;
}

/// MonitorPoint: EL_IMMOBILE_FAILURE
/// IMMOBILE_FAILURE

/**
 * Get the current value of EL_IMMOBILE_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElImmobileFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElImmobileFailure);

    timestamp = timeElImmobileFailure;
    return valueElImmobileFailure;
}

/// MonitorPoint: EL_SPEED_ZERO_STATUS
/// SPEED_ZERO_STATUS

/**
 * Get the current value of EL_SPEED_ZERO_STATUS from the device.
 */

bool MountVertexLLamaBase::getElSpeedZeroStatus(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElSpeedZeroStatus);

    timestamp = timeElSpeedZeroStatus;
    return valueElSpeedZeroStatus;
}

/// MonitorPoint: EL_STOW_POSITION_STATUS
/// STOW_POSITION_STATUS

/**
 * Get the current value of EL_STOW_POSITION_STATUS from the device.
 */

bool MountVertexLLamaBase::getElStowPositionStatus(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElStowPositionStatus);

    timestamp = timeElStowPositionStatus;
    return valueElStowPositionStatus;
}

/// MonitorPoint: EL_ENCODER_FAILURE
/// ENCODER_FAILURE

/**
 * Get the current value of EL_ENCODER_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElEncoderFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElEncoderFailure);

    timestamp = timeElEncoderFailure;
    return valueElEncoderFailure;
}

/// MonitorPoint: EL_INSANE_VELOCITY_FEEDBACK
/// INSANE_VELOCITY_FEEDBACK

/**
 * Get the current value of EL_INSANE_VELOCITY_FEEDBACK from the device.
 */

bool MountVertexLLamaBase::getElInsaneVelocityFeedback(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElInsaneVelocityFeedback);

    timestamp = timeElInsaneVelocityFeedback;
    return valueElInsaneVelocityFeedback;
}

/// MonitorPoint: EL_BRAKE_1_FAILURE
/// BRAKE_1_FAILURE

/**
 * Get the current value of EL_BRAKE_1_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElBrake1Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElBrake1Failure);

    timestamp = timeElBrake1Failure;
    return valueElBrake1Failure;
}

/// MonitorPoint: EL_BRAKE_2_FAILURE
/// BRAKE_2_FAILURE

/**
 * Get the current value of EL_BRAKE_2_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElBrake2Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElBrake2Failure);

    timestamp = timeElBrake2Failure;
    return valueElBrake2Failure;
}

/// MonitorPoint: EL_BRAKE_3_FAILURE
/// BRAKE_3_FAILURE

/**
 * Get the current value of EL_BRAKE_3_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElBrake3Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElBrake3Failure);

    timestamp = timeElBrake3Failure;
    return valueElBrake3Failure;
}

/// MonitorPoint: EL_BRAKE_4_FAILURE
/// BRAKE_4_FAILURE

/**
 * Get the current value of EL_BRAKE_4_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElBrake4Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElBrake4Failure);

    timestamp = timeElBrake4Failure;
    return valueElBrake4Failure;
}

/// MonitorPoint: EL_AMPLIFIER_1_FAILURE
/// AMPLIFIER_1_FAILURE

/**
 * Get the current value of EL_AMPLIFIER_1_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElAmplifier1Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAmplifier1Failure);

    timestamp = timeElAmplifier1Failure;
    return valueElAmplifier1Failure;
}

/// MonitorPoint: EL_AMPLIFIER_2_FAILURE
/// AMPLIFIER_2_FAILURE

/**
 * Get the current value of EL_AMPLIFIER_2_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElAmplifier2Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAmplifier2Failure);

    timestamp = timeElAmplifier2Failure;
    return valueElAmplifier2Failure;
}

/// MonitorPoint: EL_AMPLIFIER_3_FAILURE
/// AMPLIFIER_3_FAILURE

/**
 * Get the current value of EL_AMPLIFIER_3_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElAmplifier3Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAmplifier3Failure);

    timestamp = timeElAmplifier3Failure;
    return valueElAmplifier3Failure;
}

/// MonitorPoint: EL_AMPLIFIER_4_FAILURE
/// AMPLIFIER_4_FAILURE

/**
 * Get the current value of EL_AMPLIFIER_4_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElAmplifier4Failure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAmplifier4Failure);

    timestamp = timeElAmplifier4Failure;
    return valueElAmplifier4Failure;
}

/// MonitorPoint: EL_CAN_COMM_ERROR_TO_SERVO_AMPLIFIERS
/// CAN communication error to servo amplifiers

/**
 * Get the current value of EL_CAN_COMM_ERROR_TO_SERVO_AMPLIFIERS from the device.
 */

bool MountVertexLLamaBase::getElCanCommErrorToServoAmplifiers(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElCanCommErrorToServoAmplifiers);

    timestamp = timeElCanCommErrorToServoAmplifiers;
    return valueElCanCommErrorToServoAmplifiers;
}

/// MonitorPoint: EL_BREAKER_FAULT
/// breaker failure

/**
 * Get the current value of EL_BREAKER_FAULT from the device.
 */

bool MountVertexLLamaBase::getElBreakerFault(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElBreakerFault);

    timestamp = timeElBreakerFault;
    return valueElBreakerFault;
}

/// MonitorPoint: EL_MOTOR_1_OVER_TEMP
/// MOTOR_1_OVER_TEMP

/**
 * Get the current value of EL_MOTOR_1_OVER_TEMP from the device.
 */

bool MountVertexLLamaBase::getElMotor1OverTemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElMotor1OverTemp);

    timestamp = timeElMotor1OverTemp;
    return valueElMotor1OverTemp;
}

/// MonitorPoint: EL_MOTOR_2_OVER_TEMP
/// MOTOR_2_OVER_TEMP

/**
 * Get the current value of EL_MOTOR_2_OVER_TEMP from the device.
 */

bool MountVertexLLamaBase::getElMotor2OverTemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElMotor2OverTemp);

    timestamp = timeElMotor2OverTemp;
    return valueElMotor2OverTemp;
}

/// MonitorPoint: EL_MOTOR_3_OVER_TEMP
/// MOTOR_3_OVER_TEMP

/**
 * Get the current value of EL_MOTOR_3_OVER_TEMP from the device.
 */

bool MountVertexLLamaBase::getElMotor3OverTemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElMotor3OverTemp);

    timestamp = timeElMotor3OverTemp;
    return valueElMotor3OverTemp;
}

/// MonitorPoint: EL_MOTOR_4_OVER_TEMP
/// MOTOR_4_OVER_TEMP

/**
 * Get the current value of EL_MOTOR_4_OVER_TEMP from the device.
 */

bool MountVertexLLamaBase::getElMotor4OverTemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElMotor4OverTemp);

    timestamp = timeElMotor4OverTemp;
    return valueElMotor4OverTemp;
}

/// MonitorPoint: EL_REGENERATION_RESISTOR_OVER_TEMP
/// REGENERATION_RESISTOR_OVER_TEMP

/**
 * Get the current value of EL_REGENERATION_RESISTOR_OVER_TEMP from the device.
 */

bool MountVertexLLamaBase::getElRegenerationResistorOverTemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElRegenerationResistorOverTemp);

    timestamp = timeElRegenerationResistorOverTemp;
    return valueElRegenerationResistorOverTemp;
}

/// MonitorPoint: EL_SERVO_OSCILLATION_FAILURE
/// SERVO_OSCILLATION_FAILURE

/**
 * Get the current value of EL_SERVO_OSCILLATION_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElServoOscillationFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElServoOscillationFailure);

    timestamp = timeElServoOscillationFailure;
    return valueElServoOscillationFailure;
}

/// MonitorPoint: EL_AUXILIARY_ENCODER_FAILURE
/// AUXILIARY_ENCODER_FAILURE

/**
 * Get the current value of EL_AUXILIARY_ENCODER_FAILURE from the device.
 */

bool MountVertexLLamaBase::getElAuxiliaryEncoderFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAuxiliaryEncoderFailure);

    timestamp = timeElAuxiliaryEncoderFailure;
    return valueElAuxiliaryEncoderFailure;
}

/// MonitorPoint: EL_POSITION_DEVIATION
/// POSITION_DEVIATION

/**
 * Get the current value of EL_POSITION_DEVIATION from the device.
 */

bool MountVertexLLamaBase::getElPositionDeviation(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElPositionDeviation);

    timestamp = timeElPositionDeviation;
    return valueElPositionDeviation;
}

/// MonitorPoint: EL_AUX_MOTOR_1_2_OFF_STATUS
/// AUX_MOTOR_1_2_OFF_STATUS

/**
 * Get the current value of EL_AUX_MOTOR_1_2_OFF_STATUS from the device.
 */

bool MountVertexLLamaBase::getElAuxMotor12OffStatus(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAuxMotor12OffStatus);

    timestamp = timeElAuxMotor12OffStatus;
    return valueElAuxMotor12OffStatus;
}

/// MonitorPoint: EL_AUX_MOTOR_3_4_OFF_STATUS
/// AUX_MOTOR_3_4_OFF_STATUS

/**
 * Get the current value of EL_AUX_MOTOR_3_4_OFF_STATUS from the device.
 */

bool MountVertexLLamaBase::getElAuxMotor34OffStatus(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAuxMotor34OffStatus);

    timestamp = timeElAuxMotor34OffStatus;
    return valueElAuxMotor34OffStatus;
}

/// MonitorPoint: EL_GEARBOX_1_OIL_LEVEL_WARNING
/// GEARBOX_1_OIL_LEVEL_WARNING

/**
 * Get the current value of EL_GEARBOX_1_OIL_LEVEL_WARNING from the device.
 */

bool MountVertexLLamaBase::getElGearbox1OilLevelWarning(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElGearbox1OilLevelWarning);

    timestamp = timeElGearbox1OilLevelWarning;
    return valueElGearbox1OilLevelWarning;
}

/// MonitorPoint: EL_GEARBOX_2_OIL_LEVEL_WARNING
/// GEARBOX_2_OIL_LEVEL_WARNING

/**
 * Get the current value of EL_GEARBOX_2_OIL_LEVEL_WARNING from the device.
 */

bool MountVertexLLamaBase::getElGearbox2OilLevelWarning(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElGearbox2OilLevelWarning);

    timestamp = timeElGearbox2OilLevelWarning;
    return valueElGearbox2OilLevelWarning;
}

/// MonitorPoint: EL_GEARBOX_3_OIL_LEVEL_WARNING
/// GEARBOX_3_OIL_LEVEL_WARNING

/**
 * Get the current value of EL_GEARBOX_3_OIL_LEVEL_WARNING from the device.
 */

bool MountVertexLLamaBase::getElGearbox3OilLevelWarning(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElGearbox3OilLevelWarning);

    timestamp = timeElGearbox3OilLevelWarning;
    return valueElGearbox3OilLevelWarning;
}

/// MonitorPoint: EL_GEARBOX_4_OIL_LEVEL_WARNING
/// GEARBOX_4_OIL_LEVEL_WARNING

/**
 * Get the current value of EL_GEARBOX_4_OIL_LEVEL_WARNING from the device.
 */

bool MountVertexLLamaBase::getElGearbox4OilLevelWarning(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElGearbox4OilLevelWarning);

    timestamp = timeElGearbox4OilLevelWarning;
    return valueElGearbox4OilLevelWarning;
}

/// MonitorPoint: EL_COMPUTER_DISABLED
/// COMPUTER_DISABLED

/**
 * Get the current value of EL_COMPUTER_DISABLED from the device.
 */

bool MountVertexLLamaBase::getElComputerDisabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElComputerDisabled);

    timestamp = timeElComputerDisabled;
    return valueElComputerDisabled;
}

/// MonitorPoint: EL_AXIS_DISABLED
/// AXIS_DISABLED

/**
 * Get the current value of EL_AXIS_DISABLED from the device.
 */

bool MountVertexLLamaBase::getElAxisDisabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAxisDisabled);

    timestamp = timeElAxisDisabled;
    return valueElAxisDisabled;
}

/// MonitorPoint: EL_HANDHELD_PCU_OPERATION
/// HANDHELD_PCU_OPERATION

/**
 * Get the current value of EL_HANDHELD_PCU_OPERATION from the device.
 */

bool MountVertexLLamaBase::getElHandheldPcuOperation(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElHandheldPcuOperation);

    timestamp = timeElHandheldPcuOperation;
    return valueElHandheldPcuOperation;
}

/// MonitorPoint: EL_AXIS_IN_STOP_STATUS
/// AXIS_IN_STOP_STATUS

/**
 * Get the current value of EL_AXIS_IN_STOP_STATUS from the device.
 */

bool MountVertexLLamaBase::getElAxisInStopStatus(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheElStatus->getVal(timeElAxisInStopStatus);

    timestamp = timeElAxisInStopStatus;
    return valueElAxisInStopStatus;
}

/// MonitorPoint: METR_DELTAS_DISP
/// Get AZ and EL delta correction applied by the metrology 
    /// system based on the readout of the sensors at the El encoder 
    /// mounts

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_DELTAS_DISP(ACS::Time& timestamp)
{
    std::vector< int > ret;
    try
    {
        ret = getMetrDeltasDisp(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< int >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_DELTAS_DISP.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrDeltasDisp() const
{
    return rcaMonitorMetrDeltasDisp;
}

/// MonitorPoint: METR_DELTAS_DISP

/**
 * Get the current value of METR_DELTAS_DISP from the device.
 */

std::vector< int > MountVertexLLamaBase::getMetrDeltasDisp(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrDeltasDisp + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< int > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< int > ret(raw.size());
    ret = raw;

    valueMetrDeltasDispAzCorrection = static_cast< int >(
        raw[0]);

    timeMetrDeltasDispAzCorrection = timestamp;

    valueMetrDeltasDispElCorrection = static_cast< int >(
        raw[1]);

    timeMetrDeltasDispElCorrection = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrDeltasDisp(const unsigned long rca)
{
    rcaMonitorMetrDeltasDisp = rca;
}

///This getMetrDeltasDispProxy enusures we call the virtual getMetrDeltasDisp
/// and not the MountVertexLLamaBase::getMetrDeltasDisp as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< int > MountVertexLLamaBase::getMetrDeltasDispProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasDisp(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_DISP
/// Get AZ and EL delta correction applied by the metrology 
/// system based on the readout of the sensors at the El encoder 
/// mounts

/**
 * Get the current value of METR_DELTAS_DISP as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_DELTAS_DISP()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrDeltasDisp->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_DELTAS_DISP_AZ_CORRECTION
/// Azimuth delta correction applied by the metrology system 
    /// based on the readout of the sensors at the El encoder mounts

/**
 * Get the current value of METR_DELTAS_DISP_AZ_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasDispAzCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasDisp->getVal(timeMetrDeltasDispAzCorrection);

    timestamp = timeMetrDeltasDispAzCorrection;
    return valueMetrDeltasDispAzCorrection;
}

///This getMetrDeltasDispAzCorrectionProxy enusures we call the virtual getMetrDeltasDispAzCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasDispAzCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasDispAzCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasDispAzCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_DISP_EL_CORRECTION
/// Elevation delta correction applied by the metrology system 
    /// based on the readout of the sensors at the El encoder mounts

/**
 * Get the current value of METR_DELTAS_DISP_EL_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasDispElCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasDisp->getVal(timeMetrDeltasDispElCorrection);

    timestamp = timeMetrDeltasDispElCorrection;
    return valueMetrDeltasDispElCorrection;
}

///This getMetrDeltasDispElCorrectionProxy enusures we call the virtual getMetrDeltasDispElCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasDispElCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasDispElCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasDispElCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_SPEM
/// Get AZ and EL delta correction applied by the metrology 
    /// system based on the systematic error model

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_DELTAS_SPEM(ACS::Time& timestamp)
{
    std::vector< int > ret;
    try
    {
        ret = getMetrDeltasSpem(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< int >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_DELTAS_SPEM.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrDeltasSpem() const
{
    return rcaMonitorMetrDeltasSpem;
}

/// MonitorPoint: METR_DELTAS_SPEM

/**
 * Get the current value of METR_DELTAS_SPEM from the device.
 */

std::vector< int > MountVertexLLamaBase::getMetrDeltasSpem(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrDeltasSpem + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< int > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< int > ret(raw.size());
    ret = raw;

    valueMetrDeltasSpemAzCorrection = static_cast< int >(
        raw[0]);

    timeMetrDeltasSpemAzCorrection = timestamp;

    valueMetrDeltasSpemElCorrection = static_cast< int >(
        raw[1]);

    timeMetrDeltasSpemElCorrection = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrDeltasSpem(const unsigned long rca)
{
    rcaMonitorMetrDeltasSpem = rca;
}

///This getMetrDeltasSpemProxy enusures we call the virtual getMetrDeltasSpem
/// and not the MountVertexLLamaBase::getMetrDeltasSpem as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< int > MountVertexLLamaBase::getMetrDeltasSpemProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasSpem(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_SPEM
/// Get AZ and EL delta correction applied by the metrology 
/// system based on the systematic error model

/**
 * Get the current value of METR_DELTAS_SPEM as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_DELTAS_SPEM()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrDeltasSpem->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_DELTAS_SPEM_AZ_CORRECTION
/// Azimuth delta correction applied by the metrology system 
    /// based on the systematic error model

/**
 * Get the current value of METR_DELTAS_SPEM_AZ_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasSpemAzCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasSpem->getVal(timeMetrDeltasSpemAzCorrection);

    timestamp = timeMetrDeltasSpemAzCorrection;
    return valueMetrDeltasSpemAzCorrection;
}

///This getMetrDeltasSpemAzCorrectionProxy enusures we call the virtual getMetrDeltasSpemAzCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasSpemAzCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasSpemAzCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasSpemAzCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_SPEM_EL_CORRECTION
/// Elevation delta correction applied by the metrology system 
    /// based on the systematic error model

/**
 * Get the current value of METR_DELTAS_SPEM_EL_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasSpemElCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasSpem->getVal(timeMetrDeltasSpemElCorrection);

    timestamp = timeMetrDeltasSpemElCorrection;
    return valueMetrDeltasSpemElCorrection;
}

///This getMetrDeltasSpemElCorrectionProxy enusures we call the virtual getMetrDeltasSpemElCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasSpemElCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasSpemElCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasSpemElCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_TILT
/// Get AZ and EL delta correction applied by the metrology 
    /// system based on the readout of the tiltmeters

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_DELTAS_TILT(ACS::Time& timestamp)
{
    std::vector< int > ret;
    try
    {
        ret = getMetrDeltasTilt(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< int >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_DELTAS_TILT.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrDeltasTilt() const
{
    return rcaMonitorMetrDeltasTilt;
}

/// MonitorPoint: METR_DELTAS_TILT

/**
 * Get the current value of METR_DELTAS_TILT from the device.
 */

std::vector< int > MountVertexLLamaBase::getMetrDeltasTilt(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrDeltasTilt + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< int > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< int > ret(raw.size());
    ret = raw;

    valueMetrDeltasTiltAzCorrection = static_cast< int >(
        raw[0]);

    timeMetrDeltasTiltAzCorrection = timestamp;

    valueMetrDeltasTiltElCorrection = static_cast< int >(
        raw[1]);

    timeMetrDeltasTiltElCorrection = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrDeltasTilt(const unsigned long rca)
{
    rcaMonitorMetrDeltasTilt = rca;
}

///This getMetrDeltasTiltProxy enusures we call the virtual getMetrDeltasTilt
/// and not the MountVertexLLamaBase::getMetrDeltasTilt as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< int > MountVertexLLamaBase::getMetrDeltasTiltProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasTilt(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_TILT
/// Get AZ and EL delta correction applied by the metrology 
/// system based on the readout of the tiltmeters

/**
 * Get the current value of METR_DELTAS_TILT as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_DELTAS_TILT()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrDeltasTilt->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_DELTAS_TILT_AZ_CORRECTION
/// Azimuth delta correction applied by the metrology system 
    /// based on the readout of the tiltmeters

/**
 * Get the current value of METR_DELTAS_TILT_AZ_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasTiltAzCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasTilt->getVal(timeMetrDeltasTiltAzCorrection);

    timestamp = timeMetrDeltasTiltAzCorrection;
    return valueMetrDeltasTiltAzCorrection;
}

///This getMetrDeltasTiltAzCorrectionProxy enusures we call the virtual getMetrDeltasTiltAzCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasTiltAzCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasTiltAzCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasTiltAzCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_TILT_EL_CORRECTION
/// Elevation delta correction applied by the metrology system 
    /// based on the readout of the tiltmeters

/**
 * Get the current value of METR_DELTAS_TILT_EL_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasTiltElCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasTilt->getVal(timeMetrDeltasTiltElCorrection);

    timestamp = timeMetrDeltasTiltElCorrection;
    return valueMetrDeltasTiltElCorrection;
}

///This getMetrDeltasTiltElCorrectionProxy enusures we call the virtual getMetrDeltasTiltElCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasTiltElCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasTiltElCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasTiltElCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_TILTTEMP
/// Get AZ and EL delta correction applied by the metrology 
    /// system based on the model for temperature compensation of 
    /// the tiltmeter offset (?tilt offset model?)

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_DELTAS_TILTTEMP(ACS::Time& timestamp)
{
    std::vector< int > ret;
    try
    {
        ret = getMetrDeltasTilttemp(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< int >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_DELTAS_TILTTEMP.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrDeltasTilttemp() const
{
    return rcaMonitorMetrDeltasTilttemp;
}

/// MonitorPoint: METR_DELTAS_TILTTEMP

/**
 * Get the current value of METR_DELTAS_TILTTEMP from the device.
 */

std::vector< int > MountVertexLLamaBase::getMetrDeltasTilttemp(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrDeltasTilttemp + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< int > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< int > ret(raw.size());
    ret = raw;

    valueMetrDeltasTilttempAzCorrection = static_cast< int >(
        raw[0]);

    timeMetrDeltasTilttempAzCorrection = timestamp;

    valueMetrDeltasTilttempElCorrection = static_cast< int >(
        raw[1]);

    timeMetrDeltasTilttempElCorrection = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrDeltasTilttemp(const unsigned long rca)
{
    rcaMonitorMetrDeltasTilttemp = rca;
}

///This getMetrDeltasTilttempProxy enusures we call the virtual getMetrDeltasTilttemp
/// and not the MountVertexLLamaBase::getMetrDeltasTilttemp as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< int > MountVertexLLamaBase::getMetrDeltasTilttempProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasTilttemp(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_TILTTEMP
/// Get AZ and EL delta correction applied by the metrology 
/// system based on the model for temperature compensation of 
/// the tiltmeter offset (?tilt offset model?)

/**
 * Get the current value of METR_DELTAS_TILTTEMP as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_DELTAS_TILTTEMP()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrDeltasTilttemp->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_DELTAS_TILTTEMP_AZ_CORRECTION
/// Azimuth delta correction applied by the metrology system 
    /// based on the model for temperature compensation of the tiltmeter 
    /// offset (?tilt offset model?)

/**
 * Get the current value of METR_DELTAS_TILTTEMP_AZ_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasTilttempAzCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasTilttemp->getVal(timeMetrDeltasTilttempAzCorrection);

    timestamp = timeMetrDeltasTilttempAzCorrection;
    return valueMetrDeltasTilttempAzCorrection;
}

///This getMetrDeltasTilttempAzCorrectionProxy enusures we call the virtual getMetrDeltasTilttempAzCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasTilttempAzCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasTilttempAzCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasTilttempAzCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_DELTAS_TILTTEMP_EL_CORRECTION
/// Elevation delta correction applied by the metrology system 
    /// based on the model for temperature compensation of the tiltmeter 
    /// offset (?tilt offset model?)

/**
 * Get the current value of METR_DELTAS_TILTTEMP_EL_CORRECTION from the device.
 */

int MountVertexLLamaBase::getMetrDeltasTilttempElCorrection(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrDeltasTilttemp->getVal(timeMetrDeltasTilttempElCorrection);

    timestamp = timeMetrDeltasTilttempElCorrection;
    return valueMetrDeltasTilttempElCorrection;
}

///This getMetrDeltasTilttempElCorrectionProxy enusures we call the virtual getMetrDeltasTilttempElCorrection
/// and not the MountVertexLLamaBase::getMetrDeltasTilttempElCorrection as it used to be.
/// This breaks the monitoring in the FrontEnd.

int MountVertexLLamaBase::getMetrDeltasTilttempElCorrectionProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrDeltasTilttempElCorrection(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/**
 * Get the RCA for monitor point METR_EQUIP_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrEquipStatus() const
{
    return rcaMonitorMetrEquipStatus;
}

/// MonitorPoint: METR_EQUIP_STATUS
/// Metrology equipment status

/**
 * Get the current value of METR_EQUIP_STATUS from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getMetrEquipStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrEquipStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< unsigned char > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueMetrEquipStatusLocalBusErr.

    valueMetrEquipStatusLocalBusErr = ((raw[0] & 0x01) != 0) ? true : false;

    timeMetrEquipStatusLocalBusErr = timestamp;

    // Set valueMetrEquipStatusTiltmeter1Err.

    valueMetrEquipStatusTiltmeter1Err = ((raw[0] & 0x02) != 0) ? true : false;

    timeMetrEquipStatusTiltmeter1Err = timestamp;

    // Set valueMetrEquipStatusTempSensorErr.

    valueMetrEquipStatusTempSensorErr = ((raw[0] & 0x40) != 0) ? true : false;

    timeMetrEquipStatusTempSensorErr = timestamp;

    // Set valueMetrEquipStatusDisplSensorErr.

    valueMetrEquipStatusDisplSensorErr = ((raw[0] & 0x80) != 0) ? true : false;

    timeMetrEquipStatusDisplSensorErr = timestamp;

    // Set valueMetrEquipStatusAcuMmcCommErr.

    valueMetrEquipStatusAcuMmcCommErr = ((raw[3] & 0x40) != 0) ? true : false;

    timeMetrEquipStatusAcuMmcCommErr = timestamp;

    // Set valueMetrEquipStatusMetrDataInvalid.

    valueMetrEquipStatusMetrDataInvalid = ((raw[3] & 0x80) != 0) ? true : false;

    timeMetrEquipStatusMetrDataInvalid = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrEquipStatus(const unsigned long rca)
{
    rcaMonitorMetrEquipStatus = rca;
}

///This getMetrEquipStatusProxy enusures we call the virtual getMetrEquipStatus
/// and not the MountVertexLLamaBase::getMetrEquipStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getMetrEquipStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrEquipStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_EQUIP_STATUS
/// Metrology equipment status

/// MonitorPoint: METR_EQUIP_STATUS_LOCAL_BUS_ERR
/// Local bus error ACU

/**
 * Get the current value of METR_EQUIP_STATUS_LOCAL_BUS_ERR from the device.
 */

bool MountVertexLLamaBase::getMetrEquipStatusLocalBusErr(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrEquipStatus->getVal(timeMetrEquipStatusLocalBusErr);

    timestamp = timeMetrEquipStatusLocalBusErr;
    return valueMetrEquipStatusLocalBusErr;
}

/// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_1_ERR
/// Tiltmeter 1 readout error

/**
 * Get the current value of METR_EQUIP_STATUS_TILTMETER_1_ERR from the device.
 */

bool MountVertexLLamaBase::getMetrEquipStatusTiltmeter1Err(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrEquipStatus->getVal(timeMetrEquipStatusTiltmeter1Err);

    timestamp = timeMetrEquipStatusTiltmeter1Err;
    return valueMetrEquipStatusTiltmeter1Err;
}

/// MonitorPoint: METR_EQUIP_STATUS_TEMP_SENSOR_ERR
/// Temperature sensor readout error

/**
 * Get the current value of METR_EQUIP_STATUS_TEMP_SENSOR_ERR from the device.
 */

bool MountVertexLLamaBase::getMetrEquipStatusTempSensorErr(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrEquipStatus->getVal(timeMetrEquipStatusTempSensorErr);

    timestamp = timeMetrEquipStatusTempSensorErr;
    return valueMetrEquipStatusTempSensorErr;
}

/// MonitorPoint: METR_EQUIP_STATUS_DISPL_SENSOR_ERR
/// Displacement sensor readout error

/**
 * Get the current value of METR_EQUIP_STATUS_DISPL_SENSOR_ERR from the device.
 */

bool MountVertexLLamaBase::getMetrEquipStatusDisplSensorErr(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrEquipStatus->getVal(timeMetrEquipStatusDisplSensorErr);

    timestamp = timeMetrEquipStatusDisplSensorErr;
    return valueMetrEquipStatusDisplSensorErr;
}

/// MonitorPoint: METR_EQUIP_STATUS_ACU_MMC_COMM_ERR
/// Communication error ACU-MMC

/**
 * Get the current value of METR_EQUIP_STATUS_ACU_MMC_COMM_ERR from the device.
 */

bool MountVertexLLamaBase::getMetrEquipStatusAcuMmcCommErr(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrEquipStatus->getVal(timeMetrEquipStatusAcuMmcCommErr);

    timestamp = timeMetrEquipStatusAcuMmcCommErr;
    return valueMetrEquipStatusAcuMmcCommErr;
}

/// MonitorPoint: METR_EQUIP_STATUS_METR_DATA_INVALID
/// Metrology data is not valid

/**
 * Get the current value of METR_EQUIP_STATUS_METR_DATA_INVALID from the device.
 */

bool MountVertexLLamaBase::getMetrEquipStatusMetrDataInvalid(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrEquipStatus->getVal(timeMetrEquipStatusMetrDataInvalid);

    timestamp = timeMetrEquipStatusMetrDataInvalid;
    return valueMetrEquipStatusMetrDataInvalid;
}

/**
 * Get the RCA for monitor point METR_MODE.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrMode() const
{
    return rcaMonitorMetrMode;
}

/// MonitorPoint: METR_MODE
/// Get metrology mode

/**
 * Get the current value of METR_MODE from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getMetrMode(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrMode + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< unsigned char > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueMetrModeStandardPointingErrorModelEnabled.

    valueMetrModeStandardPointingErrorModelEnabled = ((raw[0] & 0x01) != 0) ? true : false;

    timeMetrModeStandardPointingErrorModelEnabled = timestamp;

    // Set valueMetrModeTiltmeterCompEnabled.

    valueMetrModeTiltmeterCompEnabled = ((raw[0] & 0x02) != 0) ? true : false;

    timeMetrModeTiltmeterCompEnabled = timestamp;

    // Set valueMetrModeTiltOffsetTempModelEnabled.

    valueMetrModeTiltOffsetTempModelEnabled = ((raw[0] & 0x04) != 0) ? true : false;

    timeMetrModeTiltOffsetTempModelEnabled = timestamp;

    // Set valueMetrModeAutomaticSubrefPosnCorrectionEnabled.

    valueMetrModeAutomaticSubrefPosnCorrectionEnabled = ((raw[0] & 0x20) != 0) ? true : false;

    timeMetrModeAutomaticSubrefPosnCorrectionEnabled = timestamp;

    // Set valueMetrModeMountEncCorrectionBasedEnabled.

    valueMetrModeMountEncCorrectionBasedEnabled = ((raw[0] & 0x40) != 0) ? true : false;

    timeMetrModeMountEncCorrectionBasedEnabled = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrMode(const unsigned long rca)
{
    rcaMonitorMetrMode = rca;
}

///This getMetrModeProxy enusures we call the virtual getMetrMode
/// and not the MountVertexLLamaBase::getMetrMode as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getMetrModeProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrMode(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_MODE
/// Get metrology mode

/// MonitorPoint: METR_MODE_STANDARD_POINTING_ERROR_MODEL_ENABLED
/// Standard pointing error model enabled

/**
 * Get the current value of METR_MODE_STANDARD_POINTING_ERROR_MODEL_ENABLED from the device.
 */

bool MountVertexLLamaBase::getMetrModeStandardPointingErrorModelEnabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrMode->getVal(timeMetrModeStandardPointingErrorModelEnabled);

    timestamp = timeMetrModeStandardPointingErrorModelEnabled;
    return valueMetrModeStandardPointingErrorModelEnabled;
}

/// MonitorPoint: METR_MODE_TILTMETER_COMP_ENABLED
/// Tiltmeter compensation enabled

/**
 * Get the current value of METR_MODE_TILTMETER_COMP_ENABLED from the device.
 */

bool MountVertexLLamaBase::getMetrModeTiltmeterCompEnabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrMode->getVal(timeMetrModeTiltmeterCompEnabled);

    timestamp = timeMetrModeTiltmeterCompEnabled;
    return valueMetrModeTiltmeterCompEnabled;
}

/// MonitorPoint: METR_MODE_TILT_OFFSET_TEMP_MODEL_ENABLED
/// Tilt offset temperature model enabled

/**
 * Get the current value of METR_MODE_TILT_OFFSET_TEMP_MODEL_ENABLED from the device.
 */

bool MountVertexLLamaBase::getMetrModeTiltOffsetTempModelEnabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrMode->getVal(timeMetrModeTiltOffsetTempModelEnabled);

    timestamp = timeMetrModeTiltOffsetTempModelEnabled;
    return valueMetrModeTiltOffsetTempModelEnabled;
}

/// MonitorPoint: METR_MODE_AUTOMATIC_SUBREF_POSN_CORRECTION_ENABLED
/// Automatic sub-reflector position correction enabled

/**
 * Get the current value of METR_MODE_AUTOMATIC_SUBREF_POSN_CORRECTION_ENABLED from the device.
 */

bool MountVertexLLamaBase::getMetrModeAutomaticSubrefPosnCorrectionEnabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrMode->getVal(timeMetrModeAutomaticSubrefPosnCorrectionEnabled);

    timestamp = timeMetrModeAutomaticSubrefPosnCorrectionEnabled;
    return valueMetrModeAutomaticSubrefPosnCorrectionEnabled;
}

/// MonitorPoint: METR_MODE_MOUNT_ENC_CORRECTION_BASED_ENABLED
/// Correction based on encoder mount sensors enabled

/**
 * Get the current value of METR_MODE_MOUNT_ENC_CORRECTION_BASED_ENABLED from the device.
 */

bool MountVertexLLamaBase::getMetrModeMountEncCorrectionBasedEnabled(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrMode->getVal(timeMetrModeMountEncCorrectionBasedEnabled);

    timestamp = timeMetrModeMountEncCorrectionBasedEnabled;
    return valueMetrModeMountEncCorrectionBasedEnabled;
}

/// MonitorPoint: METR_TEMPS_19
/// Get value of metrology temperature sensor pack 19

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_19(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps19(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_19.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps19() const
{
    return rcaMonitorMetrTemps19;
}

/// MonitorPoint: METR_TEMPS_19

/**
 * Get the current value of METR_TEMPS_19 from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps19(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps19 + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor100 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor100 = static_cast< float >(
        valueMetrTempsSensor100 * 0.01 + 273.15);

    timeMetrTempsSensor100 = timestamp;

    valueMetrTempsSensor101 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor101 = static_cast< float >(
        valueMetrTempsSensor101 * 0.01 + 273.15);

    timeMetrTempsSensor101 = timestamp;

    valueMetrTempsSensor102 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor102 = static_cast< float >(
        valueMetrTempsSensor102 * 0.01 + 273.15);

    timeMetrTempsSensor102 = timestamp;

    valueMetrTempsSensor103 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor103 = static_cast< float >(
        valueMetrTempsSensor103 * 0.01 + 273.15);

    timeMetrTempsSensor103 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps19(const unsigned long rca)
{
    rcaMonitorMetrTemps19 = rca;
}

///This getMetrTemps19Proxy enusures we call the virtual getMetrTemps19
/// and not the MountVertexLLamaBase::getMetrTemps19 as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps19Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps19(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_19
/// Get value of metrology temperature sensor pack 19

/**
 * Get the current value of METR_TEMPS_19 as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_19()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps19->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_100
/// Metrology temperature sensor 100

/**
 * Get the current value of METR_TEMPS_SENSOR_100 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor100(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps19->getVal(timeMetrTempsSensor100);

    timestamp = timeMetrTempsSensor100;
    return valueMetrTempsSensor100;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_100 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor100(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor100 + offsetMetrTempsSensor100);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_100.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor100() const
{
    return scaleMetrTempsSensor100;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_100.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor100() const
{
    return offsetMetrTempsSensor100;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_100: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor100(
    const double scale, const double offset)
{
    scaleMetrTempsSensor100 = scale;
    offsetMetrTempsSensor100 = offset;
}

///This getMetrTempsSensor100Proxy enusures we call the virtual getMetrTempsSensor100
/// and not the MountVertexLLamaBase::getMetrTempsSensor100 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor100Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor100(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_100
/// Metrology temperature sensor 100

/// MonitorPoint: METR_TEMPS_SENSOR_101
/// Metrology temperature sensor 101

/**
 * Get the current value of METR_TEMPS_SENSOR_101 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor101(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps19->getVal(timeMetrTempsSensor101);

    timestamp = timeMetrTempsSensor101;
    return valueMetrTempsSensor101;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_101 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor101(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor101 + offsetMetrTempsSensor101);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_101.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor101() const
{
    return scaleMetrTempsSensor101;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_101.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor101() const
{
    return offsetMetrTempsSensor101;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_101: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor101(
    const double scale, const double offset)
{
    scaleMetrTempsSensor101 = scale;
    offsetMetrTempsSensor101 = offset;
}

///This getMetrTempsSensor101Proxy enusures we call the virtual getMetrTempsSensor101
/// and not the MountVertexLLamaBase::getMetrTempsSensor101 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor101Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor101(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_101
/// Metrology temperature sensor 101

/// MonitorPoint: METR_TEMPS_SENSOR_102
/// Metrology temperature sensor 102

/**
 * Get the current value of METR_TEMPS_SENSOR_102 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor102(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps19->getVal(timeMetrTempsSensor102);

    timestamp = timeMetrTempsSensor102;
    return valueMetrTempsSensor102;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_102 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor102(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor102 + offsetMetrTempsSensor102);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_102.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor102() const
{
    return scaleMetrTempsSensor102;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_102.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor102() const
{
    return offsetMetrTempsSensor102;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_102: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor102(
    const double scale, const double offset)
{
    scaleMetrTempsSensor102 = scale;
    offsetMetrTempsSensor102 = offset;
}

///This getMetrTempsSensor102Proxy enusures we call the virtual getMetrTempsSensor102
/// and not the MountVertexLLamaBase::getMetrTempsSensor102 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor102Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor102(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_102
/// Metrology temperature sensor 102

/// MonitorPoint: METR_TEMPS_SENSOR_103
/// Metrology temperature sensor 103

/**
 * Get the current value of METR_TEMPS_SENSOR_103 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor103(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps19->getVal(timeMetrTempsSensor103);

    timestamp = timeMetrTempsSensor103;
    return valueMetrTempsSensor103;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_103 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor103(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor103 + offsetMetrTempsSensor103);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_103.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor103() const
{
    return scaleMetrTempsSensor103;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_103.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor103() const
{
    return offsetMetrTempsSensor103;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_103: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor103(
    const double scale, const double offset)
{
    scaleMetrTempsSensor103 = scale;
    offsetMetrTempsSensor103 = offset;
}

///This getMetrTempsSensor103Proxy enusures we call the virtual getMetrTempsSensor103
/// and not the MountVertexLLamaBase::getMetrTempsSensor103 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor103Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor103(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_103
/// Metrology temperature sensor 103

/// MonitorPoint: METR_TEMPS_1A
/// Get value of metrology temperature sensor pack 1A

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_1A(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps1a(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_1A.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps1a() const
{
    return rcaMonitorMetrTemps1a;
}

/// MonitorPoint: METR_TEMPS_1A

/**
 * Get the current value of METR_TEMPS_1A from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps1a(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps1a + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor104 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor104 = static_cast< float >(
        valueMetrTempsSensor104 * 0.01 + 273.15);

    timeMetrTempsSensor104 = timestamp;

    valueMetrTempsSensor105 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor105 = static_cast< float >(
        valueMetrTempsSensor105 * 0.01 + 273.15);

    timeMetrTempsSensor105 = timestamp;

    valueMetrTempsSensor106 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor106 = static_cast< float >(
        valueMetrTempsSensor106 * 0.01 + 273.15);

    timeMetrTempsSensor106 = timestamp;

    valueMetrTempsSensor107 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor107 = static_cast< float >(
        valueMetrTempsSensor107 * 0.01 + 273.15);

    timeMetrTempsSensor107 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps1a(const unsigned long rca)
{
    rcaMonitorMetrTemps1a = rca;
}

///This getMetrTemps1aProxy enusures we call the virtual getMetrTemps1a
/// and not the MountVertexLLamaBase::getMetrTemps1a as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps1aProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps1a(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_1A
/// Get value of metrology temperature sensor pack 1A

/**
 * Get the current value of METR_TEMPS_1A as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_1A()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps1a->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_104
/// Metrology temperature sensor 104

/**
 * Get the current value of METR_TEMPS_SENSOR_104 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor104(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1a->getVal(timeMetrTempsSensor104);

    timestamp = timeMetrTempsSensor104;
    return valueMetrTempsSensor104;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_104 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor104(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor104 + offsetMetrTempsSensor104);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_104.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor104() const
{
    return scaleMetrTempsSensor104;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_104.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor104() const
{
    return offsetMetrTempsSensor104;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_104: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor104(
    const double scale, const double offset)
{
    scaleMetrTempsSensor104 = scale;
    offsetMetrTempsSensor104 = offset;
}

///This getMetrTempsSensor104Proxy enusures we call the virtual getMetrTempsSensor104
/// and not the MountVertexLLamaBase::getMetrTempsSensor104 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor104Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor104(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_104
/// Metrology temperature sensor 104

/// MonitorPoint: METR_TEMPS_SENSOR_105
/// Metrology temperature sensor 105

/**
 * Get the current value of METR_TEMPS_SENSOR_105 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor105(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1a->getVal(timeMetrTempsSensor105);

    timestamp = timeMetrTempsSensor105;
    return valueMetrTempsSensor105;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_105 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor105(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor105 + offsetMetrTempsSensor105);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_105.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor105() const
{
    return scaleMetrTempsSensor105;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_105.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor105() const
{
    return offsetMetrTempsSensor105;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_105: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor105(
    const double scale, const double offset)
{
    scaleMetrTempsSensor105 = scale;
    offsetMetrTempsSensor105 = offset;
}

///This getMetrTempsSensor105Proxy enusures we call the virtual getMetrTempsSensor105
/// and not the MountVertexLLamaBase::getMetrTempsSensor105 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor105Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor105(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_105
/// Metrology temperature sensor 105

/// MonitorPoint: METR_TEMPS_SENSOR_106
/// Metrology temperature sensor 106

/**
 * Get the current value of METR_TEMPS_SENSOR_106 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor106(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1a->getVal(timeMetrTempsSensor106);

    timestamp = timeMetrTempsSensor106;
    return valueMetrTempsSensor106;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_106 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor106(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor106 + offsetMetrTempsSensor106);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_106.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor106() const
{
    return scaleMetrTempsSensor106;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_106.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor106() const
{
    return offsetMetrTempsSensor106;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_106: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor106(
    const double scale, const double offset)
{
    scaleMetrTempsSensor106 = scale;
    offsetMetrTempsSensor106 = offset;
}

///This getMetrTempsSensor106Proxy enusures we call the virtual getMetrTempsSensor106
/// and not the MountVertexLLamaBase::getMetrTempsSensor106 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor106Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor106(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_106
/// Metrology temperature sensor 106

/// MonitorPoint: METR_TEMPS_SENSOR_107
/// Metrology temperature sensor 107

/**
 * Get the current value of METR_TEMPS_SENSOR_107 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor107(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1a->getVal(timeMetrTempsSensor107);

    timestamp = timeMetrTempsSensor107;
    return valueMetrTempsSensor107;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_107 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor107(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor107 + offsetMetrTempsSensor107);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_107.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor107() const
{
    return scaleMetrTempsSensor107;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_107.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor107() const
{
    return offsetMetrTempsSensor107;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_107: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor107(
    const double scale, const double offset)
{
    scaleMetrTempsSensor107 = scale;
    offsetMetrTempsSensor107 = offset;
}

///This getMetrTempsSensor107Proxy enusures we call the virtual getMetrTempsSensor107
/// and not the MountVertexLLamaBase::getMetrTempsSensor107 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor107Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor107(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_107
/// Metrology temperature sensor 107

/// MonitorPoint: METR_TEMPS_1B
/// Get value of metrology temperature sensor pack 1B

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_1B(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps1b(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_1B.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps1b() const
{
    return rcaMonitorMetrTemps1b;
}

/// MonitorPoint: METR_TEMPS_1B

/**
 * Get the current value of METR_TEMPS_1B from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps1b(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps1b + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor108 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor108 = static_cast< float >(
        valueMetrTempsSensor108 * 0.01 + 273.15);

    timeMetrTempsSensor108 = timestamp;

    valueMetrTempsSensor109 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor109 = static_cast< float >(
        valueMetrTempsSensor109 * 0.01 + 273.15);

    timeMetrTempsSensor109 = timestamp;

    valueMetrTempsSensor110 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor110 = static_cast< float >(
        valueMetrTempsSensor110 * 0.01 + 273.15);

    timeMetrTempsSensor110 = timestamp;

    valueMetrTempsSensor111 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor111 = static_cast< float >(
        valueMetrTempsSensor111 * 0.01 + 273.15);

    timeMetrTempsSensor111 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps1b(const unsigned long rca)
{
    rcaMonitorMetrTemps1b = rca;
}

///This getMetrTemps1bProxy enusures we call the virtual getMetrTemps1b
/// and not the MountVertexLLamaBase::getMetrTemps1b as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps1bProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps1b(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_1B
/// Get value of metrology temperature sensor pack 1B

/**
 * Get the current value of METR_TEMPS_1B as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_1B()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps1b->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_108
/// Metrology temperature sensor 108

/**
 * Get the current value of METR_TEMPS_SENSOR_108 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor108(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1b->getVal(timeMetrTempsSensor108);

    timestamp = timeMetrTempsSensor108;
    return valueMetrTempsSensor108;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_108 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor108(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor108 + offsetMetrTempsSensor108);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_108.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor108() const
{
    return scaleMetrTempsSensor108;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_108.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor108() const
{
    return offsetMetrTempsSensor108;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_108: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor108(
    const double scale, const double offset)
{
    scaleMetrTempsSensor108 = scale;
    offsetMetrTempsSensor108 = offset;
}

///This getMetrTempsSensor108Proxy enusures we call the virtual getMetrTempsSensor108
/// and not the MountVertexLLamaBase::getMetrTempsSensor108 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor108Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor108(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_108
/// Metrology temperature sensor 108

/// MonitorPoint: METR_TEMPS_SENSOR_109
/// Metrology temperature sensor 109

/**
 * Get the current value of METR_TEMPS_SENSOR_109 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor109(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1b->getVal(timeMetrTempsSensor109);

    timestamp = timeMetrTempsSensor109;
    return valueMetrTempsSensor109;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_109 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor109(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor109 + offsetMetrTempsSensor109);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_109.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor109() const
{
    return scaleMetrTempsSensor109;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_109.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor109() const
{
    return offsetMetrTempsSensor109;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_109: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor109(
    const double scale, const double offset)
{
    scaleMetrTempsSensor109 = scale;
    offsetMetrTempsSensor109 = offset;
}

///This getMetrTempsSensor109Proxy enusures we call the virtual getMetrTempsSensor109
/// and not the MountVertexLLamaBase::getMetrTempsSensor109 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor109Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor109(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_109
/// Metrology temperature sensor 109

/// MonitorPoint: METR_TEMPS_SENSOR_110
/// Metrology temperature sensor 110

/**
 * Get the current value of METR_TEMPS_SENSOR_110 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor110(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1b->getVal(timeMetrTempsSensor110);

    timestamp = timeMetrTempsSensor110;
    return valueMetrTempsSensor110;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_110 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor110(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor110 + offsetMetrTempsSensor110);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_110.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor110() const
{
    return scaleMetrTempsSensor110;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_110.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor110() const
{
    return offsetMetrTempsSensor110;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_110: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor110(
    const double scale, const double offset)
{
    scaleMetrTempsSensor110 = scale;
    offsetMetrTempsSensor110 = offset;
}

///This getMetrTempsSensor110Proxy enusures we call the virtual getMetrTempsSensor110
/// and not the MountVertexLLamaBase::getMetrTempsSensor110 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor110Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor110(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_110
/// Metrology temperature sensor 110

/// MonitorPoint: METR_TEMPS_SENSOR_111
/// Metrology temperature sensor 111

/**
 * Get the current value of METR_TEMPS_SENSOR_111 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor111(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1b->getVal(timeMetrTempsSensor111);

    timestamp = timeMetrTempsSensor111;
    return valueMetrTempsSensor111;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_111 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor111(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor111 + offsetMetrTempsSensor111);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_111.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor111() const
{
    return scaleMetrTempsSensor111;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_111.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor111() const
{
    return offsetMetrTempsSensor111;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_111: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor111(
    const double scale, const double offset)
{
    scaleMetrTempsSensor111 = scale;
    offsetMetrTempsSensor111 = offset;
}

///This getMetrTempsSensor111Proxy enusures we call the virtual getMetrTempsSensor111
/// and not the MountVertexLLamaBase::getMetrTempsSensor111 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor111Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor111(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_111
/// Metrology temperature sensor 111

/// MonitorPoint: METR_TEMPS_1C
/// Get value of metrology temperature sensor pack 1C

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_1C(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps1c(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_1C.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps1c() const
{
    return rcaMonitorMetrTemps1c;
}

/// MonitorPoint: METR_TEMPS_1C

/**
 * Get the current value of METR_TEMPS_1C from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps1c(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps1c + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor112 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor112 = static_cast< float >(
        valueMetrTempsSensor112 * 0.01 + 273.15);

    timeMetrTempsSensor112 = timestamp;

    valueMetrTempsSensor113 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor113 = static_cast< float >(
        valueMetrTempsSensor113 * 0.01 + 273.15);

    timeMetrTempsSensor113 = timestamp;

    valueMetrTempsSensor114 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor114 = static_cast< float >(
        valueMetrTempsSensor114 * 0.01 + 273.15);

    timeMetrTempsSensor114 = timestamp;

    valueMetrTempsSensor115 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor115 = static_cast< float >(
        valueMetrTempsSensor115 * 0.01 + 273.15);

    timeMetrTempsSensor115 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps1c(const unsigned long rca)
{
    rcaMonitorMetrTemps1c = rca;
}

///This getMetrTemps1cProxy enusures we call the virtual getMetrTemps1c
/// and not the MountVertexLLamaBase::getMetrTemps1c as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps1cProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps1c(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_1C
/// Get value of metrology temperature sensor pack 1C

/**
 * Get the current value of METR_TEMPS_1C as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_1C()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps1c->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_112
/// Metrology temperature sensor 112

/**
 * Get the current value of METR_TEMPS_SENSOR_112 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor112(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1c->getVal(timeMetrTempsSensor112);

    timestamp = timeMetrTempsSensor112;
    return valueMetrTempsSensor112;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_112 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor112(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor112 + offsetMetrTempsSensor112);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_112.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor112() const
{
    return scaleMetrTempsSensor112;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_112.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor112() const
{
    return offsetMetrTempsSensor112;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_112: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor112(
    const double scale, const double offset)
{
    scaleMetrTempsSensor112 = scale;
    offsetMetrTempsSensor112 = offset;
}

///This getMetrTempsSensor112Proxy enusures we call the virtual getMetrTempsSensor112
/// and not the MountVertexLLamaBase::getMetrTempsSensor112 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor112Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor112(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_112
/// Metrology temperature sensor 112

/// MonitorPoint: METR_TEMPS_SENSOR_113
/// Metrology temperature sensor 113

/**
 * Get the current value of METR_TEMPS_SENSOR_113 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor113(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1c->getVal(timeMetrTempsSensor113);

    timestamp = timeMetrTempsSensor113;
    return valueMetrTempsSensor113;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_113 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor113(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor113 + offsetMetrTempsSensor113);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_113.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor113() const
{
    return scaleMetrTempsSensor113;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_113.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor113() const
{
    return offsetMetrTempsSensor113;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_113: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor113(
    const double scale, const double offset)
{
    scaleMetrTempsSensor113 = scale;
    offsetMetrTempsSensor113 = offset;
}

///This getMetrTempsSensor113Proxy enusures we call the virtual getMetrTempsSensor113
/// and not the MountVertexLLamaBase::getMetrTempsSensor113 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor113Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor113(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_113
/// Metrology temperature sensor 113

/// MonitorPoint: METR_TEMPS_SENSOR_114
/// Metrology temperature sensor 114

/**
 * Get the current value of METR_TEMPS_SENSOR_114 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor114(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1c->getVal(timeMetrTempsSensor114);

    timestamp = timeMetrTempsSensor114;
    return valueMetrTempsSensor114;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_114 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor114(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor114 + offsetMetrTempsSensor114);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_114.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor114() const
{
    return scaleMetrTempsSensor114;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_114.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor114() const
{
    return offsetMetrTempsSensor114;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_114: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor114(
    const double scale, const double offset)
{
    scaleMetrTempsSensor114 = scale;
    offsetMetrTempsSensor114 = offset;
}

///This getMetrTempsSensor114Proxy enusures we call the virtual getMetrTempsSensor114
/// and not the MountVertexLLamaBase::getMetrTempsSensor114 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor114Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor114(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_114
/// Metrology temperature sensor 114

/// MonitorPoint: METR_TEMPS_SENSOR_115
/// Metrology temperature sensor 115

/**
 * Get the current value of METR_TEMPS_SENSOR_115 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor115(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1c->getVal(timeMetrTempsSensor115);

    timestamp = timeMetrTempsSensor115;
    return valueMetrTempsSensor115;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_115 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor115(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor115 + offsetMetrTempsSensor115);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_115.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor115() const
{
    return scaleMetrTempsSensor115;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_115.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor115() const
{
    return offsetMetrTempsSensor115;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_115: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor115(
    const double scale, const double offset)
{
    scaleMetrTempsSensor115 = scale;
    offsetMetrTempsSensor115 = offset;
}

///This getMetrTempsSensor115Proxy enusures we call the virtual getMetrTempsSensor115
/// and not the MountVertexLLamaBase::getMetrTempsSensor115 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor115Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor115(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_115
/// Metrology temperature sensor 115

/// MonitorPoint: METR_TEMPS_1D
/// Get value of metrology temperature sensor pack 1D

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_1D(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps1d(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_1D.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps1d() const
{
    return rcaMonitorMetrTemps1d;
}

/// MonitorPoint: METR_TEMPS_1D

/**
 * Get the current value of METR_TEMPS_1D from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps1d(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps1d + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor116 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor116 = static_cast< float >(
        valueMetrTempsSensor116 * 0.01 + 273.15);

    timeMetrTempsSensor116 = timestamp;

    valueMetrTempsSensor117 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor117 = static_cast< float >(
        valueMetrTempsSensor117 * 0.01 + 273.15);

    timeMetrTempsSensor117 = timestamp;

    valueMetrTempsSensor118 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor118 = static_cast< float >(
        valueMetrTempsSensor118 * 0.01 + 273.15);

    timeMetrTempsSensor118 = timestamp;

    valueMetrTempsSensor119 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor119 = static_cast< float >(
        valueMetrTempsSensor119 * 0.01 + 273.15);

    timeMetrTempsSensor119 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps1d(const unsigned long rca)
{
    rcaMonitorMetrTemps1d = rca;
}

///This getMetrTemps1dProxy enusures we call the virtual getMetrTemps1d
/// and not the MountVertexLLamaBase::getMetrTemps1d as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps1dProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps1d(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_1D
/// Get value of metrology temperature sensor pack 1D

/**
 * Get the current value of METR_TEMPS_1D as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_1D()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps1d->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_116
/// Metrology temperature sensor 116

/**
 * Get the current value of METR_TEMPS_SENSOR_116 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor116(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1d->getVal(timeMetrTempsSensor116);

    timestamp = timeMetrTempsSensor116;
    return valueMetrTempsSensor116;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_116 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor116(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor116 + offsetMetrTempsSensor116);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_116.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor116() const
{
    return scaleMetrTempsSensor116;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_116.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor116() const
{
    return offsetMetrTempsSensor116;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_116: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor116(
    const double scale, const double offset)
{
    scaleMetrTempsSensor116 = scale;
    offsetMetrTempsSensor116 = offset;
}

///This getMetrTempsSensor116Proxy enusures we call the virtual getMetrTempsSensor116
/// and not the MountVertexLLamaBase::getMetrTempsSensor116 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor116Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor116(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_116
/// Metrology temperature sensor 116

/// MonitorPoint: METR_TEMPS_SENSOR_117
/// Metrology temperature sensor 117

/**
 * Get the current value of METR_TEMPS_SENSOR_117 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor117(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1d->getVal(timeMetrTempsSensor117);

    timestamp = timeMetrTempsSensor117;
    return valueMetrTempsSensor117;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_117 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor117(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor117 + offsetMetrTempsSensor117);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_117.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor117() const
{
    return scaleMetrTempsSensor117;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_117.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor117() const
{
    return offsetMetrTempsSensor117;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_117: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor117(
    const double scale, const double offset)
{
    scaleMetrTempsSensor117 = scale;
    offsetMetrTempsSensor117 = offset;
}

///This getMetrTempsSensor117Proxy enusures we call the virtual getMetrTempsSensor117
/// and not the MountVertexLLamaBase::getMetrTempsSensor117 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor117Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor117(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_117
/// Metrology temperature sensor 117

/// MonitorPoint: METR_TEMPS_SENSOR_118
/// Metrology temperature sensor 118

/**
 * Get the current value of METR_TEMPS_SENSOR_118 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor118(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1d->getVal(timeMetrTempsSensor118);

    timestamp = timeMetrTempsSensor118;
    return valueMetrTempsSensor118;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_118 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor118(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor118 + offsetMetrTempsSensor118);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_118.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor118() const
{
    return scaleMetrTempsSensor118;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_118.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor118() const
{
    return offsetMetrTempsSensor118;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_118: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor118(
    const double scale, const double offset)
{
    scaleMetrTempsSensor118 = scale;
    offsetMetrTempsSensor118 = offset;
}

///This getMetrTempsSensor118Proxy enusures we call the virtual getMetrTempsSensor118
/// and not the MountVertexLLamaBase::getMetrTempsSensor118 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor118Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor118(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_118
/// Metrology temperature sensor 118

/// MonitorPoint: METR_TEMPS_SENSOR_119
/// Metrology temperature sensor 119

/**
 * Get the current value of METR_TEMPS_SENSOR_119 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor119(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1d->getVal(timeMetrTempsSensor119);

    timestamp = timeMetrTempsSensor119;
    return valueMetrTempsSensor119;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_119 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor119(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor119 + offsetMetrTempsSensor119);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_119.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor119() const
{
    return scaleMetrTempsSensor119;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_119.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor119() const
{
    return offsetMetrTempsSensor119;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_119: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor119(
    const double scale, const double offset)
{
    scaleMetrTempsSensor119 = scale;
    offsetMetrTempsSensor119 = offset;
}

///This getMetrTempsSensor119Proxy enusures we call the virtual getMetrTempsSensor119
/// and not the MountVertexLLamaBase::getMetrTempsSensor119 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor119Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor119(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_119
/// Metrology temperature sensor 119

/// MonitorPoint: METR_TEMPS_1E
/// Get value of metrology temperature sensor pack 1E

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_1E(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps1e(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_1E.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps1e() const
{
    return rcaMonitorMetrTemps1e;
}

/// MonitorPoint: METR_TEMPS_1E

/**
 * Get the current value of METR_TEMPS_1E from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps1e(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps1e + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor120 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor120 = static_cast< float >(
        valueMetrTempsSensor120 * 0.01 + 273.15);

    timeMetrTempsSensor120 = timestamp;

    valueMetrTempsSensor121 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor121 = static_cast< float >(
        valueMetrTempsSensor121 * 0.01 + 273.15);

    timeMetrTempsSensor121 = timestamp;

    valueMetrTempsSensor122 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor122 = static_cast< float >(
        valueMetrTempsSensor122 * 0.01 + 273.15);

    timeMetrTempsSensor122 = timestamp;

    valueMetrTempsSensor123 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor123 = static_cast< float >(
        valueMetrTempsSensor123 * 0.01 + 273.15);

    timeMetrTempsSensor123 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps1e(const unsigned long rca)
{
    rcaMonitorMetrTemps1e = rca;
}

///This getMetrTemps1eProxy enusures we call the virtual getMetrTemps1e
/// and not the MountVertexLLamaBase::getMetrTemps1e as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps1eProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps1e(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_1E
/// Get value of metrology temperature sensor pack 1E

/**
 * Get the current value of METR_TEMPS_1E as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_1E()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps1e->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_120
/// Metrology temperature sensor 120

/**
 * Get the current value of METR_TEMPS_SENSOR_120 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor120(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1e->getVal(timeMetrTempsSensor120);

    timestamp = timeMetrTempsSensor120;
    return valueMetrTempsSensor120;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_120 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor120(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor120 + offsetMetrTempsSensor120);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_120.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor120() const
{
    return scaleMetrTempsSensor120;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_120.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor120() const
{
    return offsetMetrTempsSensor120;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_120: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor120(
    const double scale, const double offset)
{
    scaleMetrTempsSensor120 = scale;
    offsetMetrTempsSensor120 = offset;
}

///This getMetrTempsSensor120Proxy enusures we call the virtual getMetrTempsSensor120
/// and not the MountVertexLLamaBase::getMetrTempsSensor120 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor120Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor120(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_120
/// Metrology temperature sensor 120

/// MonitorPoint: METR_TEMPS_SENSOR_121
/// Metrology temperature sensor 121

/**
 * Get the current value of METR_TEMPS_SENSOR_121 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor121(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1e->getVal(timeMetrTempsSensor121);

    timestamp = timeMetrTempsSensor121;
    return valueMetrTempsSensor121;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_121 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor121(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor121 + offsetMetrTempsSensor121);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_121.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor121() const
{
    return scaleMetrTempsSensor121;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_121.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor121() const
{
    return offsetMetrTempsSensor121;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_121: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor121(
    const double scale, const double offset)
{
    scaleMetrTempsSensor121 = scale;
    offsetMetrTempsSensor121 = offset;
}

///This getMetrTempsSensor121Proxy enusures we call the virtual getMetrTempsSensor121
/// and not the MountVertexLLamaBase::getMetrTempsSensor121 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor121Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor121(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_121
/// Metrology temperature sensor 121

/// MonitorPoint: METR_TEMPS_SENSOR_122
/// Metrology temperature sensor 122

/**
 * Get the current value of METR_TEMPS_SENSOR_122 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor122(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1e->getVal(timeMetrTempsSensor122);

    timestamp = timeMetrTempsSensor122;
    return valueMetrTempsSensor122;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_122 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor122(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor122 + offsetMetrTempsSensor122);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_122.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor122() const
{
    return scaleMetrTempsSensor122;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_122.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor122() const
{
    return offsetMetrTempsSensor122;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_122: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor122(
    const double scale, const double offset)
{
    scaleMetrTempsSensor122 = scale;
    offsetMetrTempsSensor122 = offset;
}

///This getMetrTempsSensor122Proxy enusures we call the virtual getMetrTempsSensor122
/// and not the MountVertexLLamaBase::getMetrTempsSensor122 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor122Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor122(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_122
/// Metrology temperature sensor 122

/// MonitorPoint: METR_TEMPS_SENSOR_123
/// Metrology temperature sensor 123

/**
 * Get the current value of METR_TEMPS_SENSOR_123 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor123(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1e->getVal(timeMetrTempsSensor123);

    timestamp = timeMetrTempsSensor123;
    return valueMetrTempsSensor123;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_123 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor123(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor123 + offsetMetrTempsSensor123);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_123.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor123() const
{
    return scaleMetrTempsSensor123;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_123.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor123() const
{
    return offsetMetrTempsSensor123;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_123: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor123(
    const double scale, const double offset)
{
    scaleMetrTempsSensor123 = scale;
    offsetMetrTempsSensor123 = offset;
}

///This getMetrTempsSensor123Proxy enusures we call the virtual getMetrTempsSensor123
/// and not the MountVertexLLamaBase::getMetrTempsSensor123 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor123Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor123(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_123
/// Metrology temperature sensor 123

/// MonitorPoint: METR_TEMPS_1F
/// Get value of metrology temperature sensor pack 1F

Control::LongSeq*
    MountVertexLLamaBase::GET_METR_TEMPS_1F(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getMetrTemps1f(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point METR_TEMPS_1F.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAMetrTemps1f() const
{
    return rcaMonitorMetrTemps1f;
}

/// MonitorPoint: METR_TEMPS_1F

/**
 * Get the current value of METR_TEMPS_1F from the device.
 */

std::vector< short > MountVertexLLamaBase::getMetrTemps1f(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorMetrTemps1f + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    std::vector< short > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueMetrTempsSensor124 = static_cast< float >(
        raw[0]);

    valueMetrTempsSensor124 = static_cast< float >(
        valueMetrTempsSensor124 * 0.01 + 273.15);

    timeMetrTempsSensor124 = timestamp;

    valueMetrTempsSensor125 = static_cast< float >(
        raw[1]);

    valueMetrTempsSensor125 = static_cast< float >(
        valueMetrTempsSensor125 * 0.01 + 273.15);

    timeMetrTempsSensor125 = timestamp;

    valueMetrTempsSensor126 = static_cast< float >(
        raw[2]);

    valueMetrTempsSensor126 = static_cast< float >(
        valueMetrTempsSensor126 * 0.01 + 273.15);

    timeMetrTempsSensor126 = timestamp;

    valueMetrTempsSensor127 = static_cast< float >(
        raw[3]);

    valueMetrTempsSensor127 = static_cast< float >(
        valueMetrTempsSensor127 * 0.01 + 273.15);

    timeMetrTempsSensor127 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAMetrTemps1f(const unsigned long rca)
{
    rcaMonitorMetrTemps1f = rca;
}

///This getMetrTemps1fProxy enusures we call the virtual getMetrTemps1f
/// and not the MountVertexLLamaBase::getMetrTemps1f as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getMetrTemps1fProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTemps1f(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_1F
/// Get value of metrology temperature sensor pack 1F

/**
 * Get the current value of METR_TEMPS_1F as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::METR_TEMPS_1F()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppMetrTemps1f->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: METR_TEMPS_SENSOR_124
/// Metrology temperature sensor 124

/**
 * Get the current value of METR_TEMPS_SENSOR_124 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor124(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1f->getVal(timeMetrTempsSensor124);

    timestamp = timeMetrTempsSensor124;
    return valueMetrTempsSensor124;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_124 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor124(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor124 + offsetMetrTempsSensor124);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_124.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor124() const
{
    return scaleMetrTempsSensor124;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_124.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor124() const
{
    return offsetMetrTempsSensor124;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_124: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor124(
    const double scale, const double offset)
{
    scaleMetrTempsSensor124 = scale;
    offsetMetrTempsSensor124 = offset;
}

///This getMetrTempsSensor124Proxy enusures we call the virtual getMetrTempsSensor124
/// and not the MountVertexLLamaBase::getMetrTempsSensor124 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor124Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor124(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_124
/// Metrology temperature sensor 124

/// MonitorPoint: METR_TEMPS_SENSOR_125
/// Metrology temperature sensor 125

/**
 * Get the current value of METR_TEMPS_SENSOR_125 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor125(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1f->getVal(timeMetrTempsSensor125);

    timestamp = timeMetrTempsSensor125;
    return valueMetrTempsSensor125;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_125 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor125(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor125 + offsetMetrTempsSensor125);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_125.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor125() const
{
    return scaleMetrTempsSensor125;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_125.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor125() const
{
    return offsetMetrTempsSensor125;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_125: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor125(
    const double scale, const double offset)
{
    scaleMetrTempsSensor125 = scale;
    offsetMetrTempsSensor125 = offset;
}

///This getMetrTempsSensor125Proxy enusures we call the virtual getMetrTempsSensor125
/// and not the MountVertexLLamaBase::getMetrTempsSensor125 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor125Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor125(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_125
/// Metrology temperature sensor 125

/// MonitorPoint: METR_TEMPS_SENSOR_126
/// Metrology temperature sensor 126

/**
 * Get the current value of METR_TEMPS_SENSOR_126 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor126(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1f->getVal(timeMetrTempsSensor126);

    timestamp = timeMetrTempsSensor126;
    return valueMetrTempsSensor126;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_126 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor126(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor126 + offsetMetrTempsSensor126);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_126.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor126() const
{
    return scaleMetrTempsSensor126;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_126.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor126() const
{
    return offsetMetrTempsSensor126;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_126: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor126(
    const double scale, const double offset)
{
    scaleMetrTempsSensor126 = scale;
    offsetMetrTempsSensor126 = offset;
}

///This getMetrTempsSensor126Proxy enusures we call the virtual getMetrTempsSensor126
/// and not the MountVertexLLamaBase::getMetrTempsSensor126 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor126Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor126(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_126
/// Metrology temperature sensor 126

/// MonitorPoint: METR_TEMPS_SENSOR_127
/// Metrology temperature sensor 127

/**
 * Get the current value of METR_TEMPS_SENSOR_127 from the device.
 */

float MountVertexLLamaBase::getMetrTempsSensor127(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheMetrTemps1f->getVal(timeMetrTempsSensor127);

    timestamp = timeMetrTempsSensor127;
    return valueMetrTempsSensor127;
}

/**
 * Convert the raw value of METR_TEMPS_SENSOR_127 to a world value.
 */

float MountVertexLLamaBase::rawToWorldMetrTempsSensor127(
    const short raw) const
{
    return static_cast< float >(raw * scaleMetrTempsSensor127 + offsetMetrTempsSensor127);
}

/**
 * Get the scale conversion factor of METR_TEMPS_SENSOR_127.
 */
inline double MountVertexLLamaBase::getScaleMetrTempsSensor127() const
{
    return scaleMetrTempsSensor127;
}

/**
 * Get the offset conversion factor of METR_TEMPS_SENSOR_127.
 */
inline double MountVertexLLamaBase::getOffsetMetrTempsSensor127() const
{
    return offsetMetrTempsSensor127;
}

/**
 * Override the default conversion factors of METR_TEMPS_SENSOR_127: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionMetrTempsSensor127(
    const double scale, const double offset)
{
    scaleMetrTempsSensor127 = scale;
    offsetMetrTempsSensor127 = offset;
}

///This getMetrTempsSensor127Proxy enusures we call the virtual getMetrTempsSensor127
/// and not the MountVertexLLamaBase::getMetrTempsSensor127 as it used to be.
/// This breaks the monitoring in the FrontEnd.

float MountVertexLLamaBase::getMetrTempsSensor127Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getMetrTempsSensor127(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: METR_TEMPS_SENSOR_127
/// Metrology temperature sensor 127

/**
 * Get the RCA for monitor point PT_MODEL_COEFF_07.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAPtModelCoeff07() const
{
    return rcaMonitorPtModelCoeff07;
}

/// MonitorPoint: PT_MODEL_COEFF_07
/// Pointing model coefficient to be used in autonomous mode. 
    /// Cgr (additional gravitational flexure term)

/**
 * Get the current value of PT_MODEL_COEFF_07 from the device.
 */

double MountVertexLLamaBase::getPtModelCoeff07(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorPtModelCoeff07 + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    double raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    double ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAPtModelCoeff07(const unsigned long rca)
{
    rcaMonitorPtModelCoeff07 = rca;
}

///This getPtModelCoeff07Proxy enusures we call the virtual getPtModelCoeff07
/// and not the MountVertexLLamaBase::getPtModelCoeff07 as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getPtModelCoeff07Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getPtModelCoeff07(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: PT_MODEL_COEFF_07
/// Pointing model coefficient to be used in autonomous mode. 
/// Cgr (additional gravitational flexure term)

/**
 * Get the RCA for monitor point PT_MODEL_COEFF_08.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAPtModelCoeff08() const
{
    return rcaMonitorPtModelCoeff08;
}

/// MonitorPoint: PT_MODEL_COEFF_08
/// Pointing model coefficient to be used in autonomous mode. 
    /// Dgr (additional gravitational flexure term)

/**
 * Get the current value of PT_MODEL_COEFF_08 from the device.
 */

double MountVertexLLamaBase::getPtModelCoeff08(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorPtModelCoeff08 + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    double raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    double ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAPtModelCoeff08(const unsigned long rca)
{
    rcaMonitorPtModelCoeff08 = rca;
}

///This getPtModelCoeff08Proxy enusures we call the virtual getPtModelCoeff08
/// and not the MountVertexLLamaBase::getPtModelCoeff08 as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getPtModelCoeff08Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getPtModelCoeff08(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: PT_MODEL_COEFF_08
/// Pointing model coefficient to be used in autonomous mode. 
/// Dgr (additional gravitational flexure term)

/**
 * Get the RCA for monitor point PT_MODEL_COEFF_09.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAPtModelCoeff09() const
{
    return rcaMonitorPtModelCoeff09;
}

/// MonitorPoint: PT_MODEL_COEFF_09
/// Pointing model coefficient to be used in autonomous mode. 
    /// Zfix (Nasmyth correction)

/**
 * Get the current value of PT_MODEL_COEFF_09 from the device.
 */

double MountVertexLLamaBase::getPtModelCoeff09(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorPtModelCoeff09 + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(8U);

    std::vector< AmbDataMem_t > rawBytes(8U);

    double raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    double ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAPtModelCoeff09(const unsigned long rca)
{
    rcaMonitorPtModelCoeff09 = rca;
}

///This getPtModelCoeff09Proxy enusures we call the virtual getPtModelCoeff09
/// and not the MountVertexLLamaBase::getPtModelCoeff09 as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getPtModelCoeff09Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getPtModelCoeff09(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: PT_MODEL_COEFF_09
/// Pointing model coefficient to be used in autonomous mode. 
/// Zfix (Nasmyth correction)

/**
 * Get the RCA for monitor point SUBREF_ROTATION.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCASubrefRotation() const
{
    return rcaMonitorSubrefRotation;
}

/// MonitorPoint: SUBREF_ROTATION
/// Subreflector rotation position.

/**
 * Get the current value of SUBREF_ROTATION from the device.
 */

std::vector< short > MountVertexLLamaBase::getSubrefRotation(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorSubrefRotation + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< short > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueSubrefRotationXTip = static_cast< double >(
        raw[0]);

    valueSubrefRotationXTip = static_cast< double >(
        valueSubrefRotationXTip * 0.0001 + 0.0);

    timeSubrefRotationXTip = timestamp;

    valueSubrefRotationYTilt = static_cast< double >(
        raw[1]);

    valueSubrefRotationYTilt = static_cast< double >(
        valueSubrefRotationYTilt * 0.0001 + 0.0);

    timeSubrefRotationYTilt = timestamp;

    valueSubrefRotationZTilt = static_cast< double >(
        raw[2]);

    valueSubrefRotationZTilt = static_cast< double >(
        valueSubrefRotationZTilt * 0.0001 + 0.0);

    timeSubrefRotationZTilt = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCASubrefRotation(const unsigned long rca)
{
    rcaMonitorSubrefRotation = rca;
}

///This getSubrefRotationProxy enusures we call the virtual getSubrefRotation
/// and not the MountVertexLLamaBase::getSubrefRotation as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getSubrefRotationProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefRotation(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_ROTATION
/// Subreflector rotation position.

/// MonitorPoint: SUBREF_ROTATION_X_TIP
/// Subreflector rotation x tip

/**
 * Get the current value of SUBREF_ROTATION_X_TIP from the device.
 */

double MountVertexLLamaBase::getSubrefRotationXTip(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefRotation->getVal(timeSubrefRotationXTip);

    timestamp = timeSubrefRotationXTip;
    return valueSubrefRotationXTip;
}

/**
 * Convert the raw value of SUBREF_ROTATION_X_TIP to a world value.
 */

double MountVertexLLamaBase::rawToWorldSubrefRotationXTip(
    const short raw) const
{
    return static_cast< double >(raw * scaleSubrefRotationXTip + offsetSubrefRotationXTip);
}

/**
 * Get the scale conversion factor of SUBREF_ROTATION_X_TIP.
 */
inline double MountVertexLLamaBase::getScaleSubrefRotationXTip() const
{
    return scaleSubrefRotationXTip;
}

/**
 * Get the offset conversion factor of SUBREF_ROTATION_X_TIP.
 */
inline double MountVertexLLamaBase::getOffsetSubrefRotationXTip() const
{
    return offsetSubrefRotationXTip;
}

/**
 * Override the default conversion factors of SUBREF_ROTATION_X_TIP: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionSubrefRotationXTip(
    const double scale, const double offset)
{
    scaleSubrefRotationXTip = scale;
    offsetSubrefRotationXTip = offset;
}

///This getSubrefRotationXTipProxy enusures we call the virtual getSubrefRotationXTip
/// and not the MountVertexLLamaBase::getSubrefRotationXTip as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getSubrefRotationXTipProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefRotationXTip(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_ROTATION_X_TIP
/// Subreflector rotation x tip

/// MonitorPoint: SUBREF_ROTATION_Y_TILT
/// Subreflector rotation y tilt

/**
 * Get the current value of SUBREF_ROTATION_Y_TILT from the device.
 */

double MountVertexLLamaBase::getSubrefRotationYTilt(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefRotation->getVal(timeSubrefRotationYTilt);

    timestamp = timeSubrefRotationYTilt;
    return valueSubrefRotationYTilt;
}

/**
 * Convert the raw value of SUBREF_ROTATION_Y_TILT to a world value.
 */

double MountVertexLLamaBase::rawToWorldSubrefRotationYTilt(
    const short raw) const
{
    return static_cast< double >(raw * scaleSubrefRotationYTilt + offsetSubrefRotationYTilt);
}

/**
 * Get the scale conversion factor of SUBREF_ROTATION_Y_TILT.
 */
inline double MountVertexLLamaBase::getScaleSubrefRotationYTilt() const
{
    return scaleSubrefRotationYTilt;
}

/**
 * Get the offset conversion factor of SUBREF_ROTATION_Y_TILT.
 */
inline double MountVertexLLamaBase::getOffsetSubrefRotationYTilt() const
{
    return offsetSubrefRotationYTilt;
}

/**
 * Override the default conversion factors of SUBREF_ROTATION_Y_TILT: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionSubrefRotationYTilt(
    const double scale, const double offset)
{
    scaleSubrefRotationYTilt = scale;
    offsetSubrefRotationYTilt = offset;
}

///This getSubrefRotationYTiltProxy enusures we call the virtual getSubrefRotationYTilt
/// and not the MountVertexLLamaBase::getSubrefRotationYTilt as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getSubrefRotationYTiltProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefRotationYTilt(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_ROTATION_Y_TILT
/// Subreflector rotation y tilt

/// MonitorPoint: SUBREF_ROTATION_Z_TILT
/// Subreflector rotation z tilt

/**
 * Get the current value of SUBREF_ROTATION_Z_TILT from the device.
 */

double MountVertexLLamaBase::getSubrefRotationZTilt(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefRotation->getVal(timeSubrefRotationZTilt);

    timestamp = timeSubrefRotationZTilt;
    return valueSubrefRotationZTilt;
}

/**
 * Convert the raw value of SUBREF_ROTATION_Z_TILT to a world value.
 */

double MountVertexLLamaBase::rawToWorldSubrefRotationZTilt(
    const short raw) const
{
    return static_cast< double >(raw * scaleSubrefRotationZTilt + offsetSubrefRotationZTilt);
}

/**
 * Get the scale conversion factor of SUBREF_ROTATION_Z_TILT.
 */
inline double MountVertexLLamaBase::getScaleSubrefRotationZTilt() const
{
    return scaleSubrefRotationZTilt;
}

/**
 * Get the offset conversion factor of SUBREF_ROTATION_Z_TILT.
 */
inline double MountVertexLLamaBase::getOffsetSubrefRotationZTilt() const
{
    return offsetSubrefRotationZTilt;
}

/**
 * Override the default conversion factors of SUBREF_ROTATION_Z_TILT: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionSubrefRotationZTilt(
    const double scale, const double offset)
{
    scaleSubrefRotationZTilt = scale;
    offsetSubrefRotationZTilt = offset;
}

///This getSubrefRotationZTiltProxy enusures we call the virtual getSubrefRotationZTilt
/// and not the MountVertexLLamaBase::getSubrefRotationZTilt as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getSubrefRotationZTiltProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefRotationZTilt(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_ROTATION_Z_TILT
/// Subreflector rotation z tilt

/// MonitorPoint: SUBREF_DELTA_ROT
/// Subreflector rotation delta position.

Control::LongSeq*
    MountVertexLLamaBase::GET_SUBREF_DELTA_ROT(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getSubrefDeltaRot(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point SUBREF_DELTA_ROT.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCASubrefDeltaRot() const
{
    return rcaMonitorSubrefDeltaRot;
}

/// MonitorPoint: SUBREF_DELTA_ROT

/**
 * Get the current value of SUBREF_DELTA_ROT from the device.
 */

std::vector< short > MountVertexLLamaBase::getSubrefDeltaRot(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorSubrefDeltaRot + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< short > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueSubrefDeltaRotXTip = static_cast< double >(
        raw[0]);

    valueSubrefDeltaRotXTip = static_cast< double >(
        valueSubrefDeltaRotXTip * 0.0001 + 0.0);

    timeSubrefDeltaRotXTip = timestamp;

    valueSubrefDeltaRotYTilt = static_cast< double >(
        raw[1]);

    valueSubrefDeltaRotYTilt = static_cast< double >(
        valueSubrefDeltaRotYTilt * 0.0001 + 0.0);

    timeSubrefDeltaRotYTilt = timestamp;

    valueSubrefDeltaRotZTilt = static_cast< double >(
        raw[2]);

    valueSubrefDeltaRotZTilt = static_cast< double >(
        valueSubrefDeltaRotZTilt * 0.0001 + 0.0);

    timeSubrefDeltaRotZTilt = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCASubrefDeltaRot(const unsigned long rca)
{
    rcaMonitorSubrefDeltaRot = rca;
}

///This getSubrefDeltaRotProxy enusures we call the virtual getSubrefDeltaRot
/// and not the MountVertexLLamaBase::getSubrefDeltaRot as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getSubrefDeltaRotProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefDeltaRot(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_DELTA_ROT
/// Subreflector rotation delta position.

/**
 * Get the current value of SUBREF_DELTA_ROT as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::SUBREF_DELTA_ROT()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppSubrefDeltaRot->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: SUBREF_DELTA_ROT_X_TIP
/// Subreflector delta rotation x tip

/**
 * Get the current value of SUBREF_DELTA_ROT_X_TIP from the device.
 */

double MountVertexLLamaBase::getSubrefDeltaRotXTip(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefDeltaRot->getVal(timeSubrefDeltaRotXTip);

    timestamp = timeSubrefDeltaRotXTip;
    return valueSubrefDeltaRotXTip;
}

/**
 * Convert the raw value of SUBREF_DELTA_ROT_X_TIP to a world value.
 */

double MountVertexLLamaBase::rawToWorldSubrefDeltaRotXTip(
    const short raw) const
{
    return static_cast< double >(raw * scaleSubrefDeltaRotXTip + offsetSubrefDeltaRotXTip);
}

/**
 * Get the scale conversion factor of SUBREF_DELTA_ROT_X_TIP.
 */
inline double MountVertexLLamaBase::getScaleSubrefDeltaRotXTip() const
{
    return scaleSubrefDeltaRotXTip;
}

/**
 * Get the offset conversion factor of SUBREF_DELTA_ROT_X_TIP.
 */
inline double MountVertexLLamaBase::getOffsetSubrefDeltaRotXTip() const
{
    return offsetSubrefDeltaRotXTip;
}

/**
 * Override the default conversion factors of SUBREF_DELTA_ROT_X_TIP: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionSubrefDeltaRotXTip(
    const double scale, const double offset)
{
    scaleSubrefDeltaRotXTip = scale;
    offsetSubrefDeltaRotXTip = offset;
}

///This getSubrefDeltaRotXTipProxy enusures we call the virtual getSubrefDeltaRotXTip
/// and not the MountVertexLLamaBase::getSubrefDeltaRotXTip as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getSubrefDeltaRotXTipProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefDeltaRotXTip(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_DELTA_ROT_X_TIP
/// Subreflector delta rotation x tip

/// MonitorPoint: SUBREF_DELTA_ROT_Y_TILT
/// Subreflector delta rotation y tilt

/**
 * Get the current value of SUBREF_DELTA_ROT_Y_TILT from the device.
 */

double MountVertexLLamaBase::getSubrefDeltaRotYTilt(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefDeltaRot->getVal(timeSubrefDeltaRotYTilt);

    timestamp = timeSubrefDeltaRotYTilt;
    return valueSubrefDeltaRotYTilt;
}

/**
 * Convert the raw value of SUBREF_DELTA_ROT_Y_TILT to a world value.
 */

double MountVertexLLamaBase::rawToWorldSubrefDeltaRotYTilt(
    const short raw) const
{
    return static_cast< double >(raw * scaleSubrefDeltaRotYTilt + offsetSubrefDeltaRotYTilt);
}

/**
 * Get the scale conversion factor of SUBREF_DELTA_ROT_Y_TILT.
 */
inline double MountVertexLLamaBase::getScaleSubrefDeltaRotYTilt() const
{
    return scaleSubrefDeltaRotYTilt;
}

/**
 * Get the offset conversion factor of SUBREF_DELTA_ROT_Y_TILT.
 */
inline double MountVertexLLamaBase::getOffsetSubrefDeltaRotYTilt() const
{
    return offsetSubrefDeltaRotYTilt;
}

/**
 * Override the default conversion factors of SUBREF_DELTA_ROT_Y_TILT: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionSubrefDeltaRotYTilt(
    const double scale, const double offset)
{
    scaleSubrefDeltaRotYTilt = scale;
    offsetSubrefDeltaRotYTilt = offset;
}

///This getSubrefDeltaRotYTiltProxy enusures we call the virtual getSubrefDeltaRotYTilt
/// and not the MountVertexLLamaBase::getSubrefDeltaRotYTilt as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getSubrefDeltaRotYTiltProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefDeltaRotYTilt(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_DELTA_ROT_Y_TILT
/// Subreflector delta rotation y tilt

/// MonitorPoint: SUBREF_DELTA_ROT_Z_TILT
/// Subreflector delta rotation z tilt

/**
 * Get the current value of SUBREF_DELTA_ROT_Z_TILT from the device.
 */

double MountVertexLLamaBase::getSubrefDeltaRotZTilt(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefDeltaRot->getVal(timeSubrefDeltaRotZTilt);

    timestamp = timeSubrefDeltaRotZTilt;
    return valueSubrefDeltaRotZTilt;
}

/**
 * Convert the raw value of SUBREF_DELTA_ROT_Z_TILT to a world value.
 */

double MountVertexLLamaBase::rawToWorldSubrefDeltaRotZTilt(
    const short raw) const
{
    return static_cast< double >(raw * scaleSubrefDeltaRotZTilt + offsetSubrefDeltaRotZTilt);
}

/**
 * Get the scale conversion factor of SUBREF_DELTA_ROT_Z_TILT.
 */
inline double MountVertexLLamaBase::getScaleSubrefDeltaRotZTilt() const
{
    return scaleSubrefDeltaRotZTilt;
}

/**
 * Get the offset conversion factor of SUBREF_DELTA_ROT_Z_TILT.
 */
inline double MountVertexLLamaBase::getOffsetSubrefDeltaRotZTilt() const
{
    return offsetSubrefDeltaRotZTilt;
}

/**
 * Override the default conversion factors of SUBREF_DELTA_ROT_Z_TILT: scale and offset.
 */
inline void MountVertexLLamaBase::setConversionSubrefDeltaRotZTilt(
    const double scale, const double offset)
{
    scaleSubrefDeltaRotZTilt = scale;
    offsetSubrefDeltaRotZTilt = offset;
}

///This getSubrefDeltaRotZTiltProxy enusures we call the virtual getSubrefDeltaRotZTilt
/// and not the MountVertexLLamaBase::getSubrefDeltaRotZTilt as it used to be.
/// This breaks the monitoring in the FrontEnd.

double MountVertexLLamaBase::getSubrefDeltaRotZTiltProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefDeltaRotZTilt(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_DELTA_ROT_Z_TILT
/// Subreflector delta rotation z tilt

/**
 * Get the RCA for monitor point SUBREF_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCASubrefStatus() const
{
    return rcaMonitorSubrefStatus;
}

/// MonitorPoint: SUBREF_STATUS
/// Subreflector status

/**
 * Get the current value of SUBREF_STATUS from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getSubrefStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorSubrefStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(5U);

    std::vector< AmbDataMem_t > rawBytes(5U);

    std::vector< unsigned char > raw(5U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueSubrefAmplifierAct1Overtemp.

    valueSubrefAmplifierAct1Overtemp = ((raw[1] & 0x01) != 0) ? true : false;

    timeSubrefAmplifierAct1Overtemp = timestamp;

    // Set valueSubrefAmplifierAct2Overtemp.

    valueSubrefAmplifierAct2Overtemp = ((raw[1] & 0x02) != 0) ? true : false;

    timeSubrefAmplifierAct2Overtemp = timestamp;

    // Set valueSubrefAmplifierAct3Overtemp.

    valueSubrefAmplifierAct3Overtemp = ((raw[1] & 0x04) != 0) ? true : false;

    timeSubrefAmplifierAct3Overtemp = timestamp;

    // Set valueSubrefAmplifierAct4Overtemp.

    valueSubrefAmplifierAct4Overtemp = ((raw[1] & 0x08) != 0) ? true : false;

    timeSubrefAmplifierAct4Overtemp = timestamp;

    // Set valueSubrefAmplifierAct5Overtemp.

    valueSubrefAmplifierAct5Overtemp = ((raw[1] & 0x10) != 0) ? true : false;

    timeSubrefAmplifierAct5Overtemp = timestamp;

    // Set valueSubrefAmplifierAct6Overtemp.

    valueSubrefAmplifierAct6Overtemp = ((raw[1] & 0x20) != 0) ? true : false;

    timeSubrefAmplifierAct6Overtemp = timestamp;

    // Set valueSubrefAct1DoesNotMove.

    valueSubrefAct1DoesNotMove = ((raw[2] & 0x01) != 0) ? true : false;

    timeSubrefAct1DoesNotMove = timestamp;

    // Set valueSubrefAct2DoesNotMove.

    valueSubrefAct2DoesNotMove = ((raw[2] & 0x02) != 0) ? true : false;

    timeSubrefAct2DoesNotMove = timestamp;

    // Set valueSubrefAct3DoesNotMove.

    valueSubrefAct3DoesNotMove = ((raw[2] & 0x04) != 0) ? true : false;

    timeSubrefAct3DoesNotMove = timestamp;

    // Set valueSubrefAct4DoesNotMove.

    valueSubrefAct4DoesNotMove = ((raw[2] & 0x08) != 0) ? true : false;

    timeSubrefAct4DoesNotMove = timestamp;

    // Set valueSubrefAct5DoesNotMove.

    valueSubrefAct5DoesNotMove = ((raw[2] & 0x10) != 0) ? true : false;

    timeSubrefAct5DoesNotMove = timestamp;

    // Set valueSubrefAct6DoesNotMove.

    valueSubrefAct6DoesNotMove = ((raw[2] & 0x20) != 0) ? true : false;

    timeSubrefAct6DoesNotMove = timestamp;

    // Set valueSubrefAct1NotInitialized.

    valueSubrefAct1NotInitialized = ((raw[3] & 0x01) != 0) ? true : false;

    timeSubrefAct1NotInitialized = timestamp;

    // Set valueSubrefAct2NotInitialized.

    valueSubrefAct2NotInitialized = ((raw[3] & 0x02) != 0) ? true : false;

    timeSubrefAct2NotInitialized = timestamp;

    // Set valueSubrefAct3NotInitialized.

    valueSubrefAct3NotInitialized = ((raw[3] & 0x04) != 0) ? true : false;

    timeSubrefAct3NotInitialized = timestamp;

    // Set valueSubrefAct4NotInitialized.

    valueSubrefAct4NotInitialized = ((raw[3] & 0x08) != 0) ? true : false;

    timeSubrefAct4NotInitialized = timestamp;

    // Set valueSubrefAct5NotInitialized.

    valueSubrefAct5NotInitialized = ((raw[3] & 0x10) != 0) ? true : false;

    timeSubrefAct5NotInitialized = timestamp;

    // Set valueSubrefAct6NotInitialized.

    valueSubrefAct6NotInitialized = ((raw[3] & 0x20) != 0) ? true : false;

    timeSubrefAct6NotInitialized = timestamp;

    // Set valueSubrefHexapodInInitMode.

    valueSubrefHexapodInInitMode = ((raw[3] & 0x40) != 0) ? true : false;

    timeSubrefHexapodInInitMode = timestamp;

    // Set valueSubrefDrivePowerSupplyFailure.

    valueSubrefDrivePowerSupplyFailure = ((raw[4] & 0x01) != 0) ? true : false;

    timeSubrefDrivePowerSupplyFailure = timestamp;

    // Set valueSubrefCommErrorAcuHpc.

    valueSubrefCommErrorAcuHpc = ((raw[4] & 0x02) != 0) ? true : false;

    timeSubrefCommErrorAcuHpc = timestamp;

    // Set valueSubrefDriveElectronicsAtApexTempTooLow.

    valueSubrefDriveElectronicsAtApexTempTooLow = ((raw[4] & 0x04) != 0) ? true : false;

    timeSubrefDriveElectronicsAtApexTempTooLow = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCASubrefStatus(const unsigned long rca)
{
    rcaMonitorSubrefStatus = rca;
}

///This getSubrefStatusProxy enusures we call the virtual getSubrefStatus
/// and not the MountVertexLLamaBase::getSubrefStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getSubrefStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSubrefStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SUBREF_STATUS
/// Subreflector status

/// MonitorPoint: SUBREF_AMPLIFIER_ACT_1_OVERTEMP
/// Amplifier Actuator 1 overtemperature

/**
 * Get the current value of SUBREF_AMPLIFIER_ACT_1_OVERTEMP from the device.
 */

bool MountVertexLLamaBase::getSubrefAmplifierAct1Overtemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAmplifierAct1Overtemp);

    timestamp = timeSubrefAmplifierAct1Overtemp;
    return valueSubrefAmplifierAct1Overtemp;
}

/// MonitorPoint: SUBREF_AMPLIFIER_ACT_2_OVERTEMP
/// Amplifier Actuator 2 overtemperature

/**
 * Get the current value of SUBREF_AMPLIFIER_ACT_2_OVERTEMP from the device.
 */

bool MountVertexLLamaBase::getSubrefAmplifierAct2Overtemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAmplifierAct2Overtemp);

    timestamp = timeSubrefAmplifierAct2Overtemp;
    return valueSubrefAmplifierAct2Overtemp;
}

/// MonitorPoint: SUBREF_AMPLIFIER_ACT_3_OVERTEMP
/// Amplifier Actuator 3 overtemperature

/**
 * Get the current value of SUBREF_AMPLIFIER_ACT_3_OVERTEMP from the device.
 */

bool MountVertexLLamaBase::getSubrefAmplifierAct3Overtemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAmplifierAct3Overtemp);

    timestamp = timeSubrefAmplifierAct3Overtemp;
    return valueSubrefAmplifierAct3Overtemp;
}

/// MonitorPoint: SUBREF_AMPLIFIER_ACT_4_OVERTEMP
/// Amplifier Actuator 4 overtemperature

/**
 * Get the current value of SUBREF_AMPLIFIER_ACT_4_OVERTEMP from the device.
 */

bool MountVertexLLamaBase::getSubrefAmplifierAct4Overtemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAmplifierAct4Overtemp);

    timestamp = timeSubrefAmplifierAct4Overtemp;
    return valueSubrefAmplifierAct4Overtemp;
}

/// MonitorPoint: SUBREF_AMPLIFIER_ACT_5_OVERTEMP
/// Amplifier Actuator 5 overtemperature

/**
 * Get the current value of SUBREF_AMPLIFIER_ACT_5_OVERTEMP from the device.
 */

bool MountVertexLLamaBase::getSubrefAmplifierAct5Overtemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAmplifierAct5Overtemp);

    timestamp = timeSubrefAmplifierAct5Overtemp;
    return valueSubrefAmplifierAct5Overtemp;
}

/// MonitorPoint: SUBREF_AMPLIFIER_ACT_6_OVERTEMP
/// Amplifier Actuator 6 overtemperature

/**
 * Get the current value of SUBREF_AMPLIFIER_ACT_6_OVERTEMP from the device.
 */

bool MountVertexLLamaBase::getSubrefAmplifierAct6Overtemp(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAmplifierAct6Overtemp);

    timestamp = timeSubrefAmplifierAct6Overtemp;
    return valueSubrefAmplifierAct6Overtemp;
}

/// MonitorPoint: SUBREF_ACT_1_DOES_NOT_MOVE
/// Actuator 1 does not move

/**
 * Get the current value of SUBREF_ACT_1_DOES_NOT_MOVE from the device.
 */

bool MountVertexLLamaBase::getSubrefAct1DoesNotMove(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct1DoesNotMove);

    timestamp = timeSubrefAct1DoesNotMove;
    return valueSubrefAct1DoesNotMove;
}

/// MonitorPoint: SUBREF_ACT_2_DOES_NOT_MOVE
/// Actuator 2 does not move

/**
 * Get the current value of SUBREF_ACT_2_DOES_NOT_MOVE from the device.
 */

bool MountVertexLLamaBase::getSubrefAct2DoesNotMove(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct2DoesNotMove);

    timestamp = timeSubrefAct2DoesNotMove;
    return valueSubrefAct2DoesNotMove;
}

/// MonitorPoint: SUBREF_ACT_3_DOES_NOT_MOVE
/// Actuator 3 does not move

/**
 * Get the current value of SUBREF_ACT_3_DOES_NOT_MOVE from the device.
 */

bool MountVertexLLamaBase::getSubrefAct3DoesNotMove(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct3DoesNotMove);

    timestamp = timeSubrefAct3DoesNotMove;
    return valueSubrefAct3DoesNotMove;
}

/// MonitorPoint: SUBREF_ACT_4_DOES_NOT_MOVE
/// Actuator 4 does not move

/**
 * Get the current value of SUBREF_ACT_4_DOES_NOT_MOVE from the device.
 */

bool MountVertexLLamaBase::getSubrefAct4DoesNotMove(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct4DoesNotMove);

    timestamp = timeSubrefAct4DoesNotMove;
    return valueSubrefAct4DoesNotMove;
}

/// MonitorPoint: SUBREF_ACT_5_DOES_NOT_MOVE
/// Actuator 5 does not move

/**
 * Get the current value of SUBREF_ACT_5_DOES_NOT_MOVE from the device.
 */

bool MountVertexLLamaBase::getSubrefAct5DoesNotMove(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct5DoesNotMove);

    timestamp = timeSubrefAct5DoesNotMove;
    return valueSubrefAct5DoesNotMove;
}

/// MonitorPoint: SUBREF_ACT_6_DOES_NOT_MOVE
/// Actuator 6 does not move

/**
 * Get the current value of SUBREF_ACT_6_DOES_NOT_MOVE from the device.
 */

bool MountVertexLLamaBase::getSubrefAct6DoesNotMove(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct6DoesNotMove);

    timestamp = timeSubrefAct6DoesNotMove;
    return valueSubrefAct6DoesNotMove;
}

/// MonitorPoint: SUBREF_ACT_1_NOT_INITIALIZED
/// Actuator 1 not initialized

/**
 * Get the current value of SUBREF_ACT_1_NOT_INITIALIZED from the device.
 */

bool MountVertexLLamaBase::getSubrefAct1NotInitialized(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct1NotInitialized);

    timestamp = timeSubrefAct1NotInitialized;
    return valueSubrefAct1NotInitialized;
}

/// MonitorPoint: SUBREF_ACT_2_NOT_INITIALIZED
/// Actuator 2 not initialized

/**
 * Get the current value of SUBREF_ACT_2_NOT_INITIALIZED from the device.
 */

bool MountVertexLLamaBase::getSubrefAct2NotInitialized(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct2NotInitialized);

    timestamp = timeSubrefAct2NotInitialized;
    return valueSubrefAct2NotInitialized;
}

/// MonitorPoint: SUBREF_ACT_3_NOT_INITIALIZED
/// Actuator 3 not initialized

/**
 * Get the current value of SUBREF_ACT_3_NOT_INITIALIZED from the device.
 */

bool MountVertexLLamaBase::getSubrefAct3NotInitialized(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct3NotInitialized);

    timestamp = timeSubrefAct3NotInitialized;
    return valueSubrefAct3NotInitialized;
}

/// MonitorPoint: SUBREF_ACT_4_NOT_INITIALIZED
/// Actuator 4 not initialized

/**
 * Get the current value of SUBREF_ACT_4_NOT_INITIALIZED from the device.
 */

bool MountVertexLLamaBase::getSubrefAct4NotInitialized(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct4NotInitialized);

    timestamp = timeSubrefAct4NotInitialized;
    return valueSubrefAct4NotInitialized;
}

/// MonitorPoint: SUBREF_ACT_5_NOT_INITIALIZED
/// Actuator 5 not initialized

/**
 * Get the current value of SUBREF_ACT_5_NOT_INITIALIZED from the device.
 */

bool MountVertexLLamaBase::getSubrefAct5NotInitialized(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct5NotInitialized);

    timestamp = timeSubrefAct5NotInitialized;
    return valueSubrefAct5NotInitialized;
}

/// MonitorPoint: SUBREF_ACT_6_NOT_INITIALIZED
/// Actuator 6 not initialized

/**
 * Get the current value of SUBREF_ACT_6_NOT_INITIALIZED from the device.
 */

bool MountVertexLLamaBase::getSubrefAct6NotInitialized(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefAct6NotInitialized);

    timestamp = timeSubrefAct6NotInitialized;
    return valueSubrefAct6NotInitialized;
}

/// MonitorPoint: SUBREF_HEXAPOD_IN_INIT_MODE
/// Hexapod in initializing mode

/**
 * Get the current value of SUBREF_HEXAPOD_IN_INIT_MODE from the device.
 */

bool MountVertexLLamaBase::getSubrefHexapodInInitMode(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefHexapodInInitMode);

    timestamp = timeSubrefHexapodInInitMode;
    return valueSubrefHexapodInInitMode;
}

/// MonitorPoint: SUBREF_DRIVE_POWER_SUPPLY_FAILURE
/// Subreflector drive power supply failure

/**
 * Get the current value of SUBREF_DRIVE_POWER_SUPPLY_FAILURE from the device.
 */

bool MountVertexLLamaBase::getSubrefDrivePowerSupplyFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefDrivePowerSupplyFailure);

    timestamp = timeSubrefDrivePowerSupplyFailure;
    return valueSubrefDrivePowerSupplyFailure;
}

/// MonitorPoint: SUBREF_COMM_ERROR_ACU_HPC
/// communication error ACU-HPC

/**
 * Get the current value of SUBREF_COMM_ERROR_ACU_HPC from the device.
 */

bool MountVertexLLamaBase::getSubrefCommErrorAcuHpc(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefCommErrorAcuHpc);

    timestamp = timeSubrefCommErrorAcuHpc;
    return valueSubrefCommErrorAcuHpc;
}

/// MonitorPoint: SUBREF_DRIVE_ELECTRONICS_AT_APEX_TEMP_TOO_LOW
/// Drive electronics at apex: temperature too low

/**
 * Get the current value of SUBREF_DRIVE_ELECTRONICS_AT_APEX_TEMP_TOO_LOW from the device.
 */

bool MountVertexLLamaBase::getSubrefDriveElectronicsAtApexTempTooLow(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSubrefStatus->getVal(timeSubrefDriveElectronicsAtApexTempTooLow);

    timestamp = timeSubrefDriveElectronicsAtApexTempTooLow;
    return valueSubrefDriveElectronicsAtApexTempTooLow;
}

/// MonitorPoint: OTHER_STATUS
/// Cabin and auxiliary status information. Conditions may be 
    /// Fault conditions (F) or Status information (S). Each condition 
    /// is marked below; fault conditions require the use of the 
    /// CLEAR_FAULT_CMD to clear, while status information will 
    /// clear when the hardware condition is cleared.

CORBA::Long MountVertexLLamaBase::GET_OTHER_STATUS(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Long ret(getOtherStatus(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/**
 * Get the RCA for monitor point OTHER_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAOtherStatus() const
{
    return rcaMonitorOtherStatus;
}

/// MonitorPoint: OTHER_STATUS

/**
 * Get the current value of OTHER_STATUS from the device.
 */

unsigned char MountVertexLLamaBase::getOtherStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorOtherStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    // Set valueSmokeAlarmComputerRack.

    valueSmokeAlarmComputerRack = ((raw & 0x01) != 0) ? true : false;

    timeSmokeAlarmComputerRack = timestamp;

    // Set valueSmokeAlarmReceiverCabin.

    valueSmokeAlarmReceiverCabin = ((raw & 0x02) != 0) ? true : false;

    timeSmokeAlarmReceiverCabin = timestamp;

    // Set valueSmokeAlarmAntennaTower.

    valueSmokeAlarmAntennaTower = ((raw & 0x04) != 0) ? true : false;

    timeSmokeAlarmAntennaTower = timestamp;

    // Set valueSmokeAlarmUpsCabinetEquipPlatform.

    valueSmokeAlarmUpsCabinetEquipPlatform = ((raw & 0x08) != 0) ? true : false;

    timeSmokeAlarmUpsCabinetEquipPlatform = timestamp;

    // Set valueOverTemperatureReceiverCabin.

    valueOverTemperatureReceiverCabin = ((raw & 0x10) != 0) ? true : false;

    timeOverTemperatureReceiverCabin = timestamp;

    // Set valueSmokeAlarmNasmythA.

    valueSmokeAlarmNasmythA = ((raw & 0x20) != 0) ? true : false;

    timeSmokeAlarmNasmythA = timestamp;

    // Set valueSmokeAlarmNasmythB.

    valueSmokeAlarmNasmythB = ((raw & 0x40) != 0) ? true : false;

    timeSmokeAlarmNasmythB = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAOtherStatus(const unsigned long rca)
{
    rcaMonitorOtherStatus = rca;
}

///This getOtherStatusProxy enusures we call the virtual getOtherStatus
/// and not the MountVertexLLamaBase::getOtherStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getOtherStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getOtherStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: OTHER_STATUS
/// Cabin and auxiliary status information. Conditions may be 
/// Fault conditions (F) or Status information (S). Each condition 
/// is marked below; fault conditions require the use of the 
/// CLEAR_FAULT_CMD to clear, while status information will 
/// clear when the hardware condition is cleared.

/**
 * Get the current value of OTHER_STATUS as a BACI property.
 */

ACS::ROpattern_ptr MountVertexLLamaBase::OTHER_STATUS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROpattern_var prop(
        ACS::ROpattern::_narrow(sppOtherStatus->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: SMOKE_ALARM_COMPUTER_RACK
/// Smoke alarm computer rack (F)

/**
 * Get the current value of SMOKE_ALARM_COMPUTER_RACK from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmComputerRack(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeSmokeAlarmComputerRack);

    timestamp = timeSmokeAlarmComputerRack;
    return valueSmokeAlarmComputerRack;
}

/// MonitorPoint: SMOKE_ALARM_RECEIVER_CABIN
/// Smoke alarm receiver cabin (F)

/**
 * Get the current value of SMOKE_ALARM_RECEIVER_CABIN from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmReceiverCabin(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeSmokeAlarmReceiverCabin);

    timestamp = timeSmokeAlarmReceiverCabin;
    return valueSmokeAlarmReceiverCabin;
}

/// MonitorPoint: SMOKE_ALARM_ANTENNA_TOWER
/// Smoke alarm antenna tower (F)

/**
 * Get the current value of SMOKE_ALARM_ANTENNA_TOWER from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmAntennaTower(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeSmokeAlarmAntennaTower);

    timestamp = timeSmokeAlarmAntennaTower;
    return valueSmokeAlarmAntennaTower;
}

/// MonitorPoint: SMOKE_ALARM_UPS_CABINET_EQUIP_PLATFORM
/// Smoke alarm UPS cabinet / equipment platform (F)

/**
 * Get the current value of SMOKE_ALARM_UPS_CABINET_EQUIP_PLATFORM from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmUpsCabinetEquipPlatform(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeSmokeAlarmUpsCabinetEquipPlatform);

    timestamp = timeSmokeAlarmUpsCabinetEquipPlatform;
    return valueSmokeAlarmUpsCabinetEquipPlatform;
}

/// MonitorPoint: OVER_TEMPERATURE_RECEIVER_CABIN
/// Over-temperature receiver cabin (S)

/**
 * Get the current value of OVER_TEMPERATURE_RECEIVER_CABIN from the device.
 */

bool MountVertexLLamaBase::getOverTemperatureReceiverCabin(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeOverTemperatureReceiverCabin);

    timestamp = timeOverTemperatureReceiverCabin;
    return valueOverTemperatureReceiverCabin;
}

/// MonitorPoint: SMOKE_ALARM_NASMYTH_A
/// Smoke alarm Nasmyth cabin A

/**
 * Get the current value of SMOKE_ALARM_NASMYTH_A from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmNasmythA(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeSmokeAlarmNasmythA);

    timestamp = timeSmokeAlarmNasmythA;
    return valueSmokeAlarmNasmythA;
}

/// MonitorPoint: SMOKE_ALARM_NASMYTH_B
/// Smoke alarm Nasmyth cabin B

/**
 * Get the current value of SMOKE_ALARM_NASMYTH_B from the device.
 */

bool MountVertexLLamaBase::getSmokeAlarmNasmythB(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheOtherStatus->getVal(timeSmokeAlarmNasmythB);

    timestamp = timeSmokeAlarmNasmythB;
    return valueSmokeAlarmNasmythB;
}

/**
 * Get the RCA for monitor point POWER_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAPowerStatus() const
{
    return rcaMonitorPowerStatus;
}

/// MonitorPoint: POWER_STATUS
/// Power status

/**
 * Get the current value of POWER_STATUS from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getPowerStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorPowerStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(2U);

    std::vector< AmbDataMem_t > rawBytes(2U);

    std::vector< unsigned char > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueMainSwPosAntennabasePs.

    valueMainSwPosAntennabasePs = ((raw[0] & 0x02) != 0) ? true : false;

    timeMainSwPosAntennabasePs = timestamp;

    // Set valueMainCircuitBreaker.

    valueMainCircuitBreaker = ((raw[0] & 0x04) != 0) ? true : false;

    timeMainCircuitBreaker = timestamp;

    // Set valueLightningArrestorTripped.

    valueLightningArrestorTripped = ((raw[0] & 0x20) != 0) ? true : false;

    timeLightningArrestorTripped = timestamp;

    // Set valueSinglePhaseInterlock.

    valueSinglePhaseInterlock = ((raw[1] & 0x01) != 0) ? true : false;

    timeSinglePhaseInterlock = timestamp;

    // Set valueReversePhaseProtectionReleased.

    valueReversePhaseProtectionReleased = ((raw[1] & 0x02) != 0) ? true : false;

    timeReversePhaseProtectionReleased = timestamp;

    // Set valueCircuitBreakerCriticalElectronicBus.

    valueCircuitBreakerCriticalElectronicBus = ((raw[1] & 0x04) != 0) ? true : false;

    timeCircuitBreakerCriticalElectronicBus = timestamp;

    // Set valueCircuitBreakerEquipamentContainer.

    valueCircuitBreakerEquipamentContainer = ((raw[1] & 0x08) != 0) ? true : false;

    timeCircuitBreakerEquipamentContainer = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAPowerStatus(const unsigned long rca)
{
    rcaMonitorPowerStatus = rca;
}

///This getPowerStatusProxy enusures we call the virtual getPowerStatus
/// and not the MountVertexLLamaBase::getPowerStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getPowerStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getPowerStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: POWER_STATUS
/// Power status

/// MonitorPoint: MAIN_SW_POS_ANTENNABASE_PS
/// MAIN_SW_POS_ANTENNABASE_PS

/**
 * Get the current value of MAIN_SW_POS_ANTENNABASE_PS from the device.
 */

bool MountVertexLLamaBase::getMainSwPosAntennabasePs(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeMainSwPosAntennabasePs);

    timestamp = timeMainSwPosAntennabasePs;
    return valueMainSwPosAntennabasePs;
}

/// MonitorPoint: MAIN_CIRCUIT_BREAKER
/// MAIN_CIRCUIT_BREAKER

/**
 * Get the current value of MAIN_CIRCUIT_BREAKER from the device.
 */

bool MountVertexLLamaBase::getMainCircuitBreaker(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeMainCircuitBreaker);

    timestamp = timeMainCircuitBreaker;
    return valueMainCircuitBreaker;
}

/// MonitorPoint: LIGHTNING_ARRESTOR_TRIPPED
/// LIGHTNING_ARRESTOR_TRIPPED

/**
 * Get the current value of LIGHTNING_ARRESTOR_TRIPPED from the device.
 */

bool MountVertexLLamaBase::getLightningArrestorTripped(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeLightningArrestorTripped);

    timestamp = timeLightningArrestorTripped;
    return valueLightningArrestorTripped;
}

/// MonitorPoint: SINGLE_PHASE_INTERLOCK
/// SINGLE_PHASE_INTERLOCK

/**
 * Get the current value of SINGLE_PHASE_INTERLOCK from the device.
 */

bool MountVertexLLamaBase::getSinglePhaseInterlock(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeSinglePhaseInterlock);

    timestamp = timeSinglePhaseInterlock;
    return valueSinglePhaseInterlock;
}

/// MonitorPoint: REVERSE_PHASE_PROTECTION_RELEASED
/// REVERSE_PHASE_PROTECTION_RELEASED

/**
 * Get the current value of REVERSE_PHASE_PROTECTION_RELEASED from the device.
 */

bool MountVertexLLamaBase::getReversePhaseProtectionReleased(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeReversePhaseProtectionReleased);

    timestamp = timeReversePhaseProtectionReleased;
    return valueReversePhaseProtectionReleased;
}

/// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS
/// CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS

/**
 * Get the current value of CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS from the device.
 */

bool MountVertexLLamaBase::getCircuitBreakerCriticalElectronicBus(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeCircuitBreakerCriticalElectronicBus);

    timestamp = timeCircuitBreakerCriticalElectronicBus;
    return valueCircuitBreakerCriticalElectronicBus;
}

/// MonitorPoint: CIRCUIT_BREAKER_EQUIPAMENT_CONTAINER
/// Circuit breaker equipament container

/**
 * Get the current value of CIRCUIT_BREAKER_EQUIPAMENT_CONTAINER from the device.
 */

bool MountVertexLLamaBase::getCircuitBreakerEquipamentContainer(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cachePowerStatus->getVal(timeCircuitBreakerEquipamentContainer);

    timestamp = timeCircuitBreakerEquipamentContainer;
    return valueCircuitBreakerEquipamentContainer;
}

/// MonitorPoint: UPS2_ALARMS
/// UPS2 Alarm status of UPS system. Conditions may be fault 
    /// conditions or status information. Fault conditions require 
    /// the use of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_ALARMS(ACS::Time& timestamp)
{
    std::vector< unsigned char > ret;
    try
    {
        ret = getUps2Alarms(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< unsigned char >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_ALARMS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2Alarms() const
{
    return rcaMonitorUps2Alarms;
}

/// MonitorPoint: UPS2_ALARMS

/**
 * Get the current value of UPS2_ALARMS from the device.
 */

std::vector< unsigned char > MountVertexLLamaBase::getUps2Alarms(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2Alarms + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< unsigned char > raw(4U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< unsigned char > ret(raw.size());
    ret = raw;

    // Set valueUps2AlarmsMainFailure.

    valueUps2AlarmsMainFailure = ((raw[0] & 0x01) != 0) ? true : false;

    timeUps2AlarmsMainFailure = timestamp;

    // Set valueUps2AlarmsRectifierFailure.

    valueUps2AlarmsRectifierFailure = ((raw[0] & 0x02) != 0) ? true : false;

    timeUps2AlarmsRectifierFailure = timestamp;

    // Set valueUps2AlarmsRectifierFuseBlown.

    valueUps2AlarmsRectifierFuseBlown = ((raw[0] & 0x04) != 0) ? true : false;

    timeUps2AlarmsRectifierFuseBlown = timestamp;

    // Set valueUps2AlarmsThermalImage.

    valueUps2AlarmsThermalImage = ((raw[0] & 0x08) != 0) ? true : false;

    timeUps2AlarmsThermalImage = timestamp;

    // Set valueUps2AlarmsRectifierOutputVoltage.

    valueUps2AlarmsRectifierOutputVoltage = ((raw[0] & 0x10) != 0) ? true : false;

    timeUps2AlarmsRectifierOutputVoltage = timestamp;

    // Set valueUps2AlarmsUpsPhaseSequence.

    valueUps2AlarmsUpsPhaseSequence = ((raw[0] & 0x20) != 0) ? true : false;

    timeUps2AlarmsUpsPhaseSequence = timestamp;

    // Set valueUps2AlarmsBatterySwitchOpen.

    valueUps2AlarmsBatterySwitchOpen = ((raw[0] & 0x40) != 0) ? true : false;

    timeUps2AlarmsBatterySwitchOpen = timestamp;

    // Set valueUps2AlarmsBatteryDischarged.

    valueUps2AlarmsBatteryDischarged = ((raw[0] & 0x80) != 0) ? true : false;

    timeUps2AlarmsBatteryDischarged = timestamp;

    // Set valueUps2AlarmsBatteryCapacity.

    valueUps2AlarmsBatteryCapacity = ((raw[1] & 0x01) != 0) ? true : false;

    timeUps2AlarmsBatteryCapacity = timestamp;

    // Set valueUps2AlarmsBatteryFault.

    valueUps2AlarmsBatteryFault = ((raw[1] & 0x02) != 0) ? true : false;

    timeUps2AlarmsBatteryFault = timestamp;

    // Set valueUps2AlarmsBatteryTest.

    valueUps2AlarmsBatteryTest = ((raw[1] & 0x04) != 0) ? true : false;

    timeUps2AlarmsBatteryTest = timestamp;

    // Set valueUps2AlarmsPllFault.

    valueUps2AlarmsPllFault = ((raw[1] & 0x08) != 0) ? true : false;

    timeUps2AlarmsPllFault = timestamp;

    // Set valueUps2AlarmsInverterVoltage.

    valueUps2AlarmsInverterVoltage = ((raw[1] & 0x10) != 0) ? true : false;

    timeUps2AlarmsInverterVoltage = timestamp;

    // Set valueUps2AlarmsOverload.

    valueUps2AlarmsOverload = ((raw[1] & 0x20) != 0) ? true : false;

    timeUps2AlarmsOverload = timestamp;

    // Set valueUps2AlarmsEmergencyBypassInactive.

    valueUps2AlarmsEmergencyBypassInactive = ((raw[1] & 0x40) != 0) ? true : false;

    timeUps2AlarmsEmergencyBypassInactive = timestamp;

    // Set valueUps2AlarmsLoadSupply.

    valueUps2AlarmsLoadSupply = ((raw[1] & 0x80) != 0) ? true : false;

    timeUps2AlarmsLoadSupply = timestamp;

    // Set valueUps2AlarmsRetransferBlocked.

    valueUps2AlarmsRetransferBlocked = ((raw[2] & 0x01) != 0) ? true : false;

    timeUps2AlarmsRetransferBlocked = timestamp;

    // Set valueUps2AlarmsManualBypassSwitch.

    valueUps2AlarmsManualBypassSwitch = ((raw[2] & 0x02) != 0) ? true : false;

    timeUps2AlarmsManualBypassSwitch = timestamp;

    // Set valueUps2AlarmsOutputCircuitBreaker.

    valueUps2AlarmsOutputCircuitBreaker = ((raw[2] & 0x04) != 0) ? true : false;

    timeUps2AlarmsOutputCircuitBreaker = timestamp;

    // Set valueUps2AlarmsOption.

    valueUps2AlarmsOption = ((raw[2] & 0x08) != 0) ? true : false;

    timeUps2AlarmsOption = timestamp;

    // Set valueUps2AlarmsHighTemperature.

    valueUps2AlarmsHighTemperature = ((raw[2] & 0x10) != 0) ? true : false;

    timeUps2AlarmsHighTemperature = timestamp;

    // Set valueUps2AlarmsBypassSwitchPosition.

    valueUps2AlarmsBypassSwitchPosition = ((raw[2] & 0x20) != 0) ? true : false;

    timeUps2AlarmsBypassSwitchPosition = timestamp;

    // Set valueUps2AlarmsPowerOff.

    valueUps2AlarmsPowerOff = ((raw[2] & 0x40) != 0) ? true : false;

    timeUps2AlarmsPowerOff = timestamp;

    // Set valueUps2AlarmsInverterBridgeBlocked.

    valueUps2AlarmsInverterBridgeBlocked = ((raw[2] & 0x80) != 0) ? true : false;

    timeUps2AlarmsInverterBridgeBlocked = timestamp;

    // Set valueUps2AlarmsShortCircuit.

    valueUps2AlarmsShortCircuit = ((raw[3] & 0x01) != 0) ? true : false;

    timeUps2AlarmsShortCircuit = timestamp;

    // Set valueUps2AlarmsCommError.

    valueUps2AlarmsCommError = ((raw[3] & 0x80) != 0) ? true : false;

    timeUps2AlarmsCommError = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2Alarms(const unsigned long rca)
{
    rcaMonitorUps2Alarms = rca;
}

///This getUps2AlarmsProxy enusures we call the virtual getUps2Alarms
/// and not the MountVertexLLamaBase::getUps2Alarms as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< unsigned char > MountVertexLLamaBase::getUps2AlarmsProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2Alarms(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_ALARMS
/// UPS2 Alarm status of UPS system. Conditions may be fault 
/// conditions or status information. Fault conditions require 
/// the use of the CLEAR_FAULT_CMD to clear, while status information 
/// will clear when the hardware condition is cleared.

/**
 * Get the current value of UPS2_ALARMS as a BACI property.
 */

ACS::ROpattern_ptr MountVertexLLamaBase::UPS2_ALARMS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROpattern_var prop(
        ACS::ROpattern::_narrow(sppUps2Alarms->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_ALARMS_MAIN_FAILURE
/// UPS2 Main failure (status)

/**
 * Get the current value of UPS2_ALARMS_MAIN_FAILURE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsMainFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsMainFailure);

    timestamp = timeUps2AlarmsMainFailure;
    return valueUps2AlarmsMainFailure;
}

/// MonitorPoint: UPS2_ALARMS_RECTIFIER_FAILURE
/// UPS2 Rectifier failure (status)

/**
 * Get the current value of UPS2_ALARMS_RECTIFIER_FAILURE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsRectifierFailure(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsRectifierFailure);

    timestamp = timeUps2AlarmsRectifierFailure;
    return valueUps2AlarmsRectifierFailure;
}

/// MonitorPoint: UPS2_ALARMS_RECTIFIER_FUSE_BLOWN
/// UPS2 Rectifier fuse blown (status)

/**
 * Get the current value of UPS2_ALARMS_RECTIFIER_FUSE_BLOWN from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsRectifierFuseBlown(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsRectifierFuseBlown);

    timestamp = timeUps2AlarmsRectifierFuseBlown;
    return valueUps2AlarmsRectifierFuseBlown;
}

/// MonitorPoint: UPS2_ALARMS_THERMAL_IMAGE
/// UPS2 Thermal image (status)

/**
 * Get the current value of UPS2_ALARMS_THERMAL_IMAGE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsThermalImage(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsThermalImage);

    timestamp = timeUps2AlarmsThermalImage;
    return valueUps2AlarmsThermalImage;
}

/// MonitorPoint: UPS2_ALARMS_RECTIFIER_OUTPUT_VOLTAGE
/// UPS2 Rectifier output voltage out of tolerance (status)

/**
 * Get the current value of UPS2_ALARMS_RECTIFIER_OUTPUT_VOLTAGE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsRectifierOutputVoltage(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsRectifierOutputVoltage);

    timestamp = timeUps2AlarmsRectifierOutputVoltage;
    return valueUps2AlarmsRectifierOutputVoltage;
}

/// MonitorPoint: UPS2_ALARMS_UPS_PHASE_SEQUENCE
/// UPS2 phase sequence not correct (status)

/**
 * Get the current value of UPS2_ALARMS_UPS_PHASE_SEQUENCE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsUpsPhaseSequence(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsUpsPhaseSequence);

    timestamp = timeUps2AlarmsUpsPhaseSequence;
    return valueUps2AlarmsUpsPhaseSequence;
}

/// MonitorPoint: UPS2_ALARMS_BATTERY_SWITCH_OPEN
/// UPS2 Battery switch open (status)

/**
 * Get the current value of UPS2_ALARMS_BATTERY_SWITCH_OPEN from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsBatterySwitchOpen(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsBatterySwitchOpen);

    timestamp = timeUps2AlarmsBatterySwitchOpen;
    return valueUps2AlarmsBatterySwitchOpen;
}

/// MonitorPoint: UPS2_ALARMS_BATTERY_DISCHARGED
/// UPS2 Battery is already discharged (status)

/**
 * Get the current value of UPS2_ALARMS_BATTERY_DISCHARGED from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsBatteryDischarged(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsBatteryDischarged);

    timestamp = timeUps2AlarmsBatteryDischarged;
    return valueUps2AlarmsBatteryDischarged;
}

/// MonitorPoint: UPS2_ALARMS_BATTERY_CAPACITY
/// UPS2 Battery capacity close to zero (status)

/**
 * Get the current value of UPS2_ALARMS_BATTERY_CAPACITY from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsBatteryCapacity(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsBatteryCapacity);

    timestamp = timeUps2AlarmsBatteryCapacity;
    return valueUps2AlarmsBatteryCapacity;
}

/// MonitorPoint: UPS2_ALARMS_BATTERY_FAULT
/// UPS2 Battery fault (fault condition)

/**
 * Get the current value of UPS2_ALARMS_BATTERY_FAULT from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsBatteryFault(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsBatteryFault);

    timestamp = timeUps2AlarmsBatteryFault;
    return valueUps2AlarmsBatteryFault;
}

/// MonitorPoint: UPS2_ALARMS_BATTERY_TEST
/// UPS2 Performing battery test (status)

/**
 * Get the current value of UPS2_ALARMS_BATTERY_TEST from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsBatteryTest(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsBatteryTest);

    timestamp = timeUps2AlarmsBatteryTest;
    return valueUps2AlarmsBatteryTest;
}

/// MonitorPoint: UPS2_ALARMS_PLL_FAULT
/// UPS2 PLL fault (status)

/**
 * Get the current value of UPS2_ALARMS_PLL_FAULT from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsPllFault(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsPllFault);

    timestamp = timeUps2AlarmsPllFault;
    return valueUps2AlarmsPllFault;
}

/// MonitorPoint: UPS2_ALARMS_INVERTER_VOLTAGE
/// UPS2 Inverter voltage out of tolerance (status)

/**
 * Get the current value of UPS2_ALARMS_INVERTER_VOLTAGE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsInverterVoltage(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsInverterVoltage);

    timestamp = timeUps2AlarmsInverterVoltage;
    return valueUps2AlarmsInverterVoltage;
}

/// MonitorPoint: UPS2_ALARMS_OVERLOAD
/// UPS 2 Overload (status)

/**
 * Get the current value of UPS2_ALARMS_OVERLOAD from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsOverload(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsOverload);

    timestamp = timeUps2AlarmsOverload;
    return valueUps2AlarmsOverload;
}

/// MonitorPoint: UPS2_ALARMS_EMERGENCY_BYPASS_INACTIVE
/// UPS 2 Emergency bypass (mains) is not active (status)

/**
 * Get the current value of UPS2_ALARMS_EMERGENCY_BYPASS_INACTIVE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsEmergencyBypassInactive(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsEmergencyBypassInactive);

    timestamp = timeUps2AlarmsEmergencyBypassInactive;
    return valueUps2AlarmsEmergencyBypassInactive;
}

/// MonitorPoint: UPS2_ALARMS_LOAD_SUPPLY
/// UPS 2 Load supplyed by bypass (status)

/**
 * Get the current value of UPS2_ALARMS_LOAD_SUPPLY from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsLoadSupply(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsLoadSupply);

    timestamp = timeUps2AlarmsLoadSupply;
    return valueUps2AlarmsLoadSupply;
}

/// MonitorPoint: UPS2_ALARMS_RETRANSFER_BLOCKED
/// UPS 2 Retransfer between bypass and inverter is blocked 
    /// (fault condition)

/**
 * Get the current value of UPS2_ALARMS_RETRANSFER_BLOCKED from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsRetransferBlocked(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsRetransferBlocked);

    timestamp = timeUps2AlarmsRetransferBlocked;
    return valueUps2AlarmsRetransferBlocked;
}

/// MonitorPoint: UPS2_ALARMS_MANUAL_BYPASS_SWITCH
/// UPS 2 Manual bypass switch is closed (status)

/**
 * Get the current value of UPS2_ALARMS_MANUAL_BYPASS_SWITCH from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsManualBypassSwitch(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsManualBypassSwitch);

    timestamp = timeUps2AlarmsManualBypassSwitch;
    return valueUps2AlarmsManualBypassSwitch;
}

/// MonitorPoint: UPS2_ALARMS_OUTPUT_CIRCUIT_BREAKER
/// UPS 2 Output circuit breaker braker is open (status)

/**
 * Get the current value of UPS2_ALARMS_OUTPUT_CIRCUIT_BREAKER from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsOutputCircuitBreaker(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsOutputCircuitBreaker);

    timestamp = timeUps2AlarmsOutputCircuitBreaker;
    return valueUps2AlarmsOutputCircuitBreaker;
}

/// MonitorPoint: UPS2_ALARMS_OPTION
/// UPS 2 Option (status)

/**
 * Get the current value of UPS2_ALARMS_OPTION from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsOption(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsOption);

    timestamp = timeUps2AlarmsOption;
    return valueUps2AlarmsOption;
}

/// MonitorPoint: UPS2_ALARMS_HIGH_TEMPERATURE
/// UPS 2 High temperature (status)

/**
 * Get the current value of UPS2_ALARMS_HIGH_TEMPERATURE from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsHighTemperature(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsHighTemperature);

    timestamp = timeUps2AlarmsHighTemperature;
    return valueUps2AlarmsHighTemperature;
}

/// MonitorPoint: UPS2_ALARMS_BYPASS_SWITCH_POSITION
/// UPS 2 Bypass switch is in position bypass (status)

/**
 * Get the current value of UPS2_ALARMS_BYPASS_SWITCH_POSITION from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsBypassSwitchPosition(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsBypassSwitchPosition);

    timestamp = timeUps2AlarmsBypassSwitchPosition;
    return valueUps2AlarmsBypassSwitchPosition;
}

/// MonitorPoint: UPS2_ALARMS_POWER_OFF
/// UPS 2 Electronic power off (status)

/**
 * Get the current value of UPS2_ALARMS_POWER_OFF from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsPowerOff(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsPowerOff);

    timestamp = timeUps2AlarmsPowerOff;
    return valueUps2AlarmsPowerOff;
}

/// MonitorPoint: UPS2_ALARMS_INVERTER_BRIDGE_BLOCKED
/// UPS 2 Inverter bridge is blocked due to current (exceeding 
    /// limits) (fauly condition)

/**
 * Get the current value of UPS2_ALARMS_INVERTER_BRIDGE_BLOCKED from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsInverterBridgeBlocked(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsInverterBridgeBlocked);

    timestamp = timeUps2AlarmsInverterBridgeBlocked;
    return valueUps2AlarmsInverterBridgeBlocked;
}

/// MonitorPoint: UPS2_ALARMS_SHORT_CIRCUIT
/// UPS 2 Short circuit (status)

/**
 * Get the current value of UPS2_ALARMS_SHORT_CIRCUIT from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsShortCircuit(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsShortCircuit);

    timestamp = timeUps2AlarmsShortCircuit;
    return valueUps2AlarmsShortCircuit;
}

/// MonitorPoint: UPS2_ALARMS_COMM_ERROR
/// UPS 2 Communication error ACU-UPS (fault condition)

/**
 * Get the current value of UPS2_ALARMS_COMM_ERROR from the device.
 */

bool MountVertexLLamaBase::getUps2AlarmsCommError(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Alarms->getVal(timeUps2AlarmsCommError);

    timestamp = timeUps2AlarmsCommError;
    return valueUps2AlarmsCommError;
}

/// MonitorPoint: UPS2_BATTERY_OUTPUT
/// UPS 2 Battery voltage and current

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_BATTERY_OUTPUT(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2BatteryOutput(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_BATTERY_OUTPUT.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2BatteryOutput() const
{
    return rcaMonitorUps2BatteryOutput;
}

/// MonitorPoint: UPS2_BATTERY_OUTPUT

/**
 * Get the current value of UPS2_BATTERY_OUTPUT from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2BatteryOutput(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2BatteryOutput + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< short > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2BatteryVoltage = static_cast< short >(
        raw[0]);

    timeUps2BatteryVoltage = timestamp;

    valueUps2BatteryCurrent = static_cast< short >(
        raw[1]);

    timeUps2BatteryCurrent = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2BatteryOutput(const unsigned long rca)
{
    rcaMonitorUps2BatteryOutput = rca;
}

///This getUps2BatteryOutputProxy enusures we call the virtual getUps2BatteryOutput
/// and not the MountVertexLLamaBase::getUps2BatteryOutput as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2BatteryOutputProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BatteryOutput(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BATTERY_OUTPUT
/// UPS 2 Battery voltage and current

/**
 * Get the current value of UPS2_BATTERY_OUTPUT as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_BATTERY_OUTPUT()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2BatteryOutput->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_BATTERY_VOLTAGE
/// UPS 2 Battery voltage

/**
 * Get the current value of UPS2_BATTERY_VOLTAGE from the device.
 */

short MountVertexLLamaBase::getUps2BatteryVoltage(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BatteryOutput->getVal(timeUps2BatteryVoltage);

    timestamp = timeUps2BatteryVoltage;
    return valueUps2BatteryVoltage;
}

///This getUps2BatteryVoltageProxy enusures we call the virtual getUps2BatteryVoltage
/// and not the MountVertexLLamaBase::getUps2BatteryVoltage as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2BatteryVoltageProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BatteryVoltage(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BATTERY_CURRENT
/// UPS 2 Battery current

/**
 * Get the current value of UPS2_BATTERY_CURRENT from the device.
 */

short MountVertexLLamaBase::getUps2BatteryCurrent(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BatteryOutput->getVal(timeUps2BatteryCurrent);

    timestamp = timeUps2BatteryCurrent;
    return valueUps2BatteryCurrent;
}

///This getUps2BatteryCurrentProxy enusures we call the virtual getUps2BatteryCurrent
/// and not the MountVertexLLamaBase::getUps2BatteryCurrent as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2BatteryCurrentProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BatteryCurrent(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BATTERY_STATUS
/// UPS 2 Nominal battery autonomy

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_BATTERY_STATUS(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2BatteryStatus(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_BATTERY_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2BatteryStatus() const
{
    return rcaMonitorUps2BatteryStatus;
}

/// MonitorPoint: UPS2_BATTERY_STATUS

/**
 * Get the current value of UPS2_BATTERY_STATUS from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2BatteryStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2BatteryStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< short > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2NominalBatteryAutomomyMinutes = static_cast< short >(
        raw[0]);

    timeUps2NominalBatteryAutomomyMinutes = timestamp;

    valueUps2NominalBatteryAutonomyPercentage = static_cast< short >(
        raw[1]);

    timeUps2NominalBatteryAutonomyPercentage = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2BatteryStatus(const unsigned long rca)
{
    rcaMonitorUps2BatteryStatus = rca;
}

///This getUps2BatteryStatusProxy enusures we call the virtual getUps2BatteryStatus
/// and not the MountVertexLLamaBase::getUps2BatteryStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2BatteryStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BatteryStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BATTERY_STATUS
/// UPS 2 Nominal battery autonomy

/**
 * Get the current value of UPS2_BATTERY_STATUS as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_BATTERY_STATUS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2BatteryStatus->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_NOMINAL_BATTERY_AUTOMOMY_MINUTES
/// UPS 2 Battery autonomy in minutes

/**
 * Get the current value of UPS2_NOMINAL_BATTERY_AUTOMOMY_MINUTES from the device.
 */

short MountVertexLLamaBase::getUps2NominalBatteryAutomomyMinutes(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BatteryStatus->getVal(timeUps2NominalBatteryAutomomyMinutes);

    timestamp = timeUps2NominalBatteryAutomomyMinutes;
    return valueUps2NominalBatteryAutomomyMinutes;
}

///This getUps2NominalBatteryAutomomyMinutesProxy enusures we call the virtual getUps2NominalBatteryAutomomyMinutes
/// and not the MountVertexLLamaBase::getUps2NominalBatteryAutomomyMinutes as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2NominalBatteryAutomomyMinutesProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2NominalBatteryAutomomyMinutes(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_NOMINAL_BATTERY_AUTONOMY_PERCENTAGE
/// UPS 2 Battery Autonomy in percentage

/**
 * Get the current value of UPS2_NOMINAL_BATTERY_AUTONOMY_PERCENTAGE from the device.
 */

short MountVertexLLamaBase::getUps2NominalBatteryAutonomyPercentage(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BatteryStatus->getVal(timeUps2NominalBatteryAutonomyPercentage);

    timestamp = timeUps2NominalBatteryAutonomyPercentage;
    return valueUps2NominalBatteryAutonomyPercentage;
}

///This getUps2NominalBatteryAutonomyPercentageProxy enusures we call the virtual getUps2NominalBatteryAutonomyPercentage
/// and not the MountVertexLLamaBase::getUps2NominalBatteryAutonomyPercentage as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2NominalBatteryAutonomyPercentageProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2NominalBatteryAutonomyPercentage(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BYPASS_VOLTS
/// UPS 2 Bypass voltages by phase

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_BYPASS_VOLTS(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2BypassVolts(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_BYPASS_VOLTS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2BypassVolts() const
{
    return rcaMonitorUps2BypassVolts;
}

/// MonitorPoint: UPS2_BYPASS_VOLTS

/**
 * Get the current value of UPS2_BYPASS_VOLTS from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2BypassVolts(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2BypassVolts + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< short > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2BypassVoltagePhase1 = static_cast< short >(
        raw[0]);

    timeUps2BypassVoltagePhase1 = timestamp;

    valueUps2BypassVoltagePhase2 = static_cast< short >(
        raw[1]);

    timeUps2BypassVoltagePhase2 = timestamp;

    valueUps2BypassVoltagePhase3 = static_cast< short >(
        raw[2]);

    timeUps2BypassVoltagePhase3 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2BypassVolts(const unsigned long rca)
{
    rcaMonitorUps2BypassVolts = rca;
}

///This getUps2BypassVoltsProxy enusures we call the virtual getUps2BypassVolts
/// and not the MountVertexLLamaBase::getUps2BypassVolts as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2BypassVoltsProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BypassVolts(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BYPASS_VOLTS
/// UPS 2 Bypass voltages by phase

/**
 * Get the current value of UPS2_BYPASS_VOLTS as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_BYPASS_VOLTS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2BypassVolts->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_1
/// UPS 2 BYPASS_VOLTAGE_PHASE_1

/**
 * Get the current value of UPS2_BYPASS_VOLTAGE_PHASE_1 from the device.
 */

short MountVertexLLamaBase::getUps2BypassVoltagePhase1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BypassVolts->getVal(timeUps2BypassVoltagePhase1);

    timestamp = timeUps2BypassVoltagePhase1;
    return valueUps2BypassVoltagePhase1;
}

///This getUps2BypassVoltagePhase1Proxy enusures we call the virtual getUps2BypassVoltagePhase1
/// and not the MountVertexLLamaBase::getUps2BypassVoltagePhase1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2BypassVoltagePhase1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BypassVoltagePhase1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_2
/// UPS 2 BYPASS_VOLTAGE_PHASE_2

/**
 * Get the current value of UPS2_BYPASS_VOLTAGE_PHASE_2 from the device.
 */

short MountVertexLLamaBase::getUps2BypassVoltagePhase2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BypassVolts->getVal(timeUps2BypassVoltagePhase2);

    timestamp = timeUps2BypassVoltagePhase2;
    return valueUps2BypassVoltagePhase2;
}

///This getUps2BypassVoltagePhase2Proxy enusures we call the virtual getUps2BypassVoltagePhase2
/// and not the MountVertexLLamaBase::getUps2BypassVoltagePhase2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2BypassVoltagePhase2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BypassVoltagePhase2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_3
/// UPS 2 BYPASS_VOLTAGE_PHASE_3

/**
 * Get the current value of UPS2_BYPASS_VOLTAGE_PHASE_3 from the device.
 */

short MountVertexLLamaBase::getUps2BypassVoltagePhase3(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2BypassVolts->getVal(timeUps2BypassVoltagePhase3);

    timestamp = timeUps2BypassVoltagePhase3;
    return valueUps2BypassVoltagePhase3;
}

///This getUps2BypassVoltagePhase3Proxy enusures we call the virtual getUps2BypassVoltagePhase3
/// and not the MountVertexLLamaBase::getUps2BypassVoltagePhase3 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2BypassVoltagePhase3Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BypassVoltagePhase3(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_FREQS
/// UPS 2 Bypass and inverter frequencies

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_FREQS(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2Freqs(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_FREQS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2Freqs() const
{
    return rcaMonitorUps2Freqs;
}

/// MonitorPoint: UPS2_FREQS

/**
 * Get the current value of UPS2_FREQS from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2Freqs(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2Freqs + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(4U);

    std::vector< AmbDataMem_t > rawBytes(4U);

    std::vector< short > raw(2U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2BypassFrequency = static_cast< short >(
        raw[0]);

    timeUps2BypassFrequency = timestamp;

    valueUps2InverterFrequency = static_cast< short >(
        raw[1]);

    timeUps2InverterFrequency = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2Freqs(const unsigned long rca)
{
    rcaMonitorUps2Freqs = rca;
}

///This getUps2FreqsProxy enusures we call the virtual getUps2Freqs
/// and not the MountVertexLLamaBase::getUps2Freqs as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2FreqsProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2Freqs(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_FREQS
/// UPS 2 Bypass and inverter frequencies

/**
 * Get the current value of UPS2_FREQS as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_FREQS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2Freqs->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_BYPASS_FREQUENCY
/// UPS 2 BYPASS_FREQUENCY

/**
 * Get the current value of UPS2_BYPASS_FREQUENCY from the device.
 */

short MountVertexLLamaBase::getUps2BypassFrequency(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Freqs->getVal(timeUps2BypassFrequency);

    timestamp = timeUps2BypassFrequency;
    return valueUps2BypassFrequency;
}

///This getUps2BypassFrequencyProxy enusures we call the virtual getUps2BypassFrequency
/// and not the MountVertexLLamaBase::getUps2BypassFrequency as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2BypassFrequencyProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2BypassFrequency(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_INVERTER_FREQUENCY
/// UPS 2 INVERTER_FREQUENCY

/**
 * Get the current value of UPS2_INVERTER_FREQUENCY from the device.
 */

short MountVertexLLamaBase::getUps2InverterFrequency(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2Freqs->getVal(timeUps2InverterFrequency);

    timestamp = timeUps2InverterFrequency;
    return valueUps2InverterFrequency;
}

///This getUps2InverterFrequencyProxy enusures we call the virtual getUps2InverterFrequency
/// and not the MountVertexLLamaBase::getUps2InverterFrequency as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2InverterFrequencyProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2InverterFrequency(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS1_INVERTER_SW
/// UPS 1 Inverter switch position

CORBA::Long MountVertexLLamaBase::GET_UPS1_INVERTER_SW(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Long ret(getUps1InverterSw(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/**
 * Get the RCA for monitor point UPS1_INVERTER_SW.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps1InverterSw() const
{
    return rcaMonitorUps1InverterSw;
}

/// MonitorPoint: UPS1_INVERTER_SW

/**
 * Get the current value of UPS1_INVERTER_SW from the device.
 */

unsigned char MountVertexLLamaBase::getUps1InverterSw(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps1InverterSw + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps1InverterSw(const unsigned long rca)
{
    rcaMonitorUps1InverterSw = rca;
}

///This getUps1InverterSwProxy enusures we call the virtual getUps1InverterSw
/// and not the MountVertexLLamaBase::getUps1InverterSw as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getUps1InverterSwProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps1InverterSw(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS1_INVERTER_SW
/// UPS 1 Inverter switch position

/**
 * Get the current value of UPS1_INVERTER_SW as a BACI property.
 */

ACS::ROlong_ptr MountVertexLLamaBase::UPS1_INVERTER_SW()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlong_var prop(
        ACS::ROlong::_narrow(
            sppUps1InverterSw->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_INVERTER_SW
/// UPS 2 Inverter switch position

CORBA::Long MountVertexLLamaBase::GET_UPS2_INVERTER_SW(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Long ret(getUps2InverterSw(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/**
 * Get the RCA for monitor point UPS2_INVERTER_SW.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2InverterSw() const
{
    return rcaMonitorUps2InverterSw;
}

/// MonitorPoint: UPS2_INVERTER_SW

/**
 * Get the current value of UPS2_INVERTER_SW from the device.
 */

unsigned char MountVertexLLamaBase::getUps2InverterSw(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2InverterSw + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2InverterSw(const unsigned long rca)
{
    rcaMonitorUps2InverterSw = rca;
}

///This getUps2InverterSwProxy enusures we call the virtual getUps2InverterSw
/// and not the MountVertexLLamaBase::getUps2InverterSw as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getUps2InverterSwProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2InverterSw(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_INVERTER_SW
/// UPS 2 Inverter switch position

/**
 * Get the current value of UPS2_INVERTER_SW as a BACI property.
 */

ACS::ROlong_ptr MountVertexLLamaBase::UPS2_INVERTER_SW()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlong_var prop(
        ACS::ROlong::_narrow(
            sppUps2InverterSw->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_INVERTER_VOLTS
/// UPS 2 Inverter voltages by phase

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_INVERTER_VOLTS(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2InverterVolts(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_INVERTER_VOLTS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2InverterVolts() const
{
    return rcaMonitorUps2InverterVolts;
}

/// MonitorPoint: UPS2_INVERTER_VOLTS

/**
 * Get the current value of UPS2_INVERTER_VOLTS from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2InverterVolts(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2InverterVolts + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< short > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2InverterVoltagePhase1 = static_cast< short >(
        raw[0]);

    timeUps2InverterVoltagePhase1 = timestamp;

    valueUps2InverterVoltagePhase2 = static_cast< short >(
        raw[1]);

    timeUps2InverterVoltagePhase2 = timestamp;

    valueUps2InverterVoltagePhase3 = static_cast< short >(
        raw[2]);

    timeUps2InverterVoltagePhase3 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2InverterVolts(const unsigned long rca)
{
    rcaMonitorUps2InverterVolts = rca;
}

///This getUps2InverterVoltsProxy enusures we call the virtual getUps2InverterVolts
/// and not the MountVertexLLamaBase::getUps2InverterVolts as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2InverterVoltsProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2InverterVolts(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_INVERTER_VOLTS
/// UPS 2 Inverter voltages by phase

/**
 * Get the current value of UPS2_INVERTER_VOLTS as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_INVERTER_VOLTS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2InverterVolts->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_1
/// UPS 2 INVERTER_VOLTAGE_PHASE_1

/**
 * Get the current value of UPS2_INVERTER_VOLTAGE_PHASE_1 from the device.
 */

short MountVertexLLamaBase::getUps2InverterVoltagePhase1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2InverterVolts->getVal(timeUps2InverterVoltagePhase1);

    timestamp = timeUps2InverterVoltagePhase1;
    return valueUps2InverterVoltagePhase1;
}

///This getUps2InverterVoltagePhase1Proxy enusures we call the virtual getUps2InverterVoltagePhase1
/// and not the MountVertexLLamaBase::getUps2InverterVoltagePhase1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2InverterVoltagePhase1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2InverterVoltagePhase1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_2
/// UPS 2 INVERTER_VOLTAGE_PHASE_2

/**
 * Get the current value of UPS2_INVERTER_VOLTAGE_PHASE_2 from the device.
 */

short MountVertexLLamaBase::getUps2InverterVoltagePhase2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2InverterVolts->getVal(timeUps2InverterVoltagePhase2);

    timestamp = timeUps2InverterVoltagePhase2;
    return valueUps2InverterVoltagePhase2;
}

///This getUps2InverterVoltagePhase2Proxy enusures we call the virtual getUps2InverterVoltagePhase2
/// and not the MountVertexLLamaBase::getUps2InverterVoltagePhase2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2InverterVoltagePhase2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2InverterVoltagePhase2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_3
/// UPS 2 INVERTER_VOLTAGE_PHASE_3

/**
 * Get the current value of UPS2_INVERTER_VOLTAGE_PHASE_3 from the device.
 */

short MountVertexLLamaBase::getUps2InverterVoltagePhase3(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2InverterVolts->getVal(timeUps2InverterVoltagePhase3);

    timestamp = timeUps2InverterVoltagePhase3;
    return valueUps2InverterVoltagePhase3;
}

///This getUps2InverterVoltagePhase3Proxy enusures we call the virtual getUps2InverterVoltagePhase3
/// and not the MountVertexLLamaBase::getUps2InverterVoltagePhase3 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2InverterVoltagePhase3Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2InverterVoltagePhase3(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_CURRENT
/// UPS 2 Output currents by phase

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_OUTPUT_CURRENT(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2OutputCurrent(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_OUTPUT_CURRENT.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2OutputCurrent() const
{
    return rcaMonitorUps2OutputCurrent;
}

/// MonitorPoint: UPS2_OUTPUT_CURRENT

/**
 * Get the current value of UPS2_OUTPUT_CURRENT from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2OutputCurrent(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2OutputCurrent + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< short > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2OutputCurrentPhase1 = static_cast< short >(
        raw[0]);

    timeUps2OutputCurrentPhase1 = timestamp;

    valueUps2OutputCurrentPhase2 = static_cast< short >(
        raw[1]);

    timeUps2OutputCurrentPhase2 = timestamp;

    valueUps2OutputCurrentPhase3 = static_cast< short >(
        raw[2]);

    timeUps2OutputCurrentPhase3 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2OutputCurrent(const unsigned long rca)
{
    rcaMonitorUps2OutputCurrent = rca;
}

///This getUps2OutputCurrentProxy enusures we call the virtual getUps2OutputCurrent
/// and not the MountVertexLLamaBase::getUps2OutputCurrent as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2OutputCurrentProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputCurrent(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_CURRENT
/// UPS 2 Output currents by phase

/**
 * Get the current value of UPS2_OUTPUT_CURRENT as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_OUTPUT_CURRENT()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2OutputCurrent->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE1
/// UPS 2 Output current phase 1

/**
 * Get the current value of UPS2_OUTPUT_CURRENT_PHASE1 from the device.
 */

short MountVertexLLamaBase::getUps2OutputCurrentPhase1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2OutputCurrent->getVal(timeUps2OutputCurrentPhase1);

    timestamp = timeUps2OutputCurrentPhase1;
    return valueUps2OutputCurrentPhase1;
}

///This getUps2OutputCurrentPhase1Proxy enusures we call the virtual getUps2OutputCurrentPhase1
/// and not the MountVertexLLamaBase::getUps2OutputCurrentPhase1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2OutputCurrentPhase1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputCurrentPhase1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE2
/// UPS 2 Output current phase 2

/**
 * Get the current value of UPS2_OUTPUT_CURRENT_PHASE2 from the device.
 */

short MountVertexLLamaBase::getUps2OutputCurrentPhase2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2OutputCurrent->getVal(timeUps2OutputCurrentPhase2);

    timestamp = timeUps2OutputCurrentPhase2;
    return valueUps2OutputCurrentPhase2;
}

///This getUps2OutputCurrentPhase2Proxy enusures we call the virtual getUps2OutputCurrentPhase2
/// and not the MountVertexLLamaBase::getUps2OutputCurrentPhase2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2OutputCurrentPhase2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputCurrentPhase2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE3
/// UPS 2 Output current phase 3

/**
 * Get the current value of UPS2_OUTPUT_CURRENT_PHASE3 from the device.
 */

short MountVertexLLamaBase::getUps2OutputCurrentPhase3(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2OutputCurrent->getVal(timeUps2OutputCurrentPhase3);

    timestamp = timeUps2OutputCurrentPhase3;
    return valueUps2OutputCurrentPhase3;
}

///This getUps2OutputCurrentPhase3Proxy enusures we call the virtual getUps2OutputCurrentPhase3
/// and not the MountVertexLLamaBase::getUps2OutputCurrentPhase3 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2OutputCurrentPhase3Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputCurrentPhase3(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_VOLTS
/// UPS 2 Output voltages by phase

Control::LongSeq*
    MountVertexLLamaBase::GET_UPS2_OUTPUT_VOLTS(ACS::Time& timestamp)
{
    std::vector< short > ret;
    try
    {
        ret = getUps2OutputVolts(timestamp);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

    Control::LongSeq_var x(
        new Control::LongSeq);
    x->length(ret.size());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(ret.begin());
        iter != ret.end(); ++iter, ++i)
    {
        x[i] = static_cast< CORBA::Long >(*iter);
    }

    return x._retn();
}

/**
 * Get the RCA for monitor point UPS2_OUTPUT_VOLTS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUps2OutputVolts() const
{
    return rcaMonitorUps2OutputVolts;
}

/// MonitorPoint: UPS2_OUTPUT_VOLTS

/**
 * Get the current value of UPS2_OUTPUT_VOLTS from the device.
 */

std::vector< short > MountVertexLLamaBase::getUps2OutputVolts(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUps2OutputVolts + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(6U);

    std::vector< AmbDataMem_t > rawBytes(6U);

    std::vector< short > raw(3U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    std::vector< short > ret(raw.size());
    ret = raw;

    valueUps2OutputVoltsPhase1 = static_cast< short >(
        raw[0]);

    timeUps2OutputVoltsPhase1 = timestamp;

    valueUps2OutputVoltsPhase2 = static_cast< short >(
        raw[1]);

    timeUps2OutputVoltsPhase2 = timestamp;

    valueUps2OutputVoltsPhase3 = static_cast< short >(
        raw[2]);

    timeUps2OutputVoltsPhase3 = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUps2OutputVolts(const unsigned long rca)
{
    rcaMonitorUps2OutputVolts = rca;
}

///This getUps2OutputVoltsProxy enusures we call the virtual getUps2OutputVolts
/// and not the MountVertexLLamaBase::getUps2OutputVolts as it used to be.
/// This breaks the monitoring in the FrontEnd.

std::vector< short > MountVertexLLamaBase::getUps2OutputVoltsProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputVolts(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_VOLTS
/// UPS 2 Output voltages by phase

/**
 * Get the current value of UPS2_OUTPUT_VOLTS as a BACI property.
 */

ACS::ROlongSeq_ptr MountVertexLLamaBase::UPS2_OUTPUT_VOLTS()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlongSeq_var prop(
        ACS::ROlongSeq::_narrow(
            sppUps2OutputVolts->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE1
/// UPS 2 Output voltage phase 1

/**
 * Get the current value of UPS2_OUTPUT_VOLTS_PHASE1 from the device.
 */

short MountVertexLLamaBase::getUps2OutputVoltsPhase1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2OutputVolts->getVal(timeUps2OutputVoltsPhase1);

    timestamp = timeUps2OutputVoltsPhase1;
    return valueUps2OutputVoltsPhase1;
}

///This getUps2OutputVoltsPhase1Proxy enusures we call the virtual getUps2OutputVoltsPhase1
/// and not the MountVertexLLamaBase::getUps2OutputVoltsPhase1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2OutputVoltsPhase1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputVoltsPhase1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE2
/// UPS 2 Output voltage phase 2

/**
 * Get the current value of UPS2_OUTPUT_VOLTS_PHASE2 from the device.
 */

short MountVertexLLamaBase::getUps2OutputVoltsPhase2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2OutputVolts->getVal(timeUps2OutputVoltsPhase2);

    timestamp = timeUps2OutputVoltsPhase2;
    return valueUps2OutputVoltsPhase2;
}

///This getUps2OutputVoltsPhase2Proxy enusures we call the virtual getUps2OutputVoltsPhase2
/// and not the MountVertexLLamaBase::getUps2OutputVoltsPhase2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2OutputVoltsPhase2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputVoltsPhase2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE3
/// UPS 2 Output voltage phase 3

/**
 * Get the current value of UPS2_OUTPUT_VOLTS_PHASE3 from the device.
 */

short MountVertexLLamaBase::getUps2OutputVoltsPhase3(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheUps2OutputVolts->getVal(timeUps2OutputVoltsPhase3);

    timestamp = timeUps2OutputVoltsPhase3;
    return valueUps2OutputVoltsPhase3;
}

///This getUps2OutputVoltsPhase3Proxy enusures we call the virtual getUps2OutputVoltsPhase3
/// and not the MountVertexLLamaBase::getUps2OutputVoltsPhase3 as it used to be.
/// This breaks the monitoring in the FrontEnd.

short MountVertexLLamaBase::getUps2OutputVoltsPhase3Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUps2OutputVoltsPhase3(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS_STATUS_1
/// UPS 1 Current status word

CORBA::Long MountVertexLLamaBase::GET_UPS_STATUS_1(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Long ret(getUpsStatus1(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/**
 * Get the RCA for monitor point UPS_STATUS_1.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUpsStatus1() const
{
    return rcaMonitorUpsStatus1;
}

/// MonitorPoint: UPS_STATUS_1

/**
 * Get the current value of UPS_STATUS_1 from the device.
 */

unsigned char MountVertexLLamaBase::getUpsStatus1(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUpsStatus1 + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUpsStatus1(const unsigned long rca)
{
    rcaMonitorUpsStatus1 = rca;
}

///This getUpsStatus1Proxy enusures we call the virtual getUpsStatus1
/// and not the MountVertexLLamaBase::getUpsStatus1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getUpsStatus1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUpsStatus1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS_STATUS_1
/// UPS 1 Current status word

/**
 * Get the current value of UPS_STATUS_1 as a BACI property.
 */

ACS::ROlong_ptr MountVertexLLamaBase::UPS_STATUS_1()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlong_var prop(
        ACS::ROlong::_narrow(
            sppUpsStatus1->getCORBAReference()));

    return prop._retn();
}

/// MonitorPoint: UPS_STATUS_2
/// UPS 2 Current status word

CORBA::Long MountVertexLLamaBase::GET_UPS_STATUS_2(
    ACS::Time& timestamp)

{
    try
    {

        CORBA::Long ret(getUpsStatus2(timestamp));
        return ret;

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }
}

/**
 * Get the RCA for monitor point UPS_STATUS_2.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAUpsStatus2() const
{
    return rcaMonitorUpsStatus2;
}

/// MonitorPoint: UPS_STATUS_2

/**
 * Get the current value of UPS_STATUS_2 from the device.
 */

unsigned char MountVertexLLamaBase::getUpsStatus2(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorUpsStatus2 + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAUpsStatus2(const unsigned long rca)
{
    rcaMonitorUpsStatus2 = rca;
}

///This getUpsStatus2Proxy enusures we call the virtual getUpsStatus2
/// and not the MountVertexLLamaBase::getUpsStatus2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getUpsStatus2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getUpsStatus2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: UPS_STATUS_2
/// UPS 2 Current status word

/**
 * Get the current value of UPS_STATUS_2 as a BACI property.
 */

ACS::ROlong_ptr MountVertexLLamaBase::UPS_STATUS_2()

{
    AUTO_TRACE(__PRETTY_FUNCTION__);

    ACS::ROlong_var prop(
        ACS::ROlong::_narrow(
            sppUpsStatus2->getCORBAReference()));

    return prop._retn();
}

/**
 * Get the RCA for monitor point AC_STATUS.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAAcStatus() const
{
    return rcaMonitorAcStatus;
}

/// MonitorPoint: AC_STATUS
/// Air conditioning system status

/**
 * Get the current value of AC_STATUS from the device.
 */

unsigned char MountVertexLLamaBase::getAcStatus(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorAcStatus + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    // Set valueAirConditioningSystem1.

    valueAirConditioningSystem1 = ((raw & 0x01) != 0) ? true : false;

    timeAirConditioningSystem1 = timestamp;

    // Set valueAirConditioningSystem2.

    valueAirConditioningSystem2 = ((raw & 0x02) != 0) ? true : false;

    timeAirConditioningSystem2 = timestamp;

    // Set valueAirConditioningSystemAutomatic.

    valueAirConditioningSystemAutomatic = ((raw & 0x04) != 0) ? true : false;

    timeAirConditioningSystemAutomatic = timestamp;

    // Set valueAirConditioningSystemInLocal.

    valueAirConditioningSystemInLocal = ((raw & 0x08) != 0) ? true : false;

    timeAirConditioningSystemInLocal = timestamp;

    // Set valueAirConditioningSystem1Alarm.

    valueAirConditioningSystem1Alarm = ((raw & 0x10) != 0) ? true : false;

    timeAirConditioningSystem1Alarm = timestamp;

    // Set valueAirConditioningSystem2Alarm.

    valueAirConditioningSystem2Alarm = ((raw & 0x20) != 0) ? true : false;

    timeAirConditioningSystem2Alarm = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAAcStatus(const unsigned long rca)
{
    rcaMonitorAcStatus = rca;
}

///This getAcStatusProxy enusures we call the virtual getAcStatus
/// and not the MountVertexLLamaBase::getAcStatus as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getAcStatusProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getAcStatus(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: AC_STATUS
/// Air conditioning system status

/// MonitorPoint: AIR_CONDITIONING_SYSTEM_1
/// Air conditioning state system 1

/**
 * Get the current value of AIR_CONDITIONING_SYSTEM_1 from the device.
 */

bool MountVertexLLamaBase::getAirConditioningSystem1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAcStatus->getVal(timeAirConditioningSystem1);

    timestamp = timeAirConditioningSystem1;
    return valueAirConditioningSystem1;
}

/// MonitorPoint: AIR_CONDITIONING_SYSTEM_2
/// Air conditioning state system 2

/**
 * Get the current value of AIR_CONDITIONING_SYSTEM_2 from the device.
 */

bool MountVertexLLamaBase::getAirConditioningSystem2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAcStatus->getVal(timeAirConditioningSystem2);

    timestamp = timeAirConditioningSystem2;
    return valueAirConditioningSystem2;
}

/// MonitorPoint: AIR_CONDITIONING_SYSTEM_AUTOMATIC
/// Air conditioning automatic mode

/**
 * Get the current value of AIR_CONDITIONING_SYSTEM_AUTOMATIC from the device.
 */

bool MountVertexLLamaBase::getAirConditioningSystemAutomatic(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAcStatus->getVal(timeAirConditioningSystemAutomatic);

    timestamp = timeAirConditioningSystemAutomatic;
    return valueAirConditioningSystemAutomatic;
}

/// MonitorPoint: AIR_CONDITIONING_SYSTEM_IN_LOCAL
/// Air conditioning in local

/**
 * Get the current value of AIR_CONDITIONING_SYSTEM_IN_LOCAL from the device.
 */

bool MountVertexLLamaBase::getAirConditioningSystemInLocal(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAcStatus->getVal(timeAirConditioningSystemInLocal);

    timestamp = timeAirConditioningSystemInLocal;
    return valueAirConditioningSystemInLocal;
}

/// MonitorPoint: AIR_CONDITIONING_SYSTEM_1_ALARM
/// Air conditioning state system 1 alarm

/**
 * Get the current value of AIR_CONDITIONING_SYSTEM_1_ALARM from the device.
 */

bool MountVertexLLamaBase::getAirConditioningSystem1Alarm(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAcStatus->getVal(timeAirConditioningSystem1Alarm);

    timestamp = timeAirConditioningSystem1Alarm;
    return valueAirConditioningSystem1Alarm;
}

/// MonitorPoint: AIR_CONDITIONING_SYSTEM_2_ALARM
/// Air conditioning state system 2 alarm

/**
 * Get the current value of AIR_CONDITIONING_SYSTEM_2_ALARM from the device.
 */

bool MountVertexLLamaBase::getAirConditioningSystem2Alarm(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheAcStatus->getVal(timeAirConditioningSystem2Alarm);

    timestamp = timeAirConditioningSystem2Alarm;
    return valueAirConditioningSystem2Alarm;
}

/**
 * Get the RCA for monitor point SHUTTER.
 */
inline unsigned long MountVertexLLamaBase::getMonitorRCAShutter() const
{
    return rcaMonitorShutter;
}

/// MonitorPoint: SHUTTER
/// Shutter mechanism status.

/**
 * Get the current value of SHUTTER from the device.
 */

unsigned char MountVertexLLamaBase::getShutter(
    ACS::Time& timestamp)

{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaMonitorShutter + AmbDeviceImpl::getBaseAddress());

    AmbDataLength_t length(1U);

    std::vector< AmbDataMem_t > rawBytes(1U);

    unsigned char raw(0U);

    try
    {

        monitorEnc(&timestamp, rca, length, &(rawBytes[0]));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }

    // Assign the rawBytes to the proper raw data.
    AMB::TypeConversion::dataToValue(rawBytes, raw);

    unsigned char ret(raw);

    // Set valueShutterOpenPosition.

    valueShutterOpenPosition = ((raw & 0x01) != 0) ? true : false;

    timeShutterOpenPosition = timestamp;

    // Set valueShutterClosePosition.

    valueShutterClosePosition = ((raw & 0x02) != 0) ? true : false;

    timeShutterClosePosition = timestamp;

    // Set valueShutterMotorOn.

    valueShutterMotorOn = ((raw & 0x04) != 0) ? true : false;

    timeShutterMotorOn = timestamp;

    // Set valueShutterLocalSystemError.

    valueShutterLocalSystemError = ((raw & 0x08) != 0) ? true : false;

    timeShutterLocalSystemError = timestamp;

    // Set valueShutterMotionTimeout.

    valueShutterMotionTimeout = ((raw & 0x10) != 0) ? true : false;

    timeShutterMotionTimeout = timestamp;

    // Set valueShutterHandcrankInserted.

    valueShutterHandcrankInserted = ((raw & 0x20) != 0) ? true : false;

    timeShutterHandcrankInserted = timestamp;

    return ret;
}

/**
 * Set the RCA for this monitor point.
 */
inline void MountVertexLLamaBase::setMonitorRCAShutter(const unsigned long rca)
{
    rcaMonitorShutter = rca;
}

///This getShutterProxy enusures we call the virtual getShutter
/// and not the MountVertexLLamaBase::getShutter as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getShutterProxy(
    ACS::Time& timestamp)

{
    try
    {
        return getShutter(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SHUTTER
/// Shutter mechanism status.

/// MonitorPoint: SHUTTER_OPEN_POSITION
/// Shutter open position (set=open)

/**
 * Get the current value of SHUTTER_OPEN_POSITION from the device.
 */

bool MountVertexLLamaBase::getShutterOpenPosition(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheShutter->getVal(timeShutterOpenPosition);

    timestamp = timeShutterOpenPosition;
    return valueShutterOpenPosition;
}

/// MonitorPoint: SHUTTER_CLOSE_POSITION
/// Shutter close position (set=closed)

/**
 * Get the current value of SHUTTER_CLOSE_POSITION from the device.
 */

bool MountVertexLLamaBase::getShutterClosePosition(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheShutter->getVal(timeShutterClosePosition);

    timestamp = timeShutterClosePosition;
    return valueShutterClosePosition;
}

/// MonitorPoint: SHUTTER_MOTOR_ON
/// Motor shutter on (set=switch on)

/**
 * Get the current value of SHUTTER_MOTOR_ON from the device.
 */

bool MountVertexLLamaBase::getShutterMotorOn(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheShutter->getVal(timeShutterMotorOn);

    timestamp = timeShutterMotorOn;
    return valueShutterMotorOn;
}

/// MonitorPoint: SHUTTER_LOCAL_SYSTEM_ERROR
/// Local system error (set=error)

/**
 * Get the current value of SHUTTER_LOCAL_SYSTEM_ERROR from the device.
 */

bool MountVertexLLamaBase::getShutterLocalSystemError(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheShutter->getVal(timeShutterLocalSystemError);

    timestamp = timeShutterLocalSystemError;
    return valueShutterLocalSystemError;
}

/// MonitorPoint: SHUTTER_MOTION_TIMEOUT
/// Shutter motion timeout

/**
 * Get the current value of SHUTTER_MOTION_TIMEOUT from the device.
 */

bool MountVertexLLamaBase::getShutterMotionTimeout(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheShutter->getVal(timeShutterMotionTimeout);

    timestamp = timeShutterMotionTimeout;
    return valueShutterMotionTimeout;
}

/// MonitorPoint: SHUTTER_HANDCRANK_INSERTED
/// Handcrank inserted shutter not operational

/**
 * Get the current value of SHUTTER_HANDCRANK_INSERTED from the device.
 */

bool MountVertexLLamaBase::getShutterHandcrankInserted(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheShutter->getVal(timeShutterHandcrankInserted);

    timestamp = timeShutterHandcrankInserted;
    return valueShutterHandcrankInserted;
}

/// MonitorPoint: CAN_ERROR_0
/// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

/**
 * Get the current value of CAN_ERROR_0 from the device.
 */

unsigned char MountVertexLLamaBase::getCanError0(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheCanError->getVal(timeCanError0);

    timestamp = timeCanError0;
    return valueCanError0;
}

///This getCanError0Proxy enusures we call the virtual getCanError0
/// and not the MountVertexLLamaBase::getCanError0 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getCanError0Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getCanError0(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: CAN_ERROR_1
/// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

/**
 * Get the current value of CAN_ERROR_1 from the device.
 */

unsigned char MountVertexLLamaBase::getCanError1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheCanError->getVal(timeCanError1);

    timestamp = timeCanError1;
    return valueCanError1;
}

///This getCanError1Proxy enusures we call the virtual getCanError1
/// and not the MountVertexLLamaBase::getCanError1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getCanError1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getCanError1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: CAN_ERROR_2
/// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

/**
 * Get the current value of CAN_ERROR_2 from the device.
 */

unsigned char MountVertexLLamaBase::getCanError2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheCanError->getVal(timeCanError2);

    timestamp = timeCanError2;
    return valueCanError2;
}

///This getCanError2Proxy enusures we call the virtual getCanError2
/// and not the MountVertexLLamaBase::getCanError2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getCanError2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getCanError2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: CAN_ERROR_3
/// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

/**
 * Get the current value of CAN_ERROR_3 from the device.
 */

unsigned char MountVertexLLamaBase::getCanError3(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheCanError->getVal(timeCanError3);

    timestamp = timeCanError3;
    return valueCanError3;
}

///This getCanError3Proxy enusures we call the virtual getCanError3
/// and not the MountVertexLLamaBase::getCanError3 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getCanError3Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getCanError3(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SYSTEM_ID_0
/// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future. (dependent monitor 
    /// point)

/**
 * Get the current value of SYSTEM_ID_0 from the device.
 */

unsigned char MountVertexLLamaBase::getSystemId0(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemId->getVal(timeSystemId0);

    timestamp = timeSystemId0;
    return valueSystemId0;
}

///This getSystemId0Proxy enusures we call the virtual getSystemId0
/// and not the MountVertexLLamaBase::getSystemId0 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getSystemId0Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSystemId0(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SYSTEM_ID_1
/// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future. (dependent monitor 
    /// point)

/**
 * Get the current value of SYSTEM_ID_1 from the device.
 */

unsigned char MountVertexLLamaBase::getSystemId1(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemId->getVal(timeSystemId1);

    timestamp = timeSystemId1;
    return valueSystemId1;
}

///This getSystemId1Proxy enusures we call the virtual getSystemId1
/// and not the MountVertexLLamaBase::getSystemId1 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getSystemId1Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSystemId1(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// MonitorPoint: SYSTEM_ID_2
/// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future. (dependent monitor 
    /// point)

/**
 * Get the current value of SYSTEM_ID_2 from the device.
 */

unsigned char MountVertexLLamaBase::getSystemId2(
    ACS::Time& timestamp)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    cacheSystemId->getVal(timeSystemId2);

    timestamp = timeSystemId2;
    return valueSystemId2;
}

///This getSystemId2Proxy enusures we call the virtual getSystemId2
/// and not the MountVertexLLamaBase::getSystemId2 as it used to be.
/// This breaks the monitoring in the FrontEnd.

unsigned char MountVertexLLamaBase::getSystemId2Proxy(
    ACS::Time& timestamp)

{
    try
    {
        return getSystemId2(timestamp);
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// ControlPoint: SUBREF_DELTA_ROT
/// Set the new subreflector delta position for the tilt axes 
    /// (will not be accumulated to previous deltas). Delta positions 
    /// can be commanded when S/R is in A UTO mode.

void MountVertexLLamaBase::SET_SUBREF_DELTA_ROT(const Control::LongSeq& world)
{

    std::vector< short > x(world.length());
    std::size_t i(0U);
    for(std::vector< short >::iterator iter(x.begin());
        iter != x.end(); ++iter, ++i)
    {
        (*iter) = static_cast< short >(world[i]);
    }

    try
    {

        setCntlSubrefDeltaRot(x);

    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

}

/**
 * Get the RCA for control point SUBREF_DELTA_ROT.
 */
inline unsigned long MountVertexLLamaBase::getControlRCACntlSubrefDeltaRot() const
{
    return rcaControlCntlSubrefDeltaRot;
}

void MountVertexLLamaBase::setCntlSubrefDeltaRot(const std::vector< short >& world)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaControlCntlSubrefDeltaRot + AmbDeviceImpl::getBaseAddress());
    AmbDataLength_t length(6U);
    unsigned char rawBytes[8];

    std::vector< short > raw(world.size());
    raw = world;

    #if BYTE_ORDER != BIG_ENDIAN
    // Swap the bytes.

    for(std::size_t i(0U); i < 3U; ++i)
    {
        AMB::Utils::swapBytes(raw[i]);
    }

    #endif

    // Assign raw to rawBytes.

    int iRawBytes = 0;
    for(unsigned short i(0U); i < 3; ++i)
    {
        unsigned char* praw = reinterpret_cast< unsigned char* >(&raw[i]);
        for(unsigned short j(0U); j < 2; ++j)
        {
            rawBytes[iRawBytes++] = praw[j];
        }
    }

    // Execute the command.
    acstime::Epoch cmdTime;
    cmdTime.value = 0ULL;

    try
    {
        commandEnc(cmdTime.value, rca, length, reinterpret_cast< AmbDataMem_t* >(rawBytes));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// ControlPoint: SUBREF_DELTA_ROT

/**
 * Set the RCA for this control point.
 */
inline void MountVertexLLamaBase::setControlRCACntlSubrefDeltaRot(const unsigned long rca)
{
    rcaControlCntlSubrefDeltaRot = rca;
}

/// ControlPoint: SUBREF_DELTA_ROT
/// Set the new subreflector delta position for the tilt axes 
/// (will not be accumulated to previous deltas). Delta positions 
/// can be commanded when S/R is in A UTO mode.

/**
 * Get the RCA for control point SUBREF_ROTATION.
 */
inline unsigned long MountVertexLLamaBase::getControlRCACntlSubrefRotation() const
{
    return rcaControlCntlSubrefRotation;
}

void MountVertexLLamaBase::setCntlSubrefRotation(const std::vector< short >& world)
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaControlCntlSubrefRotation + AmbDeviceImpl::getBaseAddress());
    AmbDataLength_t length(6U);
    unsigned char rawBytes[8];

    std::vector< short > raw(world.size());
    raw = world;

    #if BYTE_ORDER != BIG_ENDIAN
    // Swap the bytes.

    for(std::size_t i(0U); i < 3U; ++i)
    {
        AMB::Utils::swapBytes(raw[i]);
    }

    #endif

    // Assign raw to rawBytes.

    int iRawBytes = 0;
    for(unsigned short i(0U); i < 3; ++i)
    {
        unsigned char* praw = reinterpret_cast< unsigned char* >(&raw[i]);
        for(unsigned short j(0U); j < 2; ++j)
        {
            rawBytes[iRawBytes++] = praw[j];
        }
    }

    // Execute the command.
    acstime::Epoch cmdTime;
    cmdTime.value = 0ULL;

    try
    {
        commandEnc(cmdTime.value, rca, length, reinterpret_cast< AmbDataMem_t* >(rawBytes));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

// ControlPoint: SUBREF_ROTATION
/// Rotation control of subreflector.

/**
 * Set the RCA for this control point.
 */
inline void MountVertexLLamaBase::setControlRCACntlSubrefRotation(const unsigned long rca)
{
    rcaControlCntlSubrefRotation = rca;
}

/// ControlPoint: SUBREF_ROTATION
/// Rotation control of subreflector.

/// ControlPoint: SELFTEST_STOP
/// Terminate ongoing self test.

void MountVertexLLamaBase::SET_SELFTEST_STOP()
{

    try
    {
        setSelftestStop();
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getCAMBErrorEx();
    }
    catch(const ControlExceptions::INACTErrorExImpl& ex)
    {
        throw ControlExceptions::INACTErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__).getINACTErrorEx();
    }

}

/**
 * Get the RCA for control point SELFTEST_STOP.
 */
inline unsigned long MountVertexLLamaBase::getControlRCASelftestStop() const
{
    return rcaControlSelftestStop;
}

void MountVertexLLamaBase::setSelftestStop()
{

    Control::HardwareDeviceImpl::checkHwStateOrThrow(
        &Control::HardwareDeviceImpl::isReady, __FILE__, __LINE__,
        __PRETTY_FUNCTION__);

    AmbRelativeAddr rca(rcaControlSelftestStop + AmbDeviceImpl::getBaseAddress());
    AmbDataLength_t length(1U);
    unsigned char rawBytes[8];

    unsigned char raw(0U);

    raw = 1;

    // Assign raw to rawBytes.

    unsigned char* praw = reinterpret_cast< unsigned char* >(&raw);
    for(unsigned short i(0U); i < 1; ++i)
    {
        rawBytes[i] = praw[i];
    }

    // Execute the command.
    acstime::Epoch cmdTime;
    cmdTime.value = 0ULL;

    try
    {
        commandEnc(cmdTime.value, rca, length, reinterpret_cast< AmbDataMem_t* >(rawBytes));
    }
    catch(const ControlExceptions::CAMBErrorExImpl& ex)
    {
        throw ControlExceptions::CAMBErrorExImpl(ex, __FILE__, __LINE__,
            __PRETTY_FUNCTION__);
    }
}

/// ControlPoint: SELFTEST_STOP

/**
 * Set the RCA for this control point.
 */
inline void MountVertexLLamaBase::setControlRCASelftestStop(const unsigned long rca)
{
    rcaControlSelftestStop = rca;
}

/// ControlPoint: SELFTEST_STOP
/// Terminate ongoing self test.
