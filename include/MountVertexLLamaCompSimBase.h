#ifndef __cplusplus
#error This is a C++ include file and cannot be used from plain C.
#endif
#ifndef MountVertexLLamaCompSimBase_h
#define MountVertexLLamaCompSimBase_h
//
// ALMA - Atacama Large Millimiter Array
// (c) Associated Universities Inc., 2011
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
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
//
// $Id: CompSimBaseDotH.xpt 199109 2013-12-18 18:37:52Z rmarson $
// $Source: /diskb/tmp/stefano/project2/CVS/CONTROL/Common/GenHwDevice/config/templates/amb/HWSim/CompSimBaseDotH.xpt,v $
//
// WARNING! DO NOT MODIFY THIS FILE!
//  ---------------------------------------------------------
// | This is generated code!  Do not modify this file.       |
// | Any changes will be lost when the file is re-generated. |
//  ---------------------------------------------------------
//

#include <AmbSimulationInt.h>
#include <MountVertexLLamaCompSimBaseS.h>
#include <MountVertexLLamaImpl.h>

/// The MountVertexLLamaCompSimBase class is the local component for the
/// Antenna Control Unit hardware simulator.
/// <ul>
/// <li> Device:   Antenna Control Unit
/// <li> Assembly: MountVertexLLama
/// <li> Parent:   root
/// <li> Node:     0x0
/// <li> Channel:  2
/// </ul>
class MountVertexLLamaCompSimBase: public MountVertexLLamaImpl,
    public virtual POA_Control::MountVertexLLamaCompSimBase
{
    public:
    MountVertexLLamaCompSimBase(const ACE_CString& name,
       maci::ContainerServices* pCS);

    virtual ~MountVertexLLamaCompSimBase();

    /// Returns true if a device is in simulation mode, false if
    /// it works with real hardware.
    virtual CORBA::Boolean isSimulated();

    /// \exception ControlExceptions::SimErrorEx
    virtual void setSimValue(const CORBA::Long rca,
        const Control::LongSeq& data);

    /// \exception ControlExceptions::SimErrorEx
    Control::LongSeq* getSimValue(const CORBA::Long rca);

    virtual void monitor(AmbRelativeAddr RCA, AmbDataLength_t& dataLength,
        AmbDataMem_t* data, sem_t* synchLock, Time* timestamp,
            AmbErrorCode_t* status);

    virtual void command(AmbRelativeAddr RCA,AmbDataLength_t dataLength,
        const AmbDataMem_t* data, sem_t* synchLock, Time* timestamp,
        AmbErrorCode_t* status);

    virtual void monitorTE(ACS::Time TimeEvent, AmbRelativeAddr RCA,
        AmbDataLength_t& dataLength, AmbDataMem_t* data, sem_t* synchLock,
        Time* timestamp, AmbErrorCode_t* status);

    virtual void commandTE(ACS::Time TimeEvent, AmbRelativeAddr RCA,
        AmbDataLength_t dataLength, const AmbDataMem_t* data, sem_t* synchLock,
        Time* timestamp, AmbErrorCode_t* status);

    virtual void monitorNextTE(AmbRelativeAddr RCA, AmbDataLength_t& dataLength,
        AmbDataMem_t* data, sem_t* synchLock, Time* timestamp,
        AmbErrorCode_t* status);

    virtual void commandNextTE(AMBSystem::AmbRelativeAddr RCA,
        AmbDataLength_t dataLength, const AmbDataMem_t* data, sem_t* synchLock,
        ACS::Time* timestamp, AmbErrorCode_t* status);

    virtual void flushNode(ACS::Time TimeEvent, ACS::Time* timestamp,
        AmbErrorCode_t* status);

    virtual void flushRCA(ACS::Time TimeEvent, AmbRelativeAddr RCA,
        ACS::Time* timestamp, AmbErrorCode_t* status);

    protected:
    virtual void getAmbInterfaceInstance()
    {
    };

    /// \exception ControlExceptions::CAMBErrorExImpl
    virtual void getDeviceUniqueId(std::string& deviceID);

    AmbSimulationInt simulationIf_m;

    private:
    /// No default ctor.
    MountVertexLLamaCompSimBase();

    /// Copy constructor is not allowed.
    MountVertexLLamaCompSimBase(const MountVertexLLamaCompSimBase&);

    /// Assignment operator is not allowed. 
    MountVertexLLamaCompSimBase& operator=(const MountVertexLLamaCompSimBase&);
};
#endif
