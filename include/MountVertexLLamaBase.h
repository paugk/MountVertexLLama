#ifndef MountVertexLLamaBase_h
#define MountVertexLLamaBase_h
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
 * $Id: BaseDotH.xpt 199109 2013-12-18 18:37:52Z rmarson $
 *
 */

#ifndef __cplusplus
#error This is a C++ include file and cannot be used from plain C.
#endif

/// Base classes and ACS classes that might be needed.
#include <ambDeviceImpl.h>
#include <hardwareDeviceImpl.h>
#include <acscommonC.h>
#include <baciDevIO.h>
#include <acserr.h>
#include <loggingLogger.h>

#include <baciROlong.h>
#include <baciROuLong.h>
#include <baciROlongLong.h>
#include <baciROuLongLong.h>
#include <baciROfloat.h>
#include <baciROdouble.h>
#include <baciROstring.h>
#include <baciROdoubleSeq.h>
#include <baciROfloatSeq.h>
#include <baciROlongSeq.h>
#include <baciROuLongSeq.h>
#include <baciROboolean.h>
#include <baciRObooleanSeq.h>
#include <baciROpattern.h>

#include <acstimeC.h>

// CORBA servant header generated from IDL.
#include <MountVertexLLamaBaseS.h>

// Includes needed for data members.
#include <baciSmartPropertyPointer.h>

#include <vector>
#include <iterator>
#include <string>
#include <boost/shared_ptr.hpp>
#include <linux/types.h>

#include <Utils.h>

#include <MountVertexImpl.h>

/// The MountVertexLLamaBase class is the base class for the Antenna Control Unit.
/// <ul>
/// <li> Device:   Antenna Control Unit
/// <li> Assembly: MountVertexLLama
/// <li> Parent:   root
/// <li> Node:     0x0
/// <li> Channel:  2
/// </ul>
/// <p>
/// The purpose of this document is to define the interface between the mount component running in an ABM and the ACU. The ICD provides the interface definitions for all monitor and control points accepted by the ACU as part of the low level functionality which is identified at present for the control of the antenna.
class MountVertexLLamaBase
    :

    public MountVertexImpl,

    public virtual POA_Control::MountVertexLLamaBase
{
    friend class MountVertexLLamaSimBase;

    public:
    /// Destructor
    virtual ~MountVertexLLamaBase();

    /// Returns true if a device is in simulation mode, false if
    /// it works with real hardware.
    virtual CORBA::Boolean isSimulated();

    /// Overriden from the component lifecycle interface.
    /// \exception acsErrTypeLifeCycle::LifeCycleExImpl
    virtual void initialize();

    /// Overriden from the component lifecycle interface.
    /// \exception acsErrTypeLifeCycle::LifeCycleExImpl
    virtual void cleanUp();

    virtual CORBA::ULong GET_CHANNEL_NUMBER()
    {
        return AmbDeviceImpl::GET_CHANNEL_NUMBER();
    };

    virtual CORBA::ULong GET_NODE_ADDRESS()
    {
        return AmbDeviceImpl::GET_NODE_ADDRESS();
    };

    virtual CORBA::ULong GET_BASE_ADDRESS()
    {
        return AmbDeviceImpl::GET_BASE_ADDRESS();
    };

    virtual void SET_CHANNEL_NUMBER(const CORBA::ULong arg)
    {
        AmbDeviceImpl::SET_CHANNEL_NUMBER(arg);
    };

    virtual void SET_NODE_ADDRESS(const CORBA::ULong arg)
    {
        AmbDeviceImpl::SET_NODE_ADDRESS(arg);
    };

    virtual void SET_BASE_ADDRESS(const CORBA::ULong arg)
    {
        AmbDeviceImpl::SET_BASE_ADDRESS(arg);
    };

    /// Get the RCA for monitor point CAN_ERROR.
    virtual unsigned long getMonitorRCACanError() const;

    /// Get the RCA for monitor point SYSTEM_ID.
    virtual unsigned long getMonitorRCASystemId() const;

    /// Get the RCA for monitor point NUM_TRANS.
    virtual unsigned long getMonitorRCANumTrans() const;

    /// Get the RCA for monitor point SW_REV_LEVEL.
    virtual unsigned long getMonitorRCASwRevLevel() const;

    /// Get the RCA for monitor point STOW_PIN.
    virtual unsigned long getMonitorRCAStowPin() const;

    /// Get the RCA for monitor point SYSTEM_STATUS.
    virtual unsigned long getMonitorRCASystemStatus() const;

    /// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER
    /// emergency stop AZ drives failure / equipment container

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PLATFORM_2_RECV_CABIN
    /// emergency stop platform 2 failure / receiver cabin

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_PLATFORM_2_RECV_CABIN(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_NASMYTH_CABINS_AB
    /// emergency stop Nasmyth cabins A/B

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_NASMYTH_CABINS_AB(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL
    /// emergency stop access to platform / outside pedestal

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_CONTROL_CONTAINER
    /// emergency stop control container

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_CONTROL_CONTAINER(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS2
    /// communication error ACU_UPS2

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_COMMUNICATION_ERROR_ACU_UPS2(ACS::Time& timestamp);

    /// Get the RCA for monitor point AZ_ENC_STATUS.
    virtual unsigned long getMonitorRCAAzEncStatus() const;

    /// Get the RCA for monitor point EL_ENC_STATUS.
    virtual unsigned long getMonitorRCAElEncStatus() const;

    /// Get the RCA for monitor point EL_STATUS.
    virtual unsigned long getMonitorRCAElStatus() const;

    /// MonitorPoint: METR_DELTAS_DISP
    /// Get AZ and EL delta correction applied by the metrology 
    /// system based on the readout of the sensors at the El encoder 
    /// mounts

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_DELTAS_DISP(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_DELTAS_DISP();

    /// Get the RCA for monitor point METR_DELTAS_DISP.
    virtual unsigned long getMonitorRCAMetrDeltasDisp() const;

    /// MonitorPoint: METR_DELTAS_SPEM
    /// Get AZ and EL delta correction applied by the metrology 
    /// system based on the systematic error model

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_DELTAS_SPEM(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_DELTAS_SPEM();

    /// Get the RCA for monitor point METR_DELTAS_SPEM.
    virtual unsigned long getMonitorRCAMetrDeltasSpem() const;

    /// MonitorPoint: METR_DELTAS_TILT
    /// Get AZ and EL delta correction applied by the metrology 
    /// system based on the readout of the tiltmeters

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_DELTAS_TILT(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_DELTAS_TILT();

    /// Get the RCA for monitor point METR_DELTAS_TILT.
    virtual unsigned long getMonitorRCAMetrDeltasTilt() const;

    /// MonitorPoint: METR_DELTAS_TILTTEMP
    /// Get AZ and EL delta correction applied by the metrology 
    /// system based on the model for temperature compensation of 
    /// the tiltmeter offset (?tilt offset model?)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_DELTAS_TILTTEMP(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_DELTAS_TILTTEMP();

    /// Get the RCA for monitor point METR_DELTAS_TILTTEMP.
    virtual unsigned long getMonitorRCAMetrDeltasTilttemp() const;

    /// Get the RCA for monitor point METR_EQUIP_STATUS.
    virtual unsigned long getMonitorRCAMetrEquipStatus() const;

    /// Get the RCA for monitor point METR_MODE.
    virtual unsigned long getMonitorRCAMetrMode() const;

    /// MonitorPoint: METR_TEMPS_19
    /// Get value of metrology temperature sensor pack 19

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_19(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_19();

    /// Get the RCA for monitor point METR_TEMPS_19.
    virtual unsigned long getMonitorRCAMetrTemps19() const;

    /// MonitorPoint: METR_TEMPS_1A
    /// Get value of metrology temperature sensor pack 1A

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_1A(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_1A();

    /// Get the RCA for monitor point METR_TEMPS_1A.
    virtual unsigned long getMonitorRCAMetrTemps1a() const;

    /// MonitorPoint: METR_TEMPS_1B
    /// Get value of metrology temperature sensor pack 1B

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_1B(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_1B();

    /// Get the RCA for monitor point METR_TEMPS_1B.
    virtual unsigned long getMonitorRCAMetrTemps1b() const;

    /// MonitorPoint: METR_TEMPS_1C
    /// Get value of metrology temperature sensor pack 1C

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_1C(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_1C();

    /// Get the RCA for monitor point METR_TEMPS_1C.
    virtual unsigned long getMonitorRCAMetrTemps1c() const;

    /// MonitorPoint: METR_TEMPS_1D
    /// Get value of metrology temperature sensor pack 1D

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_1D(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_1D();

    /// Get the RCA for monitor point METR_TEMPS_1D.
    virtual unsigned long getMonitorRCAMetrTemps1d() const;

    /// MonitorPoint: METR_TEMPS_1E
    /// Get value of metrology temperature sensor pack 1E

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_1E(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_1E();

    /// Get the RCA for monitor point METR_TEMPS_1E.
    virtual unsigned long getMonitorRCAMetrTemps1e() const;

    /// MonitorPoint: METR_TEMPS_1F
    /// Get value of metrology temperature sensor pack 1F

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TEMPS_1F(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TEMPS_1F();

    /// Get the RCA for monitor point METR_TEMPS_1F.
    virtual unsigned long getMonitorRCAMetrTemps1f() const;

    /// Get the RCA for monitor point PT_MODEL_COEFF_07.
    virtual unsigned long getMonitorRCAPtModelCoeff07() const;

    /// Get the RCA for monitor point PT_MODEL_COEFF_08.
    virtual unsigned long getMonitorRCAPtModelCoeff08() const;

    /// Get the RCA for monitor point PT_MODEL_COEFF_09.
    virtual unsigned long getMonitorRCAPtModelCoeff09() const;

    /// Get the RCA for monitor point SUBREF_ROTATION.
    virtual unsigned long getMonitorRCASubrefRotation() const;

    /// MonitorPoint: SUBREF_DELTA_ROT
    /// Subreflector rotation delta position.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_SUBREF_DELTA_ROT(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr SUBREF_DELTA_ROT();

    /// Get the RCA for monitor point SUBREF_DELTA_ROT.
    virtual unsigned long getMonitorRCASubrefDeltaRot() const;

    /// Get the RCA for monitor point SUBREF_STATUS.
    virtual unsigned long getMonitorRCASubrefStatus() const;

    /// MonitorPoint: OTHER_STATUS
    /// Cabin and auxiliary status information. Conditions may be 
    /// Fault conditions (F) or Status information (S). Each condition 
    /// is marked below; fault conditions require the use of the 
    /// CLEAR_FAULT_CMD to clear, while status information will 
    /// clear when the hardware condition is cleared.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_OTHER_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr OTHER_STATUS();

    /// Get the RCA for monitor point OTHER_STATUS.
    virtual unsigned long getMonitorRCAOtherStatus() const;

    /// Get the RCA for monitor point POWER_STATUS.
    virtual unsigned long getMonitorRCAPowerStatus() const;

    /// MonitorPoint: UPS2_ALARMS
    /// UPS2 Alarm status of UPS system. Conditions may be fault 
    /// conditions or status information. Fault conditions require 
    /// the use of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_ALARMS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr UPS2_ALARMS();

    /// Get the RCA for monitor point UPS2_ALARMS.
    virtual unsigned long getMonitorRCAUps2Alarms() const;

    /// MonitorPoint: UPS2_BATTERY_OUTPUT
    /// UPS 2 Battery voltage and current

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_BATTERY_OUTPUT(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_BATTERY_OUTPUT();

    /// Get the RCA for monitor point UPS2_BATTERY_OUTPUT.
    virtual unsigned long getMonitorRCAUps2BatteryOutput() const;

    /// MonitorPoint: UPS2_BATTERY_STATUS
    /// UPS 2 Nominal battery autonomy

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_BATTERY_STATUS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_BATTERY_STATUS();

    /// Get the RCA for monitor point UPS2_BATTERY_STATUS.
    virtual unsigned long getMonitorRCAUps2BatteryStatus() const;

    /// MonitorPoint: UPS2_BYPASS_VOLTS
    /// UPS 2 Bypass voltages by phase

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_BYPASS_VOLTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_BYPASS_VOLTS();

    /// Get the RCA for monitor point UPS2_BYPASS_VOLTS.
    virtual unsigned long getMonitorRCAUps2BypassVolts() const;

    /// MonitorPoint: UPS2_FREQS
    /// UPS 2 Bypass and inverter frequencies

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_FREQS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_FREQS();

    /// Get the RCA for monitor point UPS2_FREQS.
    virtual unsigned long getMonitorRCAUps2Freqs() const;

    /// MonitorPoint: UPS1_INVERTER_SW
    /// UPS 1 Inverter switch position

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_UPS1_INVERTER_SW(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr UPS1_INVERTER_SW();

    /// Get the RCA for monitor point UPS1_INVERTER_SW.
    virtual unsigned long getMonitorRCAUps1InverterSw() const;

    /// MonitorPoint: UPS2_INVERTER_SW
    /// UPS 2 Inverter switch position

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_UPS2_INVERTER_SW(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr UPS2_INVERTER_SW();

    /// Get the RCA for monitor point UPS2_INVERTER_SW.
    virtual unsigned long getMonitorRCAUps2InverterSw() const;

    /// MonitorPoint: UPS2_INVERTER_VOLTS
    /// UPS 2 Inverter voltages by phase

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_INVERTER_VOLTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_INVERTER_VOLTS();

    /// Get the RCA for monitor point UPS2_INVERTER_VOLTS.
    virtual unsigned long getMonitorRCAUps2InverterVolts() const;

    /// MonitorPoint: UPS2_OUTPUT_CURRENT
    /// UPS 2 Output currents by phase

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_OUTPUT_CURRENT(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_OUTPUT_CURRENT();

    /// Get the RCA for monitor point UPS2_OUTPUT_CURRENT.
    virtual unsigned long getMonitorRCAUps2OutputCurrent() const;

    /// MonitorPoint: UPS2_OUTPUT_VOLTS
    /// UPS 2 Output voltages by phase

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS2_OUTPUT_VOLTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS2_OUTPUT_VOLTS();

    /// Get the RCA for monitor point UPS2_OUTPUT_VOLTS.
    virtual unsigned long getMonitorRCAUps2OutputVolts() const;

    /// MonitorPoint: UPS_STATUS_1
    /// UPS 1 Current status word

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_UPS_STATUS_1(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr UPS_STATUS_1();

    /// Get the RCA for monitor point UPS_STATUS_1.
    virtual unsigned long getMonitorRCAUpsStatus1() const;

    /// MonitorPoint: UPS_STATUS_2
    /// UPS 2 Current status word

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_UPS_STATUS_2(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr UPS_STATUS_2();

    /// Get the RCA for monitor point UPS_STATUS_2.
    virtual unsigned long getMonitorRCAUpsStatus2() const;

    /// Get the RCA for monitor point AC_STATUS.
    virtual unsigned long getMonitorRCAAcStatus() const;

    /// Get the RCA for monitor point SHUTTER.
    virtual unsigned long getMonitorRCAShutter() const;

    /// ControlPoint: SUBREF_DELTA_ROT
    /// Set the new subreflector delta position for the tilt axes 
    /// (will not be accumulated to previous deltas). Delta positions 
    /// can be commanded when S/R is in A UTO mode.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_SUBREF_DELTA_ROT(const Control::LongSeq& world);

    /// Get the RCA for control point SUBREF_DELTA_ROT.
    virtual unsigned long getControlRCACntlSubrefDeltaRot() const;

    /// Get the RCA for control point SUBREF_ROTATION.
    virtual unsigned long getControlRCACntlSubrefRotation() const;

    /// ControlPoint: SELFTEST_STOP
    /// Terminate ongoing self test.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_SELFTEST_STOP();

    /// Get the RCA for control point SELFTEST_STOP.
    virtual unsigned long getControlRCASelftestStop() const;

    protected:
    /// Constructor. Never instanciate this class directly!
    MountVertexLLamaBase(const ACE_CString& name, maci::ContainerServices* cs);

    /// MonitorPoint: CAN_ERROR
    /// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getCanError(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getCanErrorProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCACanError(const unsigned long rca);

    /// MonitorPoint: SYSTEM_ID
    /// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSystemId(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSystemIdProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASystemId(const unsigned long rca);

    /// MonitorPoint: NUM_TRANS
    /// Number of CAN transactions handled by ACU since power up.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned int getNumTrans(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned int getNumTransProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCANumTrans(const unsigned long rca);

    /// MonitorPoint: SW_REV_LEVEL
    /// Revision level of vendor ACU code.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSwRevLevel(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSwRevLevelProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASwRevLevel(const unsigned long rca);

    /// MonitorPoint: SW_REV_LEVEL_MAJOR
    /// Major revision level.

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getSwRevLevelMajor(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getSwRevLevelMajorProxy(ACS::Time& timestamp);

    /// MonitorPoint: SW_REV_LEVEL_MINOR
    /// Minor revision level.

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getSwRevLevelMinor(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getSwRevLevelMinorProxy(ACS::Time& timestamp);

    /// MonitorPoint: SW_REV_LEVEL_PATCH
    /// Patch level.

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getSwRevLevelPatch(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getSwRevLevelPatchProxy(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN
    /// Position of antenna stow pins.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getStowPin(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getStowPinProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAStowPin(const unsigned long rca);

    /// MonitorPoint: STOW_PIN_AZ_PIN1_INSERTED
    /// Azimuth stow pin inserted (set=inserted)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinAzPin1Inserted(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_AZ_PIN1_RELEASED
    /// Azimuth stow pin released (set=released)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinAzPin1Released(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_AZ_LOCAL_SYSTEM_ERROR
    /// Azimuth stow pin Local sytem error (set=error)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinAzLocalSystemError(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_AZ_MOTION_TIMEOUT
    /// Azimuth stow pin motion timeout

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinAzMotionTimeout(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_AZ_POSITION_SWITCH_TIMEOUT
    /// Azimuth stow position switch timeout

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinAzPositionSwitchTimeout(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_EL_PIN1_INSERTED
    /// Elevation stow pin 1 inserted (set=inserted)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinElPin1Inserted(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_EL_PIN1_RELEASED
    /// Elevation stow pin 1 inserted (set=released)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinElPin1Released(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_EL_LOCAL_SYSTEM_ERROR
    /// Elevation stow pin local sytem error (set=error)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinElLocalSystemError(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_EL_MOTION_TIMEOUT
    /// Elevation stow pin motion timeout

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinElMotionTimeout(ACS::Time& timestamp);

    /// MonitorPoint: STOW_PIN_EL_POSITION_SWITCH_TIMEOUT
    /// Elevation stow position switch timeout

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStowPinElPositionSwitchTimeout(ACS::Time& timestamp);

    /// MonitorPoint: SYSTEM_STATUS
    /// System status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSystemStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSystemStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASystemStatus(const unsigned long rca);

    /// MonitorPoint: EMERGENCY_STOP
    /// Emergency Stop. Set means applied

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStop(ACS::Time& timestamp);

    /// MonitorPoint: STAIRWAY_INTERLOCK
    /// Stairway Interlock. Set means Applied

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStairwayInterlock(ACS::Time& timestamp);

    /// MonitorPoint: HANDLING_INTERLOCK
    /// Handling Interlock. Set meand applied.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getHandlingInterlock(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_CONDITION
    /// Smoke Alarm Condition. Set means detected

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmCondition(ACS::Time& timestamp);

    /// MonitorPoint: ACU_BOOTING_FAILURE
    /// ACU Booting Failure. Set means failed

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAcuBootingFailure(ACS::Time& timestamp);

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_CMD
    /// Survival stow due to missing commands after idle time. Set 
    /// means applied

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSurvivalStowDtMissingCmd(ACS::Time& timestamp);

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_PULSE
    /// Survival stow due to missing time pulse after idele time. 
    /// Set means applied

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSurvivalStowDtMissingPulse(ACS::Time& timestamp);

    /// MonitorPoint: TIME_PULSE_MISSING
    /// time pulse missing. Set means missing.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getTimePulseMissing(ACS::Time& timestamp);

    /// MonitorPoint: SAFE_SWITCH
    /// Safe switch status information

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSafeSwitch(ACS::Time& timestamp);

    /// MonitorPoint: POWER_FAILURE
    /// Power Failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getPowerFailure(ACS::Time& timestamp);

    /// MonitorPoint: LINE_24V_FAILURE
    /// 24V failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getLine24vFailure(ACS::Time& timestamp);

    /// MonitorPoint: BREAKER_FAILURE
    /// breaker failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getBreakerFailure(ACS::Time& timestamp);

    /// MonitorPoint: ACU_FAN_FAILURE
    /// ACU fan failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAcuFanFailure(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_PLC
    /// communication error ACU_PLC

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCommunicationErrorAcuPlc(ACS::Time& timestamp);

    /// MonitorPoint: CABINET_OVER_TEMP
    /// cabinet over temperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCabinetOverTemp(ACS::Time& timestamp);

    /// MonitorPoint: ALMA_E_STOP
    /// ALMA e-stop failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlmaEStop(ACS::Time& timestamp);

    /// MonitorPoint: RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP
    /// Ramp to receiver cabin not tilted up status information

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getRampToReceiverCabinNoTiltedUp(ACS::Time& timestamp);

    /// MonitorPoint: DOOR_TO_NASMYTH_CABIN_A_OPEN
    /// Door to Nasmyth cabin A open

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getDoorToNasmythCabinAOpen(ACS::Time& timestamp);

    /// MonitorPoint: DOOR_TO_NASMYTH_CABIN_B_OPEN
    /// Door to Nasmyth cabin B open

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getDoorToNasmythCabinBOpen(ACS::Time& timestamp);

    /// MonitorPoint: ACCESS_INTERLOCK
    /// Acess Interlock

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAccessInterlock(ACS::Time& timestamp);

    /// MonitorPoint: RECEIVER_CABIN_DOOR_OPEN
    /// receiver cabin door open status information

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getReceiverCabinDoorOpen(ACS::Time& timestamp);

    /// MonitorPoint: PEDESTAL_DOOR_OPEN
    /// pedestal door open warning information

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getPedestalDoorOpen(ACS::Time& timestamp);

    /// MonitorPoint: DRIVE_CABINET_OPEN
    /// drive cabinet open warning information

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getDriveCabinetOpen(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_CABINET
    /// emergency stop cabinet failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopCabinet(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopAzDrivesEquipContainer(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_INSIDE_ANTENNA_BASE
    /// emergency stop inside antenna base failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopInsideAntennaBase(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PLATFORM_2_RECV_CABIN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopPlatform2RecvCabin(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_NASMYTH_CABINS_AB

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopNasmythCabinsAb(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopAcessToPlatformOutsidePedestal(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PORTABLE_CONTROL_UNIT
    /// emergency stop portable control unit failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopPortableControlUnit(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_CONTROL_CONTAINER

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopControlContainer(ACS::Time& timestamp);

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_FAILURE
    /// Auto lubrication system failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAutoLubricationSystemFailure(ACS::Time& timestamp);

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_MALFUNCTION
    /// Auto lubrication system malfunction

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAutoLubricationSystemMalfunction(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS1
    /// communication error ACU_UPS1

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCommunicationErrorAcuUps1(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS2

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCommunicationErrorAcuUps2(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_STATUS
    /// Status of azimuth encoder.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAzEncStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAzEncStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzEncStatus(const unsigned long rca);

    /// MonitorPoint: AZ_ENC_DOES_NOT_RESPOND
    /// Encoder does not respond.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncDoesNotRespond(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_POSITION_MEANINGLESS
    /// Position read from encoder does not make sense.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncPositionMeaningless(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_STATUS
    /// Status of elevation encoders.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getElEncStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getElEncStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElEncStatus(const unsigned long rca);

    /// MonitorPoint: EL_ENC_DOES_NOT_RESPOND
    /// Encoder does not respond.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncDoesNotRespond(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_POSITION_MEANINGLESS
    /// Position read from encoder does not make sense.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncPositionMeaningless(ACS::Time& timestamp);

    /// MonitorPoint: EL_STATUS
    /// Status of elevation axis. Conditions may be fault conditions 
    /// or status information. Fault conditions require the use 
    /// of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElStatus(const unsigned long rca);

    /// MonitorPoint: EL_PRELIMIT_UP
    /// PRELIMIT_UP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElPrelimitUp(ACS::Time& timestamp);

    /// MonitorPoint: EL_PRELIMIT_DOWN
    /// PRELIMIT_DOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElPrelimitDown(ACS::Time& timestamp);

    /// MonitorPoint: EL_LIMIT_UP
    /// LIMIT_UP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElLimitUp(ACS::Time& timestamp);

    /// MonitorPoint: EL_LIMIT_DOWN
    /// LIMIT_DOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElLimitDown(ACS::Time& timestamp);

    /// MonitorPoint: EL_EMERGENCY_LIMIT_UP
    /// EMERGENCY_LIMIT_UP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEmergencyLimitUp(ACS::Time& timestamp);

    /// MonitorPoint: EL_EMERGENCY_LIMIT_DOWN
    /// EMERGENCY_LIMIT_DOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEmergencyLimitDown(ACS::Time& timestamp);

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT
    /// SECOND_EMERGENCY_LIMIT_UP_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElSecondEmergencyLimitUpLimit(ACS::Time& timestamp);

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT
    /// SECOND_EMERGENCY_LIMIT_DOWN_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElSecondEmergencyLimitDownLimit(ACS::Time& timestamp);

    /// MonitorPoint: EL_SERVO_FAILURE
    /// SERVO_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElServoFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_OVERSPEED_FAULT
    /// OVERSPEED_FAULT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElOverspeedFault(ACS::Time& timestamp);

    /// MonitorPoint: EL_IMMOBILE_FAILURE
    /// IMMOBILE_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElImmobileFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_SPEED_ZERO_STATUS
    /// SPEED_ZERO_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElSpeedZeroStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_STOW_POSITION_STATUS
    /// STOW_POSITION_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElStowPositionStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENCODER_FAILURE
    /// ENCODER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncoderFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_INSANE_VELOCITY_FEEDBACK
    /// INSANE_VELOCITY_FEEDBACK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElInsaneVelocityFeedback(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_1_FAILURE
    /// BRAKE_1_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake1Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_2_FAILURE
    /// BRAKE_2_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake2Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_3_FAILURE
    /// BRAKE_3_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake3Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_4_FAILURE
    /// BRAKE_4_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake4Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_1_FAILURE
    /// AMPLIFIER_1_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier1Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_2_FAILURE
    /// AMPLIFIER_2_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier2Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_3_FAILURE
    /// AMPLIFIER_3_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier3Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_4_FAILURE
    /// AMPLIFIER_4_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier4Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_CAN_COMM_ERROR_TO_SERVO_AMPLIFIERS
    /// CAN communication error to servo amplifiers

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElCanCommErrorToServoAmplifiers(ACS::Time& timestamp);

    /// MonitorPoint: EL_BREAKER_FAULT
    /// breaker failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBreakerFault(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_1_OVER_TEMP
    /// MOTOR_1_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor1OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_2_OVER_TEMP
    /// MOTOR_2_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor2OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_3_OVER_TEMP
    /// MOTOR_3_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor3OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_4_OVER_TEMP
    /// MOTOR_4_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor4OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_REGENERATION_RESISTOR_OVER_TEMP
    /// REGENERATION_RESISTOR_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElRegenerationResistorOverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_SERVO_OSCILLATION_FAILURE
    /// SERVO_OSCILLATION_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElServoOscillationFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUXILIARY_ENCODER_FAILURE
    /// AUXILIARY_ENCODER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAuxiliaryEncoderFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_POSITION_DEVIATION
    /// POSITION_DEVIATION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElPositionDeviation(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MOTOR_1_2_OFF_STATUS
    /// AUX_MOTOR_1_2_OFF_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAuxMotor12OffStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MOTOR_3_4_OFF_STATUS
    /// AUX_MOTOR_3_4_OFF_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAuxMotor34OffStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_1_OIL_LEVEL_WARNING
    /// GEARBOX_1_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox1OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_2_OIL_LEVEL_WARNING
    /// GEARBOX_2_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox2OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_3_OIL_LEVEL_WARNING
    /// GEARBOX_3_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox3OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_4_OIL_LEVEL_WARNING
    /// GEARBOX_4_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox4OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_COMPUTER_DISABLED
    /// COMPUTER_DISABLED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElComputerDisabled(ACS::Time& timestamp);

    /// MonitorPoint: EL_AXIS_DISABLED
    /// AXIS_DISABLED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAxisDisabled(ACS::Time& timestamp);

    /// MonitorPoint: EL_HANDHELD_PCU_OPERATION
    /// HANDHELD_PCU_OPERATION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElHandheldPcuOperation(ACS::Time& timestamp);

    /// MonitorPoint: EL_AXIS_IN_STOP_STATUS
    /// AXIS_IN_STOP_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAxisInStopStatus(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_DISP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasDisp(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasDispProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDeltasDisp(const unsigned long rca);

    /// MonitorPoint: METR_DELTAS_DISP_AZ_CORRECTION
    /// Azimuth delta correction applied by the metrology system 
    /// based on the readout of the sensors at the El encoder mounts

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasDispAzCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasDispAzCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_DISP_EL_CORRECTION
    /// Elevation delta correction applied by the metrology system 
    /// based on the readout of the sensors at the El encoder mounts

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasDispElCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasDispElCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_SPEM

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasSpem(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasSpemProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDeltasSpem(const unsigned long rca);

    /// MonitorPoint: METR_DELTAS_SPEM_AZ_CORRECTION
    /// Azimuth delta correction applied by the metrology system 
    /// based on the systematic error model

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasSpemAzCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasSpemAzCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_SPEM_EL_CORRECTION
    /// Elevation delta correction applied by the metrology system 
    /// based on the systematic error model

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasSpemElCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasSpemElCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TILT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasTilt(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasTiltProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDeltasTilt(const unsigned long rca);

    /// MonitorPoint: METR_DELTAS_TILT_AZ_CORRECTION
    /// Azimuth delta correction applied by the metrology system 
    /// based on the readout of the tiltmeters

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasTiltAzCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasTiltAzCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TILT_EL_CORRECTION
    /// Elevation delta correction applied by the metrology system 
    /// based on the readout of the tiltmeters

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasTiltElCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasTiltElCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TILTTEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasTilttemp(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasTilttempProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDeltasTilttemp(const unsigned long rca);

    /// MonitorPoint: METR_DELTAS_TILTTEMP_AZ_CORRECTION
    /// Azimuth delta correction applied by the metrology system 
    /// based on the model for temperature compensation of the tiltmeter 
    /// offset (?tilt offset model?)

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasTilttempAzCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasTilttempAzCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TILTTEMP_EL_CORRECTION
    /// Elevation delta correction applied by the metrology system 
    /// based on the model for temperature compensation of the tiltmeter 
    /// offset (?tilt offset model?)

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasTilttempElCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasTilttempElCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS
    /// Metrology equipment status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getMetrEquipStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getMetrEquipStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrEquipStatus(const unsigned long rca);

    /// MonitorPoint: METR_EQUIP_STATUS_LOCAL_BUS_ERR
    /// Local bus error ACU

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusLocalBusErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_1_ERR
    /// Tiltmeter 1 readout error

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusTiltmeter1Err(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TEMP_SENSOR_ERR
    /// Temperature sensor readout error

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusTempSensorErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_DISPL_SENSOR_ERR
    /// Displacement sensor readout error

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusDisplSensorErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_ACU_MMC_COMM_ERR
    /// Communication error ACU-MMC

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusAcuMmcCommErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_METR_DATA_INVALID
    /// Metrology data is not valid

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusMetrDataInvalid(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE
    /// Get metrology mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getMetrMode(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getMetrModeProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrMode(const unsigned long rca);

    /// MonitorPoint: METR_MODE_STANDARD_POINTING_ERROR_MODEL_ENABLED
    /// Standard pointing error model enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeStandardPointingErrorModelEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_TILTMETER_COMP_ENABLED
    /// Tiltmeter compensation enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeTiltmeterCompEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_TILT_OFFSET_TEMP_MODEL_ENABLED
    /// Tilt offset temperature model enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeTiltOffsetTempModelEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_AUTOMATIC_SUBREF_POSN_CORRECTION_ENABLED
    /// Automatic sub-reflector position correction enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeAutomaticSubrefPosnCorrectionEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_MOUNT_ENC_CORRECTION_BASED_ENABLED
    /// Correction based on encoder mount sensors enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeMountEncCorrectionBasedEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_TEMPS_19

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps19(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps19Proxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps19(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_100
    /// Metrology temperature sensor 100

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor100(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor100Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_100 to a world value.

    virtual float rawToWorldMetrTempsSensor100(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_100.
    virtual double getScaleMetrTempsSensor100() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_100.
    virtual double getOffsetMetrTempsSensor100() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_100:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor100(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_101
    /// Metrology temperature sensor 101

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor101(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor101Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_101 to a world value.

    virtual float rawToWorldMetrTempsSensor101(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_101.
    virtual double getScaleMetrTempsSensor101() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_101.
    virtual double getOffsetMetrTempsSensor101() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_101:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor101(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_102
    /// Metrology temperature sensor 102

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor102(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor102Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_102 to a world value.

    virtual float rawToWorldMetrTempsSensor102(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_102.
    virtual double getScaleMetrTempsSensor102() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_102.
    virtual double getOffsetMetrTempsSensor102() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_102:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor102(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_103
    /// Metrology temperature sensor 103

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor103(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor103Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_103 to a world value.

    virtual float rawToWorldMetrTempsSensor103(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_103.
    virtual double getScaleMetrTempsSensor103() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_103.
    virtual double getOffsetMetrTempsSensor103() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_103:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor103(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_1A

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1a(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1aProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps1a(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_104
    /// Metrology temperature sensor 104

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor104(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor104Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_104 to a world value.

    virtual float rawToWorldMetrTempsSensor104(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_104.
    virtual double getScaleMetrTempsSensor104() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_104.
    virtual double getOffsetMetrTempsSensor104() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_104:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor104(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_105
    /// Metrology temperature sensor 105

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor105(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor105Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_105 to a world value.

    virtual float rawToWorldMetrTempsSensor105(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_105.
    virtual double getScaleMetrTempsSensor105() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_105.
    virtual double getOffsetMetrTempsSensor105() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_105:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor105(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_106
    /// Metrology temperature sensor 106

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor106(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor106Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_106 to a world value.

    virtual float rawToWorldMetrTempsSensor106(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_106.
    virtual double getScaleMetrTempsSensor106() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_106.
    virtual double getOffsetMetrTempsSensor106() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_106:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor106(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_107
    /// Metrology temperature sensor 107

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor107(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor107Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_107 to a world value.

    virtual float rawToWorldMetrTempsSensor107(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_107.
    virtual double getScaleMetrTempsSensor107() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_107.
    virtual double getOffsetMetrTempsSensor107() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_107:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor107(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_1B

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1b(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1bProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps1b(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_108
    /// Metrology temperature sensor 108

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor108(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor108Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_108 to a world value.

    virtual float rawToWorldMetrTempsSensor108(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_108.
    virtual double getScaleMetrTempsSensor108() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_108.
    virtual double getOffsetMetrTempsSensor108() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_108:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor108(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_109
    /// Metrology temperature sensor 109

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor109(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor109Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_109 to a world value.

    virtual float rawToWorldMetrTempsSensor109(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_109.
    virtual double getScaleMetrTempsSensor109() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_109.
    virtual double getOffsetMetrTempsSensor109() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_109:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor109(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_110
    /// Metrology temperature sensor 110

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor110(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor110Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_110 to a world value.

    virtual float rawToWorldMetrTempsSensor110(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_110.
    virtual double getScaleMetrTempsSensor110() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_110.
    virtual double getOffsetMetrTempsSensor110() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_110:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor110(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_111
    /// Metrology temperature sensor 111

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor111(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor111Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_111 to a world value.

    virtual float rawToWorldMetrTempsSensor111(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_111.
    virtual double getScaleMetrTempsSensor111() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_111.
    virtual double getOffsetMetrTempsSensor111() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_111:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor111(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_1C

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1c(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1cProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps1c(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_112
    /// Metrology temperature sensor 112

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor112(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor112Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_112 to a world value.

    virtual float rawToWorldMetrTempsSensor112(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_112.
    virtual double getScaleMetrTempsSensor112() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_112.
    virtual double getOffsetMetrTempsSensor112() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_112:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor112(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_113
    /// Metrology temperature sensor 113

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor113(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor113Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_113 to a world value.

    virtual float rawToWorldMetrTempsSensor113(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_113.
    virtual double getScaleMetrTempsSensor113() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_113.
    virtual double getOffsetMetrTempsSensor113() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_113:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor113(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_114
    /// Metrology temperature sensor 114

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor114(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor114Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_114 to a world value.

    virtual float rawToWorldMetrTempsSensor114(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_114.
    virtual double getScaleMetrTempsSensor114() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_114.
    virtual double getOffsetMetrTempsSensor114() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_114:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor114(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_115
    /// Metrology temperature sensor 115

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor115(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor115Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_115 to a world value.

    virtual float rawToWorldMetrTempsSensor115(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_115.
    virtual double getScaleMetrTempsSensor115() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_115.
    virtual double getOffsetMetrTempsSensor115() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_115:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor115(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_1D

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1d(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1dProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps1d(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_116
    /// Metrology temperature sensor 116

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor116(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor116Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_116 to a world value.

    virtual float rawToWorldMetrTempsSensor116(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_116.
    virtual double getScaleMetrTempsSensor116() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_116.
    virtual double getOffsetMetrTempsSensor116() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_116:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor116(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_117
    /// Metrology temperature sensor 117

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor117(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor117Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_117 to a world value.

    virtual float rawToWorldMetrTempsSensor117(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_117.
    virtual double getScaleMetrTempsSensor117() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_117.
    virtual double getOffsetMetrTempsSensor117() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_117:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor117(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_118
    /// Metrology temperature sensor 118

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor118(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor118Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_118 to a world value.

    virtual float rawToWorldMetrTempsSensor118(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_118.
    virtual double getScaleMetrTempsSensor118() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_118.
    virtual double getOffsetMetrTempsSensor118() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_118:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor118(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_119
    /// Metrology temperature sensor 119

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor119(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor119Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_119 to a world value.

    virtual float rawToWorldMetrTempsSensor119(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_119.
    virtual double getScaleMetrTempsSensor119() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_119.
    virtual double getOffsetMetrTempsSensor119() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_119:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor119(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_1E

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1e(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1eProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps1e(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_120
    /// Metrology temperature sensor 120

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor120(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor120Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_120 to a world value.

    virtual float rawToWorldMetrTempsSensor120(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_120.
    virtual double getScaleMetrTempsSensor120() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_120.
    virtual double getOffsetMetrTempsSensor120() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_120:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor120(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_121
    /// Metrology temperature sensor 121

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor121(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor121Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_121 to a world value.

    virtual float rawToWorldMetrTempsSensor121(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_121.
    virtual double getScaleMetrTempsSensor121() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_121.
    virtual double getOffsetMetrTempsSensor121() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_121:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor121(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_122
    /// Metrology temperature sensor 122

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor122(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor122Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_122 to a world value.

    virtual float rawToWorldMetrTempsSensor122(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_122.
    virtual double getScaleMetrTempsSensor122() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_122.
    virtual double getOffsetMetrTempsSensor122() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_122:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor122(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_123
    /// Metrology temperature sensor 123

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor123(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor123Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_123 to a world value.

    virtual float rawToWorldMetrTempsSensor123(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_123.
    virtual double getScaleMetrTempsSensor123() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_123.
    virtual double getOffsetMetrTempsSensor123() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_123:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor123(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_1F

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1f(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTemps1fProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTemps1f(const unsigned long rca);

    /// MonitorPoint: METR_TEMPS_SENSOR_124
    /// Metrology temperature sensor 124

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor124(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor124Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_124 to a world value.

    virtual float rawToWorldMetrTempsSensor124(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_124.
    virtual double getScaleMetrTempsSensor124() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_124.
    virtual double getOffsetMetrTempsSensor124() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_124:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor124(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_125
    /// Metrology temperature sensor 125

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor125(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor125Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_125 to a world value.

    virtual float rawToWorldMetrTempsSensor125(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_125.
    virtual double getScaleMetrTempsSensor125() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_125.
    virtual double getOffsetMetrTempsSensor125() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_125:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor125(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_126
    /// Metrology temperature sensor 126

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor126(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor126Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_126 to a world value.

    virtual float rawToWorldMetrTempsSensor126(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_126.
    virtual double getScaleMetrTempsSensor126() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_126.
    virtual double getOffsetMetrTempsSensor126() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_126:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor126(const double scale,
        const double offset);

    /// MonitorPoint: METR_TEMPS_SENSOR_127
    /// Metrology temperature sensor 127

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTempsSensor127(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTempsSensor127Proxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TEMPS_SENSOR_127 to a world value.

    virtual float rawToWorldMetrTempsSensor127(
        const short raw) const;

    /// Get the scale conversion factor of METR_TEMPS_SENSOR_127.
    virtual double getScaleMetrTempsSensor127() const;

    /// Get the offset conversion factor of METR_TEMPS_SENSOR_127.
    virtual double getOffsetMetrTempsSensor127() const;

    /// Override the default conversion factors of METR_TEMPS_SENSOR_127:
    /// scale and offset.
    virtual void setConversionMetrTempsSensor127(const double scale,
        const double offset);

    /// MonitorPoint: PT_MODEL_COEFF_07
    /// Pointing model coefficient to be used in autonomous mode. 
    /// Cgr (additional gravitational flexure term)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getPtModelCoeff07(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getPtModelCoeff07Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAPtModelCoeff07(const unsigned long rca);

    /// MonitorPoint: PT_MODEL_COEFF_08
    /// Pointing model coefficient to be used in autonomous mode. 
    /// Dgr (additional gravitational flexure term)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getPtModelCoeff08(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getPtModelCoeff08Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAPtModelCoeff08(const unsigned long rca);

    /// MonitorPoint: PT_MODEL_COEFF_09
    /// Pointing model coefficient to be used in autonomous mode. 
    /// Zfix (Nasmyth correction)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getPtModelCoeff09(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getPtModelCoeff09Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAPtModelCoeff09(const unsigned long rca);

    /// MonitorPoint: SUBREF_ROTATION
    /// Subreflector rotation position.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getSubrefRotation(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getSubrefRotationProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASubrefRotation(const unsigned long rca);

    /// MonitorPoint: SUBREF_ROTATION_X_TIP
    /// Subreflector rotation x tip

    /// \exception ControlExceptions::INACTErrorEx
    virtual double getSubrefRotationXTip(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getSubrefRotationXTipProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_ROTATION_X_TIP to a world value.

    virtual double rawToWorldSubrefRotationXTip(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_ROTATION_X_TIP.
    virtual double getScaleSubrefRotationXTip() const;

    /// Get the offset conversion factor of SUBREF_ROTATION_X_TIP.
    virtual double getOffsetSubrefRotationXTip() const;

    /// Override the default conversion factors of SUBREF_ROTATION_X_TIP:
    /// scale and offset.
    virtual void setConversionSubrefRotationXTip(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_ROTATION_Y_TILT
    /// Subreflector rotation y tilt

    /// \exception ControlExceptions::INACTErrorEx
    virtual double getSubrefRotationYTilt(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getSubrefRotationYTiltProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_ROTATION_Y_TILT to a world value.

    virtual double rawToWorldSubrefRotationYTilt(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_ROTATION_Y_TILT.
    virtual double getScaleSubrefRotationYTilt() const;

    /// Get the offset conversion factor of SUBREF_ROTATION_Y_TILT.
    virtual double getOffsetSubrefRotationYTilt() const;

    /// Override the default conversion factors of SUBREF_ROTATION_Y_TILT:
    /// scale and offset.
    virtual void setConversionSubrefRotationYTilt(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_ROTATION_Z_TILT
    /// Subreflector rotation z tilt

    /// \exception ControlExceptions::INACTErrorEx
    virtual double getSubrefRotationZTilt(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getSubrefRotationZTiltProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_ROTATION_Z_TILT to a world value.

    virtual double rawToWorldSubrefRotationZTilt(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_ROTATION_Z_TILT.
    virtual double getScaleSubrefRotationZTilt() const;

    /// Get the offset conversion factor of SUBREF_ROTATION_Z_TILT.
    virtual double getOffsetSubrefRotationZTilt() const;

    /// Override the default conversion factors of SUBREF_ROTATION_Z_TILT:
    /// scale and offset.
    virtual void setConversionSubrefRotationZTilt(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_DELTA_ROT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getSubrefDeltaRot(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getSubrefDeltaRotProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASubrefDeltaRot(const unsigned long rca);

    /// MonitorPoint: SUBREF_DELTA_ROT_X_TIP
    /// Subreflector delta rotation x tip

    /// \exception ControlExceptions::INACTErrorEx
    virtual double getSubrefDeltaRotXTip(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getSubrefDeltaRotXTipProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_DELTA_ROT_X_TIP to a world value.

    virtual double rawToWorldSubrefDeltaRotXTip(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_DELTA_ROT_X_TIP.
    virtual double getScaleSubrefDeltaRotXTip() const;

    /// Get the offset conversion factor of SUBREF_DELTA_ROT_X_TIP.
    virtual double getOffsetSubrefDeltaRotXTip() const;

    /// Override the default conversion factors of SUBREF_DELTA_ROT_X_TIP:
    /// scale and offset.
    virtual void setConversionSubrefDeltaRotXTip(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_DELTA_ROT_Y_TILT
    /// Subreflector delta rotation y tilt

    /// \exception ControlExceptions::INACTErrorEx
    virtual double getSubrefDeltaRotYTilt(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getSubrefDeltaRotYTiltProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_DELTA_ROT_Y_TILT to a world value.

    virtual double rawToWorldSubrefDeltaRotYTilt(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_DELTA_ROT_Y_TILT.
    virtual double getScaleSubrefDeltaRotYTilt() const;

    /// Get the offset conversion factor of SUBREF_DELTA_ROT_Y_TILT.
    virtual double getOffsetSubrefDeltaRotYTilt() const;

    /// Override the default conversion factors of SUBREF_DELTA_ROT_Y_TILT:
    /// scale and offset.
    virtual void setConversionSubrefDeltaRotYTilt(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_DELTA_ROT_Z_TILT
    /// Subreflector delta rotation z tilt

    /// \exception ControlExceptions::INACTErrorEx
    virtual double getSubrefDeltaRotZTilt(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getSubrefDeltaRotZTiltProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_DELTA_ROT_Z_TILT to a world value.

    virtual double rawToWorldSubrefDeltaRotZTilt(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_DELTA_ROT_Z_TILT.
    virtual double getScaleSubrefDeltaRotZTilt() const;

    /// Get the offset conversion factor of SUBREF_DELTA_ROT_Z_TILT.
    virtual double getOffsetSubrefDeltaRotZTilt() const;

    /// Override the default conversion factors of SUBREF_DELTA_ROT_Z_TILT:
    /// scale and offset.
    virtual void setConversionSubrefDeltaRotZTilt(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_STATUS
    /// Subreflector status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSubrefStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSubrefStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASubrefStatus(const unsigned long rca);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_1_OVERTEMP
    /// Amplifier Actuator 1 overtemperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct1Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_2_OVERTEMP
    /// Amplifier Actuator 2 overtemperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct2Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_3_OVERTEMP
    /// Amplifier Actuator 3 overtemperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct3Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_4_OVERTEMP
    /// Amplifier Actuator 4 overtemperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct4Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_5_OVERTEMP
    /// Amplifier Actuator 5 overtemperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct5Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_6_OVERTEMP
    /// Amplifier Actuator 6 overtemperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct6Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_1_DOES_NOT_MOVE
    /// Actuator 1 does not move

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct1DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_2_DOES_NOT_MOVE
    /// Actuator 2 does not move

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct2DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_3_DOES_NOT_MOVE
    /// Actuator 3 does not move

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct3DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_4_DOES_NOT_MOVE
    /// Actuator 4 does not move

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct4DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_5_DOES_NOT_MOVE
    /// Actuator 5 does not move

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct5DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_6_DOES_NOT_MOVE
    /// Actuator 6 does not move

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct6DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_1_NOT_INITIALIZED
    /// Actuator 1 not initialized

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct1NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_2_NOT_INITIALIZED
    /// Actuator 2 not initialized

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct2NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_3_NOT_INITIALIZED
    /// Actuator 3 not initialized

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct3NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_4_NOT_INITIALIZED
    /// Actuator 4 not initialized

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct4NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_5_NOT_INITIALIZED
    /// Actuator 5 not initialized

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct5NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_6_NOT_INITIALIZED
    /// Actuator 6 not initialized

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct6NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_HEXAPOD_IN_INIT_MODE
    /// Hexapod in initializing mode

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefHexapodInInitMode(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_DRIVE_POWER_SUPPLY_FAILURE
    /// Subreflector drive power supply failure

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefDrivePowerSupplyFailure(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_COMM_ERROR_ACU_HPC
    /// communication error ACU-HPC

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefCommErrorAcuHpc(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_DRIVE_ELECTRONICS_AT_APEX_TEMP_TOO_LOW
    /// Drive electronics at apex: temperature too low

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefDriveElectronicsAtApexTempTooLow(ACS::Time& timestamp);

    /// MonitorPoint: OTHER_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getOtherStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getOtherStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAOtherStatus(const unsigned long rca);

    /// MonitorPoint: SMOKE_ALARM_COMPUTER_RACK
    /// Smoke alarm computer rack (F)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmComputerRack(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_RECEIVER_CABIN
    /// Smoke alarm receiver cabin (F)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmReceiverCabin(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_ANTENNA_TOWER
    /// Smoke alarm antenna tower (F)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmAntennaTower(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_UPS_CABINET_EQUIP_PLATFORM
    /// Smoke alarm UPS cabinet / equipment platform (F)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmUpsCabinetEquipPlatform(ACS::Time& timestamp);

    /// MonitorPoint: OVER_TEMPERATURE_RECEIVER_CABIN
    /// Over-temperature receiver cabin (S)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getOverTemperatureReceiverCabin(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_NASMYTH_A
    /// Smoke alarm Nasmyth cabin A

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmNasmythA(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_NASMYTH_B
    /// Smoke alarm Nasmyth cabin B

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmNasmythB(ACS::Time& timestamp);

    /// MonitorPoint: POWER_STATUS
    /// Power status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getPowerStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getPowerStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAPowerStatus(const unsigned long rca);

    /// MonitorPoint: MAIN_SW_POS_ANTENNABASE_PS
    /// MAIN_SW_POS_ANTENNABASE_PS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMainSwPosAntennabasePs(ACS::Time& timestamp);

    /// MonitorPoint: MAIN_CIRCUIT_BREAKER
    /// MAIN_CIRCUIT_BREAKER

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMainCircuitBreaker(ACS::Time& timestamp);

    /// MonitorPoint: LIGHTNING_ARRESTOR_TRIPPED
    /// LIGHTNING_ARRESTOR_TRIPPED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getLightningArrestorTripped(ACS::Time& timestamp);

    /// MonitorPoint: SINGLE_PHASE_INTERLOCK
    /// SINGLE_PHASE_INTERLOCK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSinglePhaseInterlock(ACS::Time& timestamp);

    /// MonitorPoint: REVERSE_PHASE_PROTECTION_RELEASED
    /// REVERSE_PHASE_PROTECTION_RELEASED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getReversePhaseProtectionReleased(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS
    /// CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCircuitBreakerCriticalElectronicBus(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_EQUIPAMENT_CONTAINER
    /// Circuit breaker equipament container

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCircuitBreakerEquipamentContainer(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getUps2Alarms(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getUps2AlarmsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2Alarms(const unsigned long rca);

    /// MonitorPoint: UPS2_ALARMS_MAIN_FAILURE
    /// UPS2 Main failure (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsMainFailure(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_RECTIFIER_FAILURE
    /// UPS2 Rectifier failure (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsRectifierFailure(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_RECTIFIER_FUSE_BLOWN
    /// UPS2 Rectifier fuse blown (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsRectifierFuseBlown(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_THERMAL_IMAGE
    /// UPS2 Thermal image (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsThermalImage(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_RECTIFIER_OUTPUT_VOLTAGE
    /// UPS2 Rectifier output voltage out of tolerance (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsRectifierOutputVoltage(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_UPS_PHASE_SEQUENCE
    /// UPS2 phase sequence not correct (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsUpsPhaseSequence(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_BATTERY_SWITCH_OPEN
    /// UPS2 Battery switch open (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsBatterySwitchOpen(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_BATTERY_DISCHARGED
    /// UPS2 Battery is already discharged (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsBatteryDischarged(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_BATTERY_CAPACITY
    /// UPS2 Battery capacity close to zero (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsBatteryCapacity(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_BATTERY_FAULT
    /// UPS2 Battery fault (fault condition)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsBatteryFault(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_BATTERY_TEST
    /// UPS2 Performing battery test (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsBatteryTest(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_PLL_FAULT
    /// UPS2 PLL fault (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsPllFault(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_INVERTER_VOLTAGE
    /// UPS2 Inverter voltage out of tolerance (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsInverterVoltage(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_OVERLOAD
    /// UPS 2 Overload (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsOverload(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_EMERGENCY_BYPASS_INACTIVE
    /// UPS 2 Emergency bypass (mains) is not active (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsEmergencyBypassInactive(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_LOAD_SUPPLY
    /// UPS 2 Load supplyed by bypass (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsLoadSupply(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_RETRANSFER_BLOCKED
    /// UPS 2 Retransfer between bypass and inverter is blocked 
    /// (fault condition)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsRetransferBlocked(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_MANUAL_BYPASS_SWITCH
    /// UPS 2 Manual bypass switch is closed (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsManualBypassSwitch(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_OUTPUT_CIRCUIT_BREAKER
    /// UPS 2 Output circuit breaker braker is open (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsOutputCircuitBreaker(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_OPTION
    /// UPS 2 Option (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsOption(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_HIGH_TEMPERATURE
    /// UPS 2 High temperature (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsHighTemperature(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_BYPASS_SWITCH_POSITION
    /// UPS 2 Bypass switch is in position bypass (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsBypassSwitchPosition(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_POWER_OFF
    /// UPS 2 Electronic power off (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsPowerOff(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_INVERTER_BRIDGE_BLOCKED
    /// UPS 2 Inverter bridge is blocked due to current (exceeding 
    /// limits) (fauly condition)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsInverterBridgeBlocked(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_SHORT_CIRCUIT
    /// UPS 2 Short circuit (status)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsShortCircuit(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_ALARMS_COMM_ERROR
    /// UPS 2 Communication error ACU-UPS (fault condition)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUps2AlarmsCommError(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_BATTERY_OUTPUT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2BatteryOutput(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2BatteryOutputProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2BatteryOutput(const unsigned long rca);

    /// MonitorPoint: UPS2_BATTERY_VOLTAGE
    /// UPS 2 Battery voltage

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2BatteryVoltage(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2BatteryVoltageProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_BATTERY_CURRENT
    /// UPS 2 Battery current

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2BatteryCurrent(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2BatteryCurrentProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_BATTERY_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2BatteryStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2BatteryStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2BatteryStatus(const unsigned long rca);

    /// MonitorPoint: UPS2_NOMINAL_BATTERY_AUTOMOMY_MINUTES
    /// UPS 2 Battery autonomy in minutes

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2NominalBatteryAutomomyMinutes(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2NominalBatteryAutomomyMinutesProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_NOMINAL_BATTERY_AUTONOMY_PERCENTAGE
    /// UPS 2 Battery Autonomy in percentage

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2NominalBatteryAutonomyPercentage(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2NominalBatteryAutonomyPercentageProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_BYPASS_VOLTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2BypassVolts(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2BypassVoltsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2BypassVolts(const unsigned long rca);

    /// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_1
    /// UPS 2 BYPASS_VOLTAGE_PHASE_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2BypassVoltagePhase1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2BypassVoltagePhase1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_2
    /// UPS 2 BYPASS_VOLTAGE_PHASE_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2BypassVoltagePhase2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2BypassVoltagePhase2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_3
    /// UPS 2 BYPASS_VOLTAGE_PHASE_3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2BypassVoltagePhase3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2BypassVoltagePhase3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_FREQS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2Freqs(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2FreqsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2Freqs(const unsigned long rca);

    /// MonitorPoint: UPS2_BYPASS_FREQUENCY
    /// UPS 2 BYPASS_FREQUENCY

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2BypassFrequency(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2BypassFrequencyProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_INVERTER_FREQUENCY
    /// UPS 2 INVERTER_FREQUENCY

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2InverterFrequency(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2InverterFrequencyProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS1_INVERTER_SW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUps1InverterSw(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUps1InverterSwProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps1InverterSw(const unsigned long rca);

    /// MonitorPoint: UPS2_INVERTER_SW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUps2InverterSw(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUps2InverterSwProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2InverterSw(const unsigned long rca);

    /// MonitorPoint: UPS2_INVERTER_VOLTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2InverterVolts(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2InverterVoltsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2InverterVolts(const unsigned long rca);

    /// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_1
    /// UPS 2 INVERTER_VOLTAGE_PHASE_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2InverterVoltagePhase1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2InverterVoltagePhase1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_2
    /// UPS 2 INVERTER_VOLTAGE_PHASE_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2InverterVoltagePhase2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2InverterVoltagePhase2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_3
    /// UPS 2 INVERTER_VOLTAGE_PHASE_3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2InverterVoltagePhase3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2InverterVoltagePhase3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_OUTPUT_CURRENT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2OutputCurrent(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2OutputCurrentProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2OutputCurrent(const unsigned long rca);

    /// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE1
    /// UPS 2 Output current phase 1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2OutputCurrentPhase1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2OutputCurrentPhase1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE2
    /// UPS 2 Output current phase 2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2OutputCurrentPhase2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2OutputCurrentPhase2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE3
    /// UPS 2 Output current phase 3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2OutputCurrentPhase3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2OutputCurrentPhase3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_OUTPUT_VOLTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2OutputVolts(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUps2OutputVoltsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUps2OutputVolts(const unsigned long rca);

    /// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE1
    /// UPS 2 Output voltage phase 1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2OutputVoltsPhase1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2OutputVoltsPhase1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE2
    /// UPS 2 Output voltage phase 2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2OutputVoltsPhase2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2OutputVoltsPhase2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE3
    /// UPS 2 Output voltage phase 3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getUps2OutputVoltsPhase3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getUps2OutputVoltsPhase3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS_STATUS_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUpsStatus1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUpsStatus1Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsStatus1(const unsigned long rca);

    /// MonitorPoint: UPS_STATUS_2

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUpsStatus2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getUpsStatus2Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsStatus2(const unsigned long rca);

    /// MonitorPoint: AC_STATUS
    /// Air conditioning system status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAcStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAcStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAcStatus(const unsigned long rca);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_1
    /// Air conditioning state system 1

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystem1(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_2
    /// Air conditioning state system 2

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystem2(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_AUTOMATIC
    /// Air conditioning automatic mode

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystemAutomatic(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_IN_LOCAL
    /// Air conditioning in local

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystemInLocal(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_1_ALARM
    /// Air conditioning state system 1 alarm

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystem1Alarm(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_2_ALARM
    /// Air conditioning state system 2 alarm

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystem2Alarm(ACS::Time& timestamp);

    /// MonitorPoint: SHUTTER
    /// Shutter mechanism status.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getShutter(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getShutterProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAShutter(const unsigned long rca);

    /// MonitorPoint: SHUTTER_OPEN_POSITION
    /// Shutter open position (set=open)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getShutterOpenPosition(ACS::Time& timestamp);

    /// MonitorPoint: SHUTTER_CLOSE_POSITION
    /// Shutter close position (set=closed)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getShutterClosePosition(ACS::Time& timestamp);

    /// MonitorPoint: SHUTTER_MOTOR_ON
    /// Motor shutter on (set=switch on)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getShutterMotorOn(ACS::Time& timestamp);

    /// MonitorPoint: SHUTTER_LOCAL_SYSTEM_ERROR
    /// Local system error (set=error)

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getShutterLocalSystemError(ACS::Time& timestamp);

    /// MonitorPoint: SHUTTER_MOTION_TIMEOUT
    /// Shutter motion timeout

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getShutterMotionTimeout(ACS::Time& timestamp);

    /// MonitorPoint: SHUTTER_HANDCRANK_INSERTED
    /// Handcrank inserted shutter not operational

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getShutterHandcrankInserted(ACS::Time& timestamp);

    /// MonitorPoint: CAN_ERROR_0
    /// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getCanError0(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getCanError0Proxy(ACS::Time& timestamp);

    /// MonitorPoint: CAN_ERROR_1
    /// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getCanError1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getCanError1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: CAN_ERROR_2
    /// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getCanError2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getCanError2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: CAN_ERROR_3
    /// ACU error conditions. This monitor point returns an error 
    /// stack which includes an error code and an identification 
    /// of the command causing the error. (dependent monitor point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getCanError3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getCanError3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: SYSTEM_ID_0
    /// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future. (dependent monitor 
    /// point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getSystemId0(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getSystemId0Proxy(ACS::Time& timestamp);

    /// MonitorPoint: SYSTEM_ID_1
    /// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future. (dependent monitor 
    /// point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getSystemId1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getSystemId1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: SYSTEM_ID_2
    /// Get ACU hardware and software identifiers. Currently only 
    /// a software revision level is supported, but could be expanded 
    /// to include hardware identifiers in future. (dependent monitor 
    /// point)

    /// \exception ControlExceptions::INACTErrorEx
    virtual unsigned char getSystemId2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getSystemId2Proxy(ACS::Time& timestamp);

    /// ControlPoint: SUBREF_DELTA_ROT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlSubrefDeltaRot(const std::vector< short >& world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlSubrefDeltaRot(const unsigned long rca);

    /// ControlPoint: SUBREF_ROTATION

    /// Rotation control of subreflector.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlSubrefRotation(const std::vector< short >& world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlSubrefRotation(const unsigned long rca);

    /// ControlPoint: SELFTEST_STOP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setSelftestStop();

    /// Set the RCA for this control point.
    virtual void setControlRCASelftestStop(const unsigned long rca);

    private:
    /// Default constructor. Never instanciate this class directly!
    MountVertexLLamaBase();

    /// ALMA coding standards: copy constructor is disabled.
    MountVertexLLamaBase(const MountVertexLLamaBase&);

    /// ALMA coding standards: assignment operator is disabled.
    MountVertexLLamaBase& operator=(const MountVertexLLamaBase&);

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheCanError;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheSystemId;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheSwRevLevel;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheStowPin;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheSystemStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, unsigned char > > cacheAzEncStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, unsigned char > > cacheElEncStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheElStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            int > > > cacheMetrDeltasDisp;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            int > > > cacheMetrDeltasSpem;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            int > > > cacheMetrDeltasTilt;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            int > > > cacheMetrDeltasTilttemp;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheMetrEquipStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheMetrMode;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps19;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps1a;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps1b;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps1c;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps1d;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps1e;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheMetrTemps1f;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheSubrefRotation;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheSubrefDeltaRot;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheSubrefStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, unsigned char > > cacheOtherStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cachePowerStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            unsigned char > > > cacheUps2Alarms;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2BatteryOutput;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2BatteryStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2BypassVolts;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2Freqs;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2InverterVolts;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2OutputCurrent;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, std::vector<
            short > > > cacheUps2OutputVolts;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, unsigned char > > cacheAcStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexLLamaBase, unsigned char > > cacheShutter;

    /// MonitorPoint: CAN_ERROR

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorCanError;

    /// MonitorPoint: SYSTEM_ID

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSystemId;

    /// MonitorPoint: NUM_TRANS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorNumTrans;

    /// MonitorPoint: SW_REV_LEVEL

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSwRevLevel;

    /// MonitorPoint: SW_REV_LEVEL_MAJOR

    /// Data associated with SW_REV_LEVEL_MAJOR.
    unsigned char valueSwRevLevelMajor;
    ACS::Time timeSwRevLevelMajor;
    unsigned char previousValueSwRevLevelMajor;

    /// MonitorPoint: SW_REV_LEVEL_MINOR

    /// Data associated with SW_REV_LEVEL_MINOR.
    unsigned char valueSwRevLevelMinor;
    ACS::Time timeSwRevLevelMinor;
    unsigned char previousValueSwRevLevelMinor;

    /// MonitorPoint: SW_REV_LEVEL_PATCH

    /// Data associated with SW_REV_LEVEL_PATCH.
    unsigned char valueSwRevLevelPatch;
    ACS::Time timeSwRevLevelPatch;
    unsigned char previousValueSwRevLevelPatch;

    /// MonitorPoint: STOW_PIN

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorStowPin;

    /// MonitorPoint: STOW_PIN_AZ_PIN1_INSERTED

    /// Data associated with STOW_PIN_AZ_PIN1_INSERTED.
    bool valueStowPinAzPin1Inserted;
    ACS::Time timeStowPinAzPin1Inserted;
    bool previousValueStowPinAzPin1Inserted;

    /// MonitorPoint: STOW_PIN_AZ_PIN1_RELEASED

    /// Data associated with STOW_PIN_AZ_PIN1_RELEASED.
    bool valueStowPinAzPin1Released;
    ACS::Time timeStowPinAzPin1Released;
    bool previousValueStowPinAzPin1Released;

    /// MonitorPoint: STOW_PIN_AZ_LOCAL_SYSTEM_ERROR

    /// Data associated with STOW_PIN_AZ_LOCAL_SYSTEM_ERROR.
    bool valueStowPinAzLocalSystemError;
    ACS::Time timeStowPinAzLocalSystemError;
    bool previousValueStowPinAzLocalSystemError;

    /// MonitorPoint: STOW_PIN_AZ_MOTION_TIMEOUT

    /// Data associated with STOW_PIN_AZ_MOTION_TIMEOUT.
    bool valueStowPinAzMotionTimeout;
    ACS::Time timeStowPinAzMotionTimeout;
    bool previousValueStowPinAzMotionTimeout;

    /// MonitorPoint: STOW_PIN_AZ_POSITION_SWITCH_TIMEOUT

    /// Data associated with STOW_PIN_AZ_POSITION_SWITCH_TIMEOUT.
    bool valueStowPinAzPositionSwitchTimeout;
    ACS::Time timeStowPinAzPositionSwitchTimeout;
    bool previousValueStowPinAzPositionSwitchTimeout;

    /// MonitorPoint: STOW_PIN_EL_PIN1_INSERTED

    /// Data associated with STOW_PIN_EL_PIN1_INSERTED.
    bool valueStowPinElPin1Inserted;
    ACS::Time timeStowPinElPin1Inserted;
    bool previousValueStowPinElPin1Inserted;

    /// MonitorPoint: STOW_PIN_EL_PIN1_RELEASED

    /// Data associated with STOW_PIN_EL_PIN1_RELEASED.
    bool valueStowPinElPin1Released;
    ACS::Time timeStowPinElPin1Released;
    bool previousValueStowPinElPin1Released;

    /// MonitorPoint: STOW_PIN_EL_LOCAL_SYSTEM_ERROR

    /// Data associated with STOW_PIN_EL_LOCAL_SYSTEM_ERROR.
    bool valueStowPinElLocalSystemError;
    ACS::Time timeStowPinElLocalSystemError;
    bool previousValueStowPinElLocalSystemError;

    /// MonitorPoint: STOW_PIN_EL_MOTION_TIMEOUT

    /// Data associated with STOW_PIN_EL_MOTION_TIMEOUT.
    bool valueStowPinElMotionTimeout;
    ACS::Time timeStowPinElMotionTimeout;
    bool previousValueStowPinElMotionTimeout;

    /// MonitorPoint: STOW_PIN_EL_POSITION_SWITCH_TIMEOUT

    /// Data associated with STOW_PIN_EL_POSITION_SWITCH_TIMEOUT.
    bool valueStowPinElPositionSwitchTimeout;
    ACS::Time timeStowPinElPositionSwitchTimeout;
    bool previousValueStowPinElPositionSwitchTimeout;

    /// MonitorPoint: SYSTEM_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSystemStatus;

    /// MonitorPoint: EMERGENCY_STOP

    /// Data associated with EMERGENCY_STOP.
    bool valueEmergencyStop;
    ACS::Time timeEmergencyStop;
    bool previousValueEmergencyStop;

    /// MonitorPoint: STAIRWAY_INTERLOCK

    /// Data associated with STAIRWAY_INTERLOCK.
    bool valueStairwayInterlock;
    ACS::Time timeStairwayInterlock;
    bool previousValueStairwayInterlock;

    /// MonitorPoint: HANDLING_INTERLOCK

    /// Data associated with HANDLING_INTERLOCK.
    bool valueHandlingInterlock;
    ACS::Time timeHandlingInterlock;
    bool previousValueHandlingInterlock;

    /// MonitorPoint: SMOKE_ALARM_CONDITION

    /// Data associated with SMOKE_ALARM_CONDITION.
    bool valueSmokeAlarmCondition;
    ACS::Time timeSmokeAlarmCondition;
    bool previousValueSmokeAlarmCondition;

    /// MonitorPoint: ACU_BOOTING_FAILURE

    /// Data associated with ACU_BOOTING_FAILURE.
    bool valueAcuBootingFailure;
    ACS::Time timeAcuBootingFailure;
    bool previousValueAcuBootingFailure;

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_CMD

    /// Data associated with SURVIVAL_STOW_DT_MISSING_CMD.
    bool valueSurvivalStowDtMissingCmd;
    ACS::Time timeSurvivalStowDtMissingCmd;
    bool previousValueSurvivalStowDtMissingCmd;

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_PULSE

    /// Data associated with SURVIVAL_STOW_DT_MISSING_PULSE.
    bool valueSurvivalStowDtMissingPulse;
    ACS::Time timeSurvivalStowDtMissingPulse;
    bool previousValueSurvivalStowDtMissingPulse;

    /// MonitorPoint: TIME_PULSE_MISSING

    /// Data associated with TIME_PULSE_MISSING.
    bool valueTimePulseMissing;
    ACS::Time timeTimePulseMissing;
    bool previousValueTimePulseMissing;

    /// MonitorPoint: SAFE_SWITCH

    /// Data associated with SAFE_SWITCH.
    bool valueSafeSwitch;
    ACS::Time timeSafeSwitch;
    bool previousValueSafeSwitch;

    /// MonitorPoint: POWER_FAILURE

    /// Data associated with POWER_FAILURE.
    bool valuePowerFailure;
    ACS::Time timePowerFailure;
    bool previousValuePowerFailure;

    /// MonitorPoint: LINE_24V_FAILURE

    /// Data associated with LINE_24V_FAILURE.
    bool valueLine24vFailure;
    ACS::Time timeLine24vFailure;
    bool previousValueLine24vFailure;

    /// MonitorPoint: BREAKER_FAILURE

    /// Data associated with BREAKER_FAILURE.
    bool valueBreakerFailure;
    ACS::Time timeBreakerFailure;
    bool previousValueBreakerFailure;

    /// MonitorPoint: ACU_FAN_FAILURE

    /// Data associated with ACU_FAN_FAILURE.
    bool valueAcuFanFailure;
    ACS::Time timeAcuFanFailure;
    bool previousValueAcuFanFailure;

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_PLC

    /// Data associated with COMMUNICATION_ERROR_ACU_PLC.
    bool valueCommunicationErrorAcuPlc;
    ACS::Time timeCommunicationErrorAcuPlc;
    bool previousValueCommunicationErrorAcuPlc;

    /// MonitorPoint: CABINET_OVER_TEMP

    /// Data associated with CABINET_OVER_TEMP.
    bool valueCabinetOverTemp;
    ACS::Time timeCabinetOverTemp;
    bool previousValueCabinetOverTemp;

    /// MonitorPoint: ALMA_E_STOP

    /// Data associated with ALMA_E_STOP.
    bool valueAlmaEStop;
    ACS::Time timeAlmaEStop;
    bool previousValueAlmaEStop;

    /// MonitorPoint: RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP

    /// Data associated with RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP.
    bool valueRampToReceiverCabinNoTiltedUp;
    ACS::Time timeRampToReceiverCabinNoTiltedUp;
    bool previousValueRampToReceiverCabinNoTiltedUp;

    /// MonitorPoint: DOOR_TO_NASMYTH_CABIN_A_OPEN

    /// Data associated with DOOR_TO_NASMYTH_CABIN_A_OPEN.
    bool valueDoorToNasmythCabinAOpen;
    ACS::Time timeDoorToNasmythCabinAOpen;
    bool previousValueDoorToNasmythCabinAOpen;

    /// MonitorPoint: DOOR_TO_NASMYTH_CABIN_B_OPEN

    /// Data associated with DOOR_TO_NASMYTH_CABIN_B_OPEN.
    bool valueDoorToNasmythCabinBOpen;
    ACS::Time timeDoorToNasmythCabinBOpen;
    bool previousValueDoorToNasmythCabinBOpen;

    /// MonitorPoint: ACCESS_INTERLOCK

    /// Data associated with ACCESS_INTERLOCK.
    bool valueAccessInterlock;
    ACS::Time timeAccessInterlock;
    bool previousValueAccessInterlock;

    /// MonitorPoint: RECEIVER_CABIN_DOOR_OPEN

    /// Data associated with RECEIVER_CABIN_DOOR_OPEN.
    bool valueReceiverCabinDoorOpen;
    ACS::Time timeReceiverCabinDoorOpen;
    bool previousValueReceiverCabinDoorOpen;

    /// MonitorPoint: PEDESTAL_DOOR_OPEN

    /// Data associated with PEDESTAL_DOOR_OPEN.
    bool valuePedestalDoorOpen;
    ACS::Time timePedestalDoorOpen;
    bool previousValuePedestalDoorOpen;

    /// MonitorPoint: DRIVE_CABINET_OPEN

    /// Data associated with DRIVE_CABINET_OPEN.
    bool valueDriveCabinetOpen;
    ACS::Time timeDriveCabinetOpen;
    bool previousValueDriveCabinetOpen;

    /// MonitorPoint: EMERGENCY_STOP_CABINET

    /// Data associated with EMERGENCY_STOP_CABINET.
    bool valueEmergencyStopCabinet;
    ACS::Time timeEmergencyStopCabinet;
    bool previousValueEmergencyStopCabinet;

    /// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER

    /// Data associated with EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER.
    bool valueEmergencyStopAzDrivesEquipContainer;
    ACS::Time timeEmergencyStopAzDrivesEquipContainer;
    bool previousValueEmergencyStopAzDrivesEquipContainer;

    /// MonitorPoint: EMERGENCY_STOP_INSIDE_ANTENNA_BASE

    /// Data associated with EMERGENCY_STOP_INSIDE_ANTENNA_BASE.
    bool valueEmergencyStopInsideAntennaBase;
    ACS::Time timeEmergencyStopInsideAntennaBase;
    bool previousValueEmergencyStopInsideAntennaBase;

    /// MonitorPoint: EMERGENCY_STOP_PLATFORM_2_RECV_CABIN

    /// Data associated with EMERGENCY_STOP_PLATFORM_2_RECV_CABIN.
    bool valueEmergencyStopPlatform2RecvCabin;
    ACS::Time timeEmergencyStopPlatform2RecvCabin;
    bool previousValueEmergencyStopPlatform2RecvCabin;

    /// MonitorPoint: EMERGENCY_STOP_NASMYTH_CABINS_AB

    /// Data associated with EMERGENCY_STOP_NASMYTH_CABINS_AB.
    bool valueEmergencyStopNasmythCabinsAb;
    ACS::Time timeEmergencyStopNasmythCabinsAb;
    bool previousValueEmergencyStopNasmythCabinsAb;

    /// MonitorPoint: EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL

    /// Data associated with EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL.
    bool valueEmergencyStopAcessToPlatformOutsidePedestal;
    ACS::Time timeEmergencyStopAcessToPlatformOutsidePedestal;
    bool previousValueEmergencyStopAcessToPlatformOutsidePedestal;

    /// MonitorPoint: EMERGENCY_STOP_PORTABLE_CONTROL_UNIT

    /// Data associated with EMERGENCY_STOP_PORTABLE_CONTROL_UNIT.
    bool valueEmergencyStopPortableControlUnit;
    ACS::Time timeEmergencyStopPortableControlUnit;
    bool previousValueEmergencyStopPortableControlUnit;

    /// MonitorPoint: EMERGENCY_STOP_CONTROL_CONTAINER

    /// Data associated with EMERGENCY_STOP_CONTROL_CONTAINER.
    bool valueEmergencyStopControlContainer;
    ACS::Time timeEmergencyStopControlContainer;
    bool previousValueEmergencyStopControlContainer;

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_FAILURE

    /// Data associated with AUTO_LUBRICATION_SYSTEM_FAILURE.
    bool valueAutoLubricationSystemFailure;
    ACS::Time timeAutoLubricationSystemFailure;
    bool previousValueAutoLubricationSystemFailure;

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_MALFUNCTION

    /// Data associated with AUTO_LUBRICATION_SYSTEM_MALFUNCTION.
    bool valueAutoLubricationSystemMalfunction;
    ACS::Time timeAutoLubricationSystemMalfunction;
    bool previousValueAutoLubricationSystemMalfunction;

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS1

    /// Data associated with COMMUNICATION_ERROR_ACU_UPS1.
    bool valueCommunicationErrorAcuUps1;
    ACS::Time timeCommunicationErrorAcuUps1;
    bool previousValueCommunicationErrorAcuUps1;

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS2

    /// Data associated with COMMUNICATION_ERROR_ACU_UPS2.
    bool valueCommunicationErrorAcuUps2;
    ACS::Time timeCommunicationErrorAcuUps2;
    bool previousValueCommunicationErrorAcuUps2;

    /// MonitorPoint: AZ_ENC_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzEncStatus;

    /// MonitorPoint: AZ_ENC_DOES_NOT_RESPOND

    /// Data associated with AZ_ENC_DOES_NOT_RESPOND.
    bool valueAzEncDoesNotRespond;
    ACS::Time timeAzEncDoesNotRespond;
    bool previousValueAzEncDoesNotRespond;

    /// MonitorPoint: AZ_ENC_POSITION_MEANINGLESS

    /// Data associated with AZ_ENC_POSITION_MEANINGLESS.
    bool valueAzEncPositionMeaningless;
    ACS::Time timeAzEncPositionMeaningless;
    bool previousValueAzEncPositionMeaningless;

    /// MonitorPoint: EL_ENC_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElEncStatus;

    /// MonitorPoint: EL_ENC_DOES_NOT_RESPOND

    /// Data associated with EL_ENC_DOES_NOT_RESPOND.
    bool valueElEncDoesNotRespond;
    ACS::Time timeElEncDoesNotRespond;
    bool previousValueElEncDoesNotRespond;

    /// MonitorPoint: EL_ENC_POSITION_MEANINGLESS

    /// Data associated with EL_ENC_POSITION_MEANINGLESS.
    bool valueElEncPositionMeaningless;
    ACS::Time timeElEncPositionMeaningless;
    bool previousValueElEncPositionMeaningless;

    /// MonitorPoint: EL_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElStatus;

    /// MonitorPoint: EL_PRELIMIT_UP

    /// Data associated with EL_PRELIMIT_UP.
    bool valueElPrelimitUp;
    ACS::Time timeElPrelimitUp;
    bool previousValueElPrelimitUp;

    /// MonitorPoint: EL_PRELIMIT_DOWN

    /// Data associated with EL_PRELIMIT_DOWN.
    bool valueElPrelimitDown;
    ACS::Time timeElPrelimitDown;
    bool previousValueElPrelimitDown;

    /// MonitorPoint: EL_LIMIT_UP

    /// Data associated with EL_LIMIT_UP.
    bool valueElLimitUp;
    ACS::Time timeElLimitUp;
    bool previousValueElLimitUp;

    /// MonitorPoint: EL_LIMIT_DOWN

    /// Data associated with EL_LIMIT_DOWN.
    bool valueElLimitDown;
    ACS::Time timeElLimitDown;
    bool previousValueElLimitDown;

    /// MonitorPoint: EL_EMERGENCY_LIMIT_UP

    /// Data associated with EL_EMERGENCY_LIMIT_UP.
    bool valueElEmergencyLimitUp;
    ACS::Time timeElEmergencyLimitUp;
    bool previousValueElEmergencyLimitUp;

    /// MonitorPoint: EL_EMERGENCY_LIMIT_DOWN

    /// Data associated with EL_EMERGENCY_LIMIT_DOWN.
    bool valueElEmergencyLimitDown;
    ACS::Time timeElEmergencyLimitDown;
    bool previousValueElEmergencyLimitDown;

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT

    /// Data associated with EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT.
    bool valueElSecondEmergencyLimitUpLimit;
    ACS::Time timeElSecondEmergencyLimitUpLimit;
    bool previousValueElSecondEmergencyLimitUpLimit;

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT

    /// Data associated with EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT.
    bool valueElSecondEmergencyLimitDownLimit;
    ACS::Time timeElSecondEmergencyLimitDownLimit;
    bool previousValueElSecondEmergencyLimitDownLimit;

    /// MonitorPoint: EL_SERVO_FAILURE

    /// Data associated with EL_SERVO_FAILURE.
    bool valueElServoFailure;
    ACS::Time timeElServoFailure;
    bool previousValueElServoFailure;

    /// MonitorPoint: EL_OVERSPEED_FAULT

    /// Data associated with EL_OVERSPEED_FAULT.
    bool valueElOverspeedFault;
    ACS::Time timeElOverspeedFault;
    bool previousValueElOverspeedFault;

    /// MonitorPoint: EL_IMMOBILE_FAILURE

    /// Data associated with EL_IMMOBILE_FAILURE.
    bool valueElImmobileFailure;
    ACS::Time timeElImmobileFailure;
    bool previousValueElImmobileFailure;

    /// MonitorPoint: EL_SPEED_ZERO_STATUS

    /// Data associated with EL_SPEED_ZERO_STATUS.
    bool valueElSpeedZeroStatus;
    ACS::Time timeElSpeedZeroStatus;
    bool previousValueElSpeedZeroStatus;

    /// MonitorPoint: EL_STOW_POSITION_STATUS

    /// Data associated with EL_STOW_POSITION_STATUS.
    bool valueElStowPositionStatus;
    ACS::Time timeElStowPositionStatus;
    bool previousValueElStowPositionStatus;

    /// MonitorPoint: EL_ENCODER_FAILURE

    /// Data associated with EL_ENCODER_FAILURE.
    bool valueElEncoderFailure;
    ACS::Time timeElEncoderFailure;
    bool previousValueElEncoderFailure;

    /// MonitorPoint: EL_INSANE_VELOCITY_FEEDBACK

    /// Data associated with EL_INSANE_VELOCITY_FEEDBACK.
    bool valueElInsaneVelocityFeedback;
    ACS::Time timeElInsaneVelocityFeedback;
    bool previousValueElInsaneVelocityFeedback;

    /// MonitorPoint: EL_BRAKE_1_FAILURE

    /// Data associated with EL_BRAKE_1_FAILURE.
    bool valueElBrake1Failure;
    ACS::Time timeElBrake1Failure;
    bool previousValueElBrake1Failure;

    /// MonitorPoint: EL_BRAKE_2_FAILURE

    /// Data associated with EL_BRAKE_2_FAILURE.
    bool valueElBrake2Failure;
    ACS::Time timeElBrake2Failure;
    bool previousValueElBrake2Failure;

    /// MonitorPoint: EL_BRAKE_3_FAILURE

    /// Data associated with EL_BRAKE_3_FAILURE.
    bool valueElBrake3Failure;
    ACS::Time timeElBrake3Failure;
    bool previousValueElBrake3Failure;

    /// MonitorPoint: EL_BRAKE_4_FAILURE

    /// Data associated with EL_BRAKE_4_FAILURE.
    bool valueElBrake4Failure;
    ACS::Time timeElBrake4Failure;
    bool previousValueElBrake4Failure;

    /// MonitorPoint: EL_AMPLIFIER_1_FAILURE

    /// Data associated with EL_AMPLIFIER_1_FAILURE.
    bool valueElAmplifier1Failure;
    ACS::Time timeElAmplifier1Failure;
    bool previousValueElAmplifier1Failure;

    /// MonitorPoint: EL_AMPLIFIER_2_FAILURE

    /// Data associated with EL_AMPLIFIER_2_FAILURE.
    bool valueElAmplifier2Failure;
    ACS::Time timeElAmplifier2Failure;
    bool previousValueElAmplifier2Failure;

    /// MonitorPoint: EL_AMPLIFIER_3_FAILURE

    /// Data associated with EL_AMPLIFIER_3_FAILURE.
    bool valueElAmplifier3Failure;
    ACS::Time timeElAmplifier3Failure;
    bool previousValueElAmplifier3Failure;

    /// MonitorPoint: EL_AMPLIFIER_4_FAILURE

    /// Data associated with EL_AMPLIFIER_4_FAILURE.
    bool valueElAmplifier4Failure;
    ACS::Time timeElAmplifier4Failure;
    bool previousValueElAmplifier4Failure;

    /// MonitorPoint: EL_CAN_COMM_ERROR_TO_SERVO_AMPLIFIERS

    /// Data associated with EL_CAN_COMM_ERROR_TO_SERVO_AMPLIFIERS.
    bool valueElCanCommErrorToServoAmplifiers;
    ACS::Time timeElCanCommErrorToServoAmplifiers;
    bool previousValueElCanCommErrorToServoAmplifiers;

    /// MonitorPoint: EL_BREAKER_FAULT

    /// Data associated with EL_BREAKER_FAULT.
    bool valueElBreakerFault;
    ACS::Time timeElBreakerFault;
    bool previousValueElBreakerFault;

    /// MonitorPoint: EL_MOTOR_1_OVER_TEMP

    /// Data associated with EL_MOTOR_1_OVER_TEMP.
    bool valueElMotor1OverTemp;
    ACS::Time timeElMotor1OverTemp;
    bool previousValueElMotor1OverTemp;

    /// MonitorPoint: EL_MOTOR_2_OVER_TEMP

    /// Data associated with EL_MOTOR_2_OVER_TEMP.
    bool valueElMotor2OverTemp;
    ACS::Time timeElMotor2OverTemp;
    bool previousValueElMotor2OverTemp;

    /// MonitorPoint: EL_MOTOR_3_OVER_TEMP

    /// Data associated with EL_MOTOR_3_OVER_TEMP.
    bool valueElMotor3OverTemp;
    ACS::Time timeElMotor3OverTemp;
    bool previousValueElMotor3OverTemp;

    /// MonitorPoint: EL_MOTOR_4_OVER_TEMP

    /// Data associated with EL_MOTOR_4_OVER_TEMP.
    bool valueElMotor4OverTemp;
    ACS::Time timeElMotor4OverTemp;
    bool previousValueElMotor4OverTemp;

    /// MonitorPoint: EL_REGENERATION_RESISTOR_OVER_TEMP

    /// Data associated with EL_REGENERATION_RESISTOR_OVER_TEMP.
    bool valueElRegenerationResistorOverTemp;
    ACS::Time timeElRegenerationResistorOverTemp;
    bool previousValueElRegenerationResistorOverTemp;

    /// MonitorPoint: EL_SERVO_OSCILLATION_FAILURE

    /// Data associated with EL_SERVO_OSCILLATION_FAILURE.
    bool valueElServoOscillationFailure;
    ACS::Time timeElServoOscillationFailure;
    bool previousValueElServoOscillationFailure;

    /// MonitorPoint: EL_AUXILIARY_ENCODER_FAILURE

    /// Data associated with EL_AUXILIARY_ENCODER_FAILURE.
    bool valueElAuxiliaryEncoderFailure;
    ACS::Time timeElAuxiliaryEncoderFailure;
    bool previousValueElAuxiliaryEncoderFailure;

    /// MonitorPoint: EL_POSITION_DEVIATION

    /// Data associated with EL_POSITION_DEVIATION.
    bool valueElPositionDeviation;
    ACS::Time timeElPositionDeviation;
    bool previousValueElPositionDeviation;

    /// MonitorPoint: EL_AUX_MOTOR_1_2_OFF_STATUS

    /// Data associated with EL_AUX_MOTOR_1_2_OFF_STATUS.
    bool valueElAuxMotor12OffStatus;
    ACS::Time timeElAuxMotor12OffStatus;
    bool previousValueElAuxMotor12OffStatus;

    /// MonitorPoint: EL_AUX_MOTOR_3_4_OFF_STATUS

    /// Data associated with EL_AUX_MOTOR_3_4_OFF_STATUS.
    bool valueElAuxMotor34OffStatus;
    ACS::Time timeElAuxMotor34OffStatus;
    bool previousValueElAuxMotor34OffStatus;

    /// MonitorPoint: EL_GEARBOX_1_OIL_LEVEL_WARNING

    /// Data associated with EL_GEARBOX_1_OIL_LEVEL_WARNING.
    bool valueElGearbox1OilLevelWarning;
    ACS::Time timeElGearbox1OilLevelWarning;
    bool previousValueElGearbox1OilLevelWarning;

    /// MonitorPoint: EL_GEARBOX_2_OIL_LEVEL_WARNING

    /// Data associated with EL_GEARBOX_2_OIL_LEVEL_WARNING.
    bool valueElGearbox2OilLevelWarning;
    ACS::Time timeElGearbox2OilLevelWarning;
    bool previousValueElGearbox2OilLevelWarning;

    /// MonitorPoint: EL_GEARBOX_3_OIL_LEVEL_WARNING

    /// Data associated with EL_GEARBOX_3_OIL_LEVEL_WARNING.
    bool valueElGearbox3OilLevelWarning;
    ACS::Time timeElGearbox3OilLevelWarning;
    bool previousValueElGearbox3OilLevelWarning;

    /// MonitorPoint: EL_GEARBOX_4_OIL_LEVEL_WARNING

    /// Data associated with EL_GEARBOX_4_OIL_LEVEL_WARNING.
    bool valueElGearbox4OilLevelWarning;
    ACS::Time timeElGearbox4OilLevelWarning;
    bool previousValueElGearbox4OilLevelWarning;

    /// MonitorPoint: EL_COMPUTER_DISABLED

    /// Data associated with EL_COMPUTER_DISABLED.
    bool valueElComputerDisabled;
    ACS::Time timeElComputerDisabled;
    bool previousValueElComputerDisabled;

    /// MonitorPoint: EL_AXIS_DISABLED

    /// Data associated with EL_AXIS_DISABLED.
    bool valueElAxisDisabled;
    ACS::Time timeElAxisDisabled;
    bool previousValueElAxisDisabled;

    /// MonitorPoint: EL_HANDHELD_PCU_OPERATION

    /// Data associated with EL_HANDHELD_PCU_OPERATION.
    bool valueElHandheldPcuOperation;
    ACS::Time timeElHandheldPcuOperation;
    bool previousValueElHandheldPcuOperation;

    /// MonitorPoint: EL_AXIS_IN_STOP_STATUS

    /// Data associated with EL_AXIS_IN_STOP_STATUS.
    bool valueElAxisInStopStatus;
    ACS::Time timeElAxisInStopStatus;
    bool previousValueElAxisInStopStatus;

    /// MonitorPoint: METR_DELTAS_DISP

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDeltasDisp;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrDeltasDisp;

    /// MonitorPoint: METR_DELTAS_DISP_AZ_CORRECTION

    /// Data associated with METR_DELTAS_DISP_AZ_CORRECTION.
    int valueMetrDeltasDispAzCorrection;
    ACS::Time timeMetrDeltasDispAzCorrection;
    int previousValueMetrDeltasDispAzCorrection;

    /// MonitorPoint: METR_DELTAS_DISP_EL_CORRECTION

    /// Data associated with METR_DELTAS_DISP_EL_CORRECTION.
    int valueMetrDeltasDispElCorrection;
    ACS::Time timeMetrDeltasDispElCorrection;
    int previousValueMetrDeltasDispElCorrection;

    /// MonitorPoint: METR_DELTAS_SPEM

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDeltasSpem;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrDeltasSpem;

    /// MonitorPoint: METR_DELTAS_SPEM_AZ_CORRECTION

    /// Data associated with METR_DELTAS_SPEM_AZ_CORRECTION.
    int valueMetrDeltasSpemAzCorrection;
    ACS::Time timeMetrDeltasSpemAzCorrection;
    int previousValueMetrDeltasSpemAzCorrection;

    /// MonitorPoint: METR_DELTAS_SPEM_EL_CORRECTION

    /// Data associated with METR_DELTAS_SPEM_EL_CORRECTION.
    int valueMetrDeltasSpemElCorrection;
    ACS::Time timeMetrDeltasSpemElCorrection;
    int previousValueMetrDeltasSpemElCorrection;

    /// MonitorPoint: METR_DELTAS_TILT

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDeltasTilt;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrDeltasTilt;

    /// MonitorPoint: METR_DELTAS_TILT_AZ_CORRECTION

    /// Data associated with METR_DELTAS_TILT_AZ_CORRECTION.
    int valueMetrDeltasTiltAzCorrection;
    ACS::Time timeMetrDeltasTiltAzCorrection;
    int previousValueMetrDeltasTiltAzCorrection;

    /// MonitorPoint: METR_DELTAS_TILT_EL_CORRECTION

    /// Data associated with METR_DELTAS_TILT_EL_CORRECTION.
    int valueMetrDeltasTiltElCorrection;
    ACS::Time timeMetrDeltasTiltElCorrection;
    int previousValueMetrDeltasTiltElCorrection;

    /// MonitorPoint: METR_DELTAS_TILTTEMP

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDeltasTilttemp;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrDeltasTilttemp;

    /// MonitorPoint: METR_DELTAS_TILTTEMP_AZ_CORRECTION

    /// Data associated with METR_DELTAS_TILTTEMP_AZ_CORRECTION.
    int valueMetrDeltasTilttempAzCorrection;
    ACS::Time timeMetrDeltasTilttempAzCorrection;
    int previousValueMetrDeltasTilttempAzCorrection;

    /// MonitorPoint: METR_DELTAS_TILTTEMP_EL_CORRECTION

    /// Data associated with METR_DELTAS_TILTTEMP_EL_CORRECTION.
    int valueMetrDeltasTilttempElCorrection;
    ACS::Time timeMetrDeltasTilttempElCorrection;
    int previousValueMetrDeltasTilttempElCorrection;

    /// MonitorPoint: METR_EQUIP_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrEquipStatus;

    /// MonitorPoint: METR_EQUIP_STATUS_LOCAL_BUS_ERR

    /// Data associated with METR_EQUIP_STATUS_LOCAL_BUS_ERR.
    bool valueMetrEquipStatusLocalBusErr;
    ACS::Time timeMetrEquipStatusLocalBusErr;
    bool previousValueMetrEquipStatusLocalBusErr;

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_1_ERR

    /// Data associated with METR_EQUIP_STATUS_TILTMETER_1_ERR.
    bool valueMetrEquipStatusTiltmeter1Err;
    ACS::Time timeMetrEquipStatusTiltmeter1Err;
    bool previousValueMetrEquipStatusTiltmeter1Err;

    /// MonitorPoint: METR_EQUIP_STATUS_TEMP_SENSOR_ERR

    /// Data associated with METR_EQUIP_STATUS_TEMP_SENSOR_ERR.
    bool valueMetrEquipStatusTempSensorErr;
    ACS::Time timeMetrEquipStatusTempSensorErr;
    bool previousValueMetrEquipStatusTempSensorErr;

    /// MonitorPoint: METR_EQUIP_STATUS_DISPL_SENSOR_ERR

    /// Data associated with METR_EQUIP_STATUS_DISPL_SENSOR_ERR.
    bool valueMetrEquipStatusDisplSensorErr;
    ACS::Time timeMetrEquipStatusDisplSensorErr;
    bool previousValueMetrEquipStatusDisplSensorErr;

    /// MonitorPoint: METR_EQUIP_STATUS_ACU_MMC_COMM_ERR

    /// Data associated with METR_EQUIP_STATUS_ACU_MMC_COMM_ERR.
    bool valueMetrEquipStatusAcuMmcCommErr;
    ACS::Time timeMetrEquipStatusAcuMmcCommErr;
    bool previousValueMetrEquipStatusAcuMmcCommErr;

    /// MonitorPoint: METR_EQUIP_STATUS_METR_DATA_INVALID

    /// Data associated with METR_EQUIP_STATUS_METR_DATA_INVALID.
    bool valueMetrEquipStatusMetrDataInvalid;
    ACS::Time timeMetrEquipStatusMetrDataInvalid;
    bool previousValueMetrEquipStatusMetrDataInvalid;

    /// MonitorPoint: METR_MODE

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrMode;

    /// MonitorPoint: METR_MODE_STANDARD_POINTING_ERROR_MODEL_ENABLED

    /// Data associated with METR_MODE_STANDARD_POINTING_ERROR_MODEL_ENABLED.
    bool valueMetrModeStandardPointingErrorModelEnabled;
    ACS::Time timeMetrModeStandardPointingErrorModelEnabled;
    bool previousValueMetrModeStandardPointingErrorModelEnabled;

    /// MonitorPoint: METR_MODE_TILTMETER_COMP_ENABLED

    /// Data associated with METR_MODE_TILTMETER_COMP_ENABLED.
    bool valueMetrModeTiltmeterCompEnabled;
    ACS::Time timeMetrModeTiltmeterCompEnabled;
    bool previousValueMetrModeTiltmeterCompEnabled;

    /// MonitorPoint: METR_MODE_TILT_OFFSET_TEMP_MODEL_ENABLED

    /// Data associated with METR_MODE_TILT_OFFSET_TEMP_MODEL_ENABLED.
    bool valueMetrModeTiltOffsetTempModelEnabled;
    ACS::Time timeMetrModeTiltOffsetTempModelEnabled;
    bool previousValueMetrModeTiltOffsetTempModelEnabled;

    /// MonitorPoint: METR_MODE_AUTOMATIC_SUBREF_POSN_CORRECTION_ENABLED

    /// Data associated with METR_MODE_AUTOMATIC_SUBREF_POSN_CORRECTION_ENABLED.
    bool valueMetrModeAutomaticSubrefPosnCorrectionEnabled;
    ACS::Time timeMetrModeAutomaticSubrefPosnCorrectionEnabled;
    bool previousValueMetrModeAutomaticSubrefPosnCorrectionEnabled;

    /// MonitorPoint: METR_MODE_MOUNT_ENC_CORRECTION_BASED_ENABLED

    /// Data associated with METR_MODE_MOUNT_ENC_CORRECTION_BASED_ENABLED.
    bool valueMetrModeMountEncCorrectionBasedEnabled;
    ACS::Time timeMetrModeMountEncCorrectionBasedEnabled;
    bool previousValueMetrModeMountEncCorrectionBasedEnabled;

    /// MonitorPoint: METR_TEMPS_19

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps19;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps19;

    /// MonitorPoint: METR_TEMPS_SENSOR_100

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor100;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor100;

    /// Data associated with METR_TEMPS_SENSOR_100.
    float valueMetrTempsSensor100;
    ACS::Time timeMetrTempsSensor100;
    float previousValueMetrTempsSensor100;

    /// MonitorPoint: METR_TEMPS_SENSOR_101

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor101;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor101;

    /// Data associated with METR_TEMPS_SENSOR_101.
    float valueMetrTempsSensor101;
    ACS::Time timeMetrTempsSensor101;
    float previousValueMetrTempsSensor101;

    /// MonitorPoint: METR_TEMPS_SENSOR_102

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor102;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor102;

    /// Data associated with METR_TEMPS_SENSOR_102.
    float valueMetrTempsSensor102;
    ACS::Time timeMetrTempsSensor102;
    float previousValueMetrTempsSensor102;

    /// MonitorPoint: METR_TEMPS_SENSOR_103

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor103;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor103;

    /// Data associated with METR_TEMPS_SENSOR_103.
    float valueMetrTempsSensor103;
    ACS::Time timeMetrTempsSensor103;
    float previousValueMetrTempsSensor103;

    /// MonitorPoint: METR_TEMPS_1A

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps1a;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps1a;

    /// MonitorPoint: METR_TEMPS_SENSOR_104

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor104;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor104;

    /// Data associated with METR_TEMPS_SENSOR_104.
    float valueMetrTempsSensor104;
    ACS::Time timeMetrTempsSensor104;
    float previousValueMetrTempsSensor104;

    /// MonitorPoint: METR_TEMPS_SENSOR_105

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor105;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor105;

    /// Data associated with METR_TEMPS_SENSOR_105.
    float valueMetrTempsSensor105;
    ACS::Time timeMetrTempsSensor105;
    float previousValueMetrTempsSensor105;

    /// MonitorPoint: METR_TEMPS_SENSOR_106

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor106;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor106;

    /// Data associated with METR_TEMPS_SENSOR_106.
    float valueMetrTempsSensor106;
    ACS::Time timeMetrTempsSensor106;
    float previousValueMetrTempsSensor106;

    /// MonitorPoint: METR_TEMPS_SENSOR_107

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor107;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor107;

    /// Data associated with METR_TEMPS_SENSOR_107.
    float valueMetrTempsSensor107;
    ACS::Time timeMetrTempsSensor107;
    float previousValueMetrTempsSensor107;

    /// MonitorPoint: METR_TEMPS_1B

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps1b;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps1b;

    /// MonitorPoint: METR_TEMPS_SENSOR_108

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor108;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor108;

    /// Data associated with METR_TEMPS_SENSOR_108.
    float valueMetrTempsSensor108;
    ACS::Time timeMetrTempsSensor108;
    float previousValueMetrTempsSensor108;

    /// MonitorPoint: METR_TEMPS_SENSOR_109

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor109;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor109;

    /// Data associated with METR_TEMPS_SENSOR_109.
    float valueMetrTempsSensor109;
    ACS::Time timeMetrTempsSensor109;
    float previousValueMetrTempsSensor109;

    /// MonitorPoint: METR_TEMPS_SENSOR_110

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor110;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor110;

    /// Data associated with METR_TEMPS_SENSOR_110.
    float valueMetrTempsSensor110;
    ACS::Time timeMetrTempsSensor110;
    float previousValueMetrTempsSensor110;

    /// MonitorPoint: METR_TEMPS_SENSOR_111

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor111;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor111;

    /// Data associated with METR_TEMPS_SENSOR_111.
    float valueMetrTempsSensor111;
    ACS::Time timeMetrTempsSensor111;
    float previousValueMetrTempsSensor111;

    /// MonitorPoint: METR_TEMPS_1C

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps1c;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps1c;

    /// MonitorPoint: METR_TEMPS_SENSOR_112

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor112;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor112;

    /// Data associated with METR_TEMPS_SENSOR_112.
    float valueMetrTempsSensor112;
    ACS::Time timeMetrTempsSensor112;
    float previousValueMetrTempsSensor112;

    /// MonitorPoint: METR_TEMPS_SENSOR_113

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor113;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor113;

    /// Data associated with METR_TEMPS_SENSOR_113.
    float valueMetrTempsSensor113;
    ACS::Time timeMetrTempsSensor113;
    float previousValueMetrTempsSensor113;

    /// MonitorPoint: METR_TEMPS_SENSOR_114

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor114;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor114;

    /// Data associated with METR_TEMPS_SENSOR_114.
    float valueMetrTempsSensor114;
    ACS::Time timeMetrTempsSensor114;
    float previousValueMetrTempsSensor114;

    /// MonitorPoint: METR_TEMPS_SENSOR_115

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor115;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor115;

    /// Data associated with METR_TEMPS_SENSOR_115.
    float valueMetrTempsSensor115;
    ACS::Time timeMetrTempsSensor115;
    float previousValueMetrTempsSensor115;

    /// MonitorPoint: METR_TEMPS_1D

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps1d;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps1d;

    /// MonitorPoint: METR_TEMPS_SENSOR_116

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor116;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor116;

    /// Data associated with METR_TEMPS_SENSOR_116.
    float valueMetrTempsSensor116;
    ACS::Time timeMetrTempsSensor116;
    float previousValueMetrTempsSensor116;

    /// MonitorPoint: METR_TEMPS_SENSOR_117

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor117;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor117;

    /// Data associated with METR_TEMPS_SENSOR_117.
    float valueMetrTempsSensor117;
    ACS::Time timeMetrTempsSensor117;
    float previousValueMetrTempsSensor117;

    /// MonitorPoint: METR_TEMPS_SENSOR_118

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor118;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor118;

    /// Data associated with METR_TEMPS_SENSOR_118.
    float valueMetrTempsSensor118;
    ACS::Time timeMetrTempsSensor118;
    float previousValueMetrTempsSensor118;

    /// MonitorPoint: METR_TEMPS_SENSOR_119

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor119;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor119;

    /// Data associated with METR_TEMPS_SENSOR_119.
    float valueMetrTempsSensor119;
    ACS::Time timeMetrTempsSensor119;
    float previousValueMetrTempsSensor119;

    /// MonitorPoint: METR_TEMPS_1E

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps1e;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps1e;

    /// MonitorPoint: METR_TEMPS_SENSOR_120

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor120;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor120;

    /// Data associated with METR_TEMPS_SENSOR_120.
    float valueMetrTempsSensor120;
    ACS::Time timeMetrTempsSensor120;
    float previousValueMetrTempsSensor120;

    /// MonitorPoint: METR_TEMPS_SENSOR_121

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor121;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor121;

    /// Data associated with METR_TEMPS_SENSOR_121.
    float valueMetrTempsSensor121;
    ACS::Time timeMetrTempsSensor121;
    float previousValueMetrTempsSensor121;

    /// MonitorPoint: METR_TEMPS_SENSOR_122

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor122;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor122;

    /// Data associated with METR_TEMPS_SENSOR_122.
    float valueMetrTempsSensor122;
    ACS::Time timeMetrTempsSensor122;
    float previousValueMetrTempsSensor122;

    /// MonitorPoint: METR_TEMPS_SENSOR_123

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor123;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor123;

    /// Data associated with METR_TEMPS_SENSOR_123.
    float valueMetrTempsSensor123;
    ACS::Time timeMetrTempsSensor123;
    float previousValueMetrTempsSensor123;

    /// MonitorPoint: METR_TEMPS_1F

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTemps1f;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTemps1f;

    /// MonitorPoint: METR_TEMPS_SENSOR_124

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor124;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor124;

    /// Data associated with METR_TEMPS_SENSOR_124.
    float valueMetrTempsSensor124;
    ACS::Time timeMetrTempsSensor124;
    float previousValueMetrTempsSensor124;

    /// MonitorPoint: METR_TEMPS_SENSOR_125

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor125;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor125;

    /// Data associated with METR_TEMPS_SENSOR_125.
    float valueMetrTempsSensor125;
    ACS::Time timeMetrTempsSensor125;
    float previousValueMetrTempsSensor125;

    /// MonitorPoint: METR_TEMPS_SENSOR_126

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor126;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor126;

    /// Data associated with METR_TEMPS_SENSOR_126.
    float valueMetrTempsSensor126;
    ACS::Time timeMetrTempsSensor126;
    float previousValueMetrTempsSensor126;

    /// MonitorPoint: METR_TEMPS_SENSOR_127

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTempsSensor127;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTempsSensor127;

    /// Data associated with METR_TEMPS_SENSOR_127.
    float valueMetrTempsSensor127;
    ACS::Time timeMetrTempsSensor127;
    float previousValueMetrTempsSensor127;

    /// MonitorPoint: PT_MODEL_COEFF_07

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorPtModelCoeff07;

    /// MonitorPoint: PT_MODEL_COEFF_08

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorPtModelCoeff08;

    /// MonitorPoint: PT_MODEL_COEFF_09

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorPtModelCoeff09;

    /// MonitorPoint: SUBREF_ROTATION

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSubrefRotation;

    /// MonitorPoint: SUBREF_ROTATION_X_TIP

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefRotationXTip;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefRotationXTip;

    /// Data associated with SUBREF_ROTATION_X_TIP.
    double valueSubrefRotationXTip;
    ACS::Time timeSubrefRotationXTip;
    double previousValueSubrefRotationXTip;

    /// MonitorPoint: SUBREF_ROTATION_Y_TILT

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefRotationYTilt;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefRotationYTilt;

    /// Data associated with SUBREF_ROTATION_Y_TILT.
    double valueSubrefRotationYTilt;
    ACS::Time timeSubrefRotationYTilt;
    double previousValueSubrefRotationYTilt;

    /// MonitorPoint: SUBREF_ROTATION_Z_TILT

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefRotationZTilt;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefRotationZTilt;

    /// Data associated with SUBREF_ROTATION_Z_TILT.
    double valueSubrefRotationZTilt;
    ACS::Time timeSubrefRotationZTilt;
    double previousValueSubrefRotationZTilt;

    /// MonitorPoint: SUBREF_DELTA_ROT

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSubrefDeltaRot;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppSubrefDeltaRot;

    /// MonitorPoint: SUBREF_DELTA_ROT_X_TIP

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefDeltaRotXTip;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefDeltaRotXTip;

    /// Data associated with SUBREF_DELTA_ROT_X_TIP.
    double valueSubrefDeltaRotXTip;
    ACS::Time timeSubrefDeltaRotXTip;
    double previousValueSubrefDeltaRotXTip;

    /// MonitorPoint: SUBREF_DELTA_ROT_Y_TILT

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefDeltaRotYTilt;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefDeltaRotYTilt;

    /// Data associated with SUBREF_DELTA_ROT_Y_TILT.
    double valueSubrefDeltaRotYTilt;
    ACS::Time timeSubrefDeltaRotYTilt;
    double previousValueSubrefDeltaRotYTilt;

    /// MonitorPoint: SUBREF_DELTA_ROT_Z_TILT

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefDeltaRotZTilt;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefDeltaRotZTilt;

    /// Data associated with SUBREF_DELTA_ROT_Z_TILT.
    double valueSubrefDeltaRotZTilt;
    ACS::Time timeSubrefDeltaRotZTilt;
    double previousValueSubrefDeltaRotZTilt;

    /// MonitorPoint: SUBREF_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSubrefStatus;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_1_OVERTEMP

    /// Data associated with SUBREF_AMPLIFIER_ACT_1_OVERTEMP.
    bool valueSubrefAmplifierAct1Overtemp;
    ACS::Time timeSubrefAmplifierAct1Overtemp;
    bool previousValueSubrefAmplifierAct1Overtemp;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_2_OVERTEMP

    /// Data associated with SUBREF_AMPLIFIER_ACT_2_OVERTEMP.
    bool valueSubrefAmplifierAct2Overtemp;
    ACS::Time timeSubrefAmplifierAct2Overtemp;
    bool previousValueSubrefAmplifierAct2Overtemp;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_3_OVERTEMP

    /// Data associated with SUBREF_AMPLIFIER_ACT_3_OVERTEMP.
    bool valueSubrefAmplifierAct3Overtemp;
    ACS::Time timeSubrefAmplifierAct3Overtemp;
    bool previousValueSubrefAmplifierAct3Overtemp;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_4_OVERTEMP

    /// Data associated with SUBREF_AMPLIFIER_ACT_4_OVERTEMP.
    bool valueSubrefAmplifierAct4Overtemp;
    ACS::Time timeSubrefAmplifierAct4Overtemp;
    bool previousValueSubrefAmplifierAct4Overtemp;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_5_OVERTEMP

    /// Data associated with SUBREF_AMPLIFIER_ACT_5_OVERTEMP.
    bool valueSubrefAmplifierAct5Overtemp;
    ACS::Time timeSubrefAmplifierAct5Overtemp;
    bool previousValueSubrefAmplifierAct5Overtemp;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_6_OVERTEMP

    /// Data associated with SUBREF_AMPLIFIER_ACT_6_OVERTEMP.
    bool valueSubrefAmplifierAct6Overtemp;
    ACS::Time timeSubrefAmplifierAct6Overtemp;
    bool previousValueSubrefAmplifierAct6Overtemp;

    /// MonitorPoint: SUBREF_ACT_1_DOES_NOT_MOVE

    /// Data associated with SUBREF_ACT_1_DOES_NOT_MOVE.
    bool valueSubrefAct1DoesNotMove;
    ACS::Time timeSubrefAct1DoesNotMove;
    bool previousValueSubrefAct1DoesNotMove;

    /// MonitorPoint: SUBREF_ACT_2_DOES_NOT_MOVE

    /// Data associated with SUBREF_ACT_2_DOES_NOT_MOVE.
    bool valueSubrefAct2DoesNotMove;
    ACS::Time timeSubrefAct2DoesNotMove;
    bool previousValueSubrefAct2DoesNotMove;

    /// MonitorPoint: SUBREF_ACT_3_DOES_NOT_MOVE

    /// Data associated with SUBREF_ACT_3_DOES_NOT_MOVE.
    bool valueSubrefAct3DoesNotMove;
    ACS::Time timeSubrefAct3DoesNotMove;
    bool previousValueSubrefAct3DoesNotMove;

    /// MonitorPoint: SUBREF_ACT_4_DOES_NOT_MOVE

    /// Data associated with SUBREF_ACT_4_DOES_NOT_MOVE.
    bool valueSubrefAct4DoesNotMove;
    ACS::Time timeSubrefAct4DoesNotMove;
    bool previousValueSubrefAct4DoesNotMove;

    /// MonitorPoint: SUBREF_ACT_5_DOES_NOT_MOVE

    /// Data associated with SUBREF_ACT_5_DOES_NOT_MOVE.
    bool valueSubrefAct5DoesNotMove;
    ACS::Time timeSubrefAct5DoesNotMove;
    bool previousValueSubrefAct5DoesNotMove;

    /// MonitorPoint: SUBREF_ACT_6_DOES_NOT_MOVE

    /// Data associated with SUBREF_ACT_6_DOES_NOT_MOVE.
    bool valueSubrefAct6DoesNotMove;
    ACS::Time timeSubrefAct6DoesNotMove;
    bool previousValueSubrefAct6DoesNotMove;

    /// MonitorPoint: SUBREF_ACT_1_NOT_INITIALIZED

    /// Data associated with SUBREF_ACT_1_NOT_INITIALIZED.
    bool valueSubrefAct1NotInitialized;
    ACS::Time timeSubrefAct1NotInitialized;
    bool previousValueSubrefAct1NotInitialized;

    /// MonitorPoint: SUBREF_ACT_2_NOT_INITIALIZED

    /// Data associated with SUBREF_ACT_2_NOT_INITIALIZED.
    bool valueSubrefAct2NotInitialized;
    ACS::Time timeSubrefAct2NotInitialized;
    bool previousValueSubrefAct2NotInitialized;

    /// MonitorPoint: SUBREF_ACT_3_NOT_INITIALIZED

    /// Data associated with SUBREF_ACT_3_NOT_INITIALIZED.
    bool valueSubrefAct3NotInitialized;
    ACS::Time timeSubrefAct3NotInitialized;
    bool previousValueSubrefAct3NotInitialized;

    /// MonitorPoint: SUBREF_ACT_4_NOT_INITIALIZED

    /// Data associated with SUBREF_ACT_4_NOT_INITIALIZED.
    bool valueSubrefAct4NotInitialized;
    ACS::Time timeSubrefAct4NotInitialized;
    bool previousValueSubrefAct4NotInitialized;

    /// MonitorPoint: SUBREF_ACT_5_NOT_INITIALIZED

    /// Data associated with SUBREF_ACT_5_NOT_INITIALIZED.
    bool valueSubrefAct5NotInitialized;
    ACS::Time timeSubrefAct5NotInitialized;
    bool previousValueSubrefAct5NotInitialized;

    /// MonitorPoint: SUBREF_ACT_6_NOT_INITIALIZED

    /// Data associated with SUBREF_ACT_6_NOT_INITIALIZED.
    bool valueSubrefAct6NotInitialized;
    ACS::Time timeSubrefAct6NotInitialized;
    bool previousValueSubrefAct6NotInitialized;

    /// MonitorPoint: SUBREF_HEXAPOD_IN_INIT_MODE

    /// Data associated with SUBREF_HEXAPOD_IN_INIT_MODE.
    bool valueSubrefHexapodInInitMode;
    ACS::Time timeSubrefHexapodInInitMode;
    bool previousValueSubrefHexapodInInitMode;

    /// MonitorPoint: SUBREF_DRIVE_POWER_SUPPLY_FAILURE

    /// Data associated with SUBREF_DRIVE_POWER_SUPPLY_FAILURE.
    bool valueSubrefDrivePowerSupplyFailure;
    ACS::Time timeSubrefDrivePowerSupplyFailure;
    bool previousValueSubrefDrivePowerSupplyFailure;

    /// MonitorPoint: SUBREF_COMM_ERROR_ACU_HPC

    /// Data associated with SUBREF_COMM_ERROR_ACU_HPC.
    bool valueSubrefCommErrorAcuHpc;
    ACS::Time timeSubrefCommErrorAcuHpc;
    bool previousValueSubrefCommErrorAcuHpc;

    /// MonitorPoint: SUBREF_DRIVE_ELECTRONICS_AT_APEX_TEMP_TOO_LOW

    /// Data associated with SUBREF_DRIVE_ELECTRONICS_AT_APEX_TEMP_TOO_LOW.
    bool valueSubrefDriveElectronicsAtApexTempTooLow;
    ACS::Time timeSubrefDriveElectronicsAtApexTempTooLow;
    bool previousValueSubrefDriveElectronicsAtApexTempTooLow;

    /// MonitorPoint: OTHER_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorOtherStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppOtherStatus;

    /// MonitorPoint: SMOKE_ALARM_COMPUTER_RACK

    /// Data associated with SMOKE_ALARM_COMPUTER_RACK.
    bool valueSmokeAlarmComputerRack;
    ACS::Time timeSmokeAlarmComputerRack;
    bool previousValueSmokeAlarmComputerRack;

    /// MonitorPoint: SMOKE_ALARM_RECEIVER_CABIN

    /// Data associated with SMOKE_ALARM_RECEIVER_CABIN.
    bool valueSmokeAlarmReceiverCabin;
    ACS::Time timeSmokeAlarmReceiverCabin;
    bool previousValueSmokeAlarmReceiverCabin;

    /// MonitorPoint: SMOKE_ALARM_ANTENNA_TOWER

    /// Data associated with SMOKE_ALARM_ANTENNA_TOWER.
    bool valueSmokeAlarmAntennaTower;
    ACS::Time timeSmokeAlarmAntennaTower;
    bool previousValueSmokeAlarmAntennaTower;

    /// MonitorPoint: SMOKE_ALARM_UPS_CABINET_EQUIP_PLATFORM

    /// Data associated with SMOKE_ALARM_UPS_CABINET_EQUIP_PLATFORM.
    bool valueSmokeAlarmUpsCabinetEquipPlatform;
    ACS::Time timeSmokeAlarmUpsCabinetEquipPlatform;
    bool previousValueSmokeAlarmUpsCabinetEquipPlatform;

    /// MonitorPoint: OVER_TEMPERATURE_RECEIVER_CABIN

    /// Data associated with OVER_TEMPERATURE_RECEIVER_CABIN.
    bool valueOverTemperatureReceiverCabin;
    ACS::Time timeOverTemperatureReceiverCabin;
    bool previousValueOverTemperatureReceiverCabin;

    /// MonitorPoint: SMOKE_ALARM_NASMYTH_A

    /// Data associated with SMOKE_ALARM_NASMYTH_A.
    bool valueSmokeAlarmNasmythA;
    ACS::Time timeSmokeAlarmNasmythA;
    bool previousValueSmokeAlarmNasmythA;

    /// MonitorPoint: SMOKE_ALARM_NASMYTH_B

    /// Data associated with SMOKE_ALARM_NASMYTH_B.
    bool valueSmokeAlarmNasmythB;
    ACS::Time timeSmokeAlarmNasmythB;
    bool previousValueSmokeAlarmNasmythB;

    /// MonitorPoint: POWER_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorPowerStatus;

    /// MonitorPoint: MAIN_SW_POS_ANTENNABASE_PS

    /// Data associated with MAIN_SW_POS_ANTENNABASE_PS.
    bool valueMainSwPosAntennabasePs;
    ACS::Time timeMainSwPosAntennabasePs;
    bool previousValueMainSwPosAntennabasePs;

    /// MonitorPoint: MAIN_CIRCUIT_BREAKER

    /// Data associated with MAIN_CIRCUIT_BREAKER.
    bool valueMainCircuitBreaker;
    ACS::Time timeMainCircuitBreaker;
    bool previousValueMainCircuitBreaker;

    /// MonitorPoint: LIGHTNING_ARRESTOR_TRIPPED

    /// Data associated with LIGHTNING_ARRESTOR_TRIPPED.
    bool valueLightningArrestorTripped;
    ACS::Time timeLightningArrestorTripped;
    bool previousValueLightningArrestorTripped;

    /// MonitorPoint: SINGLE_PHASE_INTERLOCK

    /// Data associated with SINGLE_PHASE_INTERLOCK.
    bool valueSinglePhaseInterlock;
    ACS::Time timeSinglePhaseInterlock;
    bool previousValueSinglePhaseInterlock;

    /// MonitorPoint: REVERSE_PHASE_PROTECTION_RELEASED

    /// Data associated with REVERSE_PHASE_PROTECTION_RELEASED.
    bool valueReversePhaseProtectionReleased;
    ACS::Time timeReversePhaseProtectionReleased;
    bool previousValueReversePhaseProtectionReleased;

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS

    /// Data associated with CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS.
    bool valueCircuitBreakerCriticalElectronicBus;
    ACS::Time timeCircuitBreakerCriticalElectronicBus;
    bool previousValueCircuitBreakerCriticalElectronicBus;

    /// MonitorPoint: CIRCUIT_BREAKER_EQUIPAMENT_CONTAINER

    /// Data associated with CIRCUIT_BREAKER_EQUIPAMENT_CONTAINER.
    bool valueCircuitBreakerEquipamentContainer;
    ACS::Time timeCircuitBreakerEquipamentContainer;
    bool previousValueCircuitBreakerEquipamentContainer;

    /// MonitorPoint: UPS2_ALARMS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2Alarms;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppUps2Alarms;

    /// MonitorPoint: UPS2_ALARMS_MAIN_FAILURE

    /// Data associated with UPS2_ALARMS_MAIN_FAILURE.
    bool valueUps2AlarmsMainFailure;
    ACS::Time timeUps2AlarmsMainFailure;
    bool previousValueUps2AlarmsMainFailure;

    /// MonitorPoint: UPS2_ALARMS_RECTIFIER_FAILURE

    /// Data associated with UPS2_ALARMS_RECTIFIER_FAILURE.
    bool valueUps2AlarmsRectifierFailure;
    ACS::Time timeUps2AlarmsRectifierFailure;
    bool previousValueUps2AlarmsRectifierFailure;

    /// MonitorPoint: UPS2_ALARMS_RECTIFIER_FUSE_BLOWN

    /// Data associated with UPS2_ALARMS_RECTIFIER_FUSE_BLOWN.
    bool valueUps2AlarmsRectifierFuseBlown;
    ACS::Time timeUps2AlarmsRectifierFuseBlown;
    bool previousValueUps2AlarmsRectifierFuseBlown;

    /// MonitorPoint: UPS2_ALARMS_THERMAL_IMAGE

    /// Data associated with UPS2_ALARMS_THERMAL_IMAGE.
    bool valueUps2AlarmsThermalImage;
    ACS::Time timeUps2AlarmsThermalImage;
    bool previousValueUps2AlarmsThermalImage;

    /// MonitorPoint: UPS2_ALARMS_RECTIFIER_OUTPUT_VOLTAGE

    /// Data associated with UPS2_ALARMS_RECTIFIER_OUTPUT_VOLTAGE.
    bool valueUps2AlarmsRectifierOutputVoltage;
    ACS::Time timeUps2AlarmsRectifierOutputVoltage;
    bool previousValueUps2AlarmsRectifierOutputVoltage;

    /// MonitorPoint: UPS2_ALARMS_UPS_PHASE_SEQUENCE

    /// Data associated with UPS2_ALARMS_UPS_PHASE_SEQUENCE.
    bool valueUps2AlarmsUpsPhaseSequence;
    ACS::Time timeUps2AlarmsUpsPhaseSequence;
    bool previousValueUps2AlarmsUpsPhaseSequence;

    /// MonitorPoint: UPS2_ALARMS_BATTERY_SWITCH_OPEN

    /// Data associated with UPS2_ALARMS_BATTERY_SWITCH_OPEN.
    bool valueUps2AlarmsBatterySwitchOpen;
    ACS::Time timeUps2AlarmsBatterySwitchOpen;
    bool previousValueUps2AlarmsBatterySwitchOpen;

    /// MonitorPoint: UPS2_ALARMS_BATTERY_DISCHARGED

    /// Data associated with UPS2_ALARMS_BATTERY_DISCHARGED.
    bool valueUps2AlarmsBatteryDischarged;
    ACS::Time timeUps2AlarmsBatteryDischarged;
    bool previousValueUps2AlarmsBatteryDischarged;

    /// MonitorPoint: UPS2_ALARMS_BATTERY_CAPACITY

    /// Data associated with UPS2_ALARMS_BATTERY_CAPACITY.
    bool valueUps2AlarmsBatteryCapacity;
    ACS::Time timeUps2AlarmsBatteryCapacity;
    bool previousValueUps2AlarmsBatteryCapacity;

    /// MonitorPoint: UPS2_ALARMS_BATTERY_FAULT

    /// Data associated with UPS2_ALARMS_BATTERY_FAULT.
    bool valueUps2AlarmsBatteryFault;
    ACS::Time timeUps2AlarmsBatteryFault;
    bool previousValueUps2AlarmsBatteryFault;

    /// MonitorPoint: UPS2_ALARMS_BATTERY_TEST

    /// Data associated with UPS2_ALARMS_BATTERY_TEST.
    bool valueUps2AlarmsBatteryTest;
    ACS::Time timeUps2AlarmsBatteryTest;
    bool previousValueUps2AlarmsBatteryTest;

    /// MonitorPoint: UPS2_ALARMS_PLL_FAULT

    /// Data associated with UPS2_ALARMS_PLL_FAULT.
    bool valueUps2AlarmsPllFault;
    ACS::Time timeUps2AlarmsPllFault;
    bool previousValueUps2AlarmsPllFault;

    /// MonitorPoint: UPS2_ALARMS_INVERTER_VOLTAGE

    /// Data associated with UPS2_ALARMS_INVERTER_VOLTAGE.
    bool valueUps2AlarmsInverterVoltage;
    ACS::Time timeUps2AlarmsInverterVoltage;
    bool previousValueUps2AlarmsInverterVoltage;

    /// MonitorPoint: UPS2_ALARMS_OVERLOAD

    /// Data associated with UPS2_ALARMS_OVERLOAD.
    bool valueUps2AlarmsOverload;
    ACS::Time timeUps2AlarmsOverload;
    bool previousValueUps2AlarmsOverload;

    /// MonitorPoint: UPS2_ALARMS_EMERGENCY_BYPASS_INACTIVE

    /// Data associated with UPS2_ALARMS_EMERGENCY_BYPASS_INACTIVE.
    bool valueUps2AlarmsEmergencyBypassInactive;
    ACS::Time timeUps2AlarmsEmergencyBypassInactive;
    bool previousValueUps2AlarmsEmergencyBypassInactive;

    /// MonitorPoint: UPS2_ALARMS_LOAD_SUPPLY

    /// Data associated with UPS2_ALARMS_LOAD_SUPPLY.
    bool valueUps2AlarmsLoadSupply;
    ACS::Time timeUps2AlarmsLoadSupply;
    bool previousValueUps2AlarmsLoadSupply;

    /// MonitorPoint: UPS2_ALARMS_RETRANSFER_BLOCKED

    /// Data associated with UPS2_ALARMS_RETRANSFER_BLOCKED.
    bool valueUps2AlarmsRetransferBlocked;
    ACS::Time timeUps2AlarmsRetransferBlocked;
    bool previousValueUps2AlarmsRetransferBlocked;

    /// MonitorPoint: UPS2_ALARMS_MANUAL_BYPASS_SWITCH

    /// Data associated with UPS2_ALARMS_MANUAL_BYPASS_SWITCH.
    bool valueUps2AlarmsManualBypassSwitch;
    ACS::Time timeUps2AlarmsManualBypassSwitch;
    bool previousValueUps2AlarmsManualBypassSwitch;

    /// MonitorPoint: UPS2_ALARMS_OUTPUT_CIRCUIT_BREAKER

    /// Data associated with UPS2_ALARMS_OUTPUT_CIRCUIT_BREAKER.
    bool valueUps2AlarmsOutputCircuitBreaker;
    ACS::Time timeUps2AlarmsOutputCircuitBreaker;
    bool previousValueUps2AlarmsOutputCircuitBreaker;

    /// MonitorPoint: UPS2_ALARMS_OPTION

    /// Data associated with UPS2_ALARMS_OPTION.
    bool valueUps2AlarmsOption;
    ACS::Time timeUps2AlarmsOption;
    bool previousValueUps2AlarmsOption;

    /// MonitorPoint: UPS2_ALARMS_HIGH_TEMPERATURE

    /// Data associated with UPS2_ALARMS_HIGH_TEMPERATURE.
    bool valueUps2AlarmsHighTemperature;
    ACS::Time timeUps2AlarmsHighTemperature;
    bool previousValueUps2AlarmsHighTemperature;

    /// MonitorPoint: UPS2_ALARMS_BYPASS_SWITCH_POSITION

    /// Data associated with UPS2_ALARMS_BYPASS_SWITCH_POSITION.
    bool valueUps2AlarmsBypassSwitchPosition;
    ACS::Time timeUps2AlarmsBypassSwitchPosition;
    bool previousValueUps2AlarmsBypassSwitchPosition;

    /// MonitorPoint: UPS2_ALARMS_POWER_OFF

    /// Data associated with UPS2_ALARMS_POWER_OFF.
    bool valueUps2AlarmsPowerOff;
    ACS::Time timeUps2AlarmsPowerOff;
    bool previousValueUps2AlarmsPowerOff;

    /// MonitorPoint: UPS2_ALARMS_INVERTER_BRIDGE_BLOCKED

    /// Data associated with UPS2_ALARMS_INVERTER_BRIDGE_BLOCKED.
    bool valueUps2AlarmsInverterBridgeBlocked;
    ACS::Time timeUps2AlarmsInverterBridgeBlocked;
    bool previousValueUps2AlarmsInverterBridgeBlocked;

    /// MonitorPoint: UPS2_ALARMS_SHORT_CIRCUIT

    /// Data associated with UPS2_ALARMS_SHORT_CIRCUIT.
    bool valueUps2AlarmsShortCircuit;
    ACS::Time timeUps2AlarmsShortCircuit;
    bool previousValueUps2AlarmsShortCircuit;

    /// MonitorPoint: UPS2_ALARMS_COMM_ERROR

    /// Data associated with UPS2_ALARMS_COMM_ERROR.
    bool valueUps2AlarmsCommError;
    ACS::Time timeUps2AlarmsCommError;
    bool previousValueUps2AlarmsCommError;

    /// MonitorPoint: UPS2_BATTERY_OUTPUT

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2BatteryOutput;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2BatteryOutput;

    /// MonitorPoint: UPS2_BATTERY_VOLTAGE

    /// Data associated with UPS2_BATTERY_VOLTAGE.
    short valueUps2BatteryVoltage;
    ACS::Time timeUps2BatteryVoltage;
    short previousValueUps2BatteryVoltage;

    /// MonitorPoint: UPS2_BATTERY_CURRENT

    /// Data associated with UPS2_BATTERY_CURRENT.
    short valueUps2BatteryCurrent;
    ACS::Time timeUps2BatteryCurrent;
    short previousValueUps2BatteryCurrent;

    /// MonitorPoint: UPS2_BATTERY_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2BatteryStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2BatteryStatus;

    /// MonitorPoint: UPS2_NOMINAL_BATTERY_AUTOMOMY_MINUTES

    /// Data associated with UPS2_NOMINAL_BATTERY_AUTOMOMY_MINUTES.
    short valueUps2NominalBatteryAutomomyMinutes;
    ACS::Time timeUps2NominalBatteryAutomomyMinutes;
    short previousValueUps2NominalBatteryAutomomyMinutes;

    /// MonitorPoint: UPS2_NOMINAL_BATTERY_AUTONOMY_PERCENTAGE

    /// Data associated with UPS2_NOMINAL_BATTERY_AUTONOMY_PERCENTAGE.
    short valueUps2NominalBatteryAutonomyPercentage;
    ACS::Time timeUps2NominalBatteryAutonomyPercentage;
    short previousValueUps2NominalBatteryAutonomyPercentage;

    /// MonitorPoint: UPS2_BYPASS_VOLTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2BypassVolts;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2BypassVolts;

    /// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_1

    /// Data associated with UPS2_BYPASS_VOLTAGE_PHASE_1.
    short valueUps2BypassVoltagePhase1;
    ACS::Time timeUps2BypassVoltagePhase1;
    short previousValueUps2BypassVoltagePhase1;

    /// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_2

    /// Data associated with UPS2_BYPASS_VOLTAGE_PHASE_2.
    short valueUps2BypassVoltagePhase2;
    ACS::Time timeUps2BypassVoltagePhase2;
    short previousValueUps2BypassVoltagePhase2;

    /// MonitorPoint: UPS2_BYPASS_VOLTAGE_PHASE_3

    /// Data associated with UPS2_BYPASS_VOLTAGE_PHASE_3.
    short valueUps2BypassVoltagePhase3;
    ACS::Time timeUps2BypassVoltagePhase3;
    short previousValueUps2BypassVoltagePhase3;

    /// MonitorPoint: UPS2_FREQS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2Freqs;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2Freqs;

    /// MonitorPoint: UPS2_BYPASS_FREQUENCY

    /// Data associated with UPS2_BYPASS_FREQUENCY.
    short valueUps2BypassFrequency;
    ACS::Time timeUps2BypassFrequency;
    short previousValueUps2BypassFrequency;

    /// MonitorPoint: UPS2_INVERTER_FREQUENCY

    /// Data associated with UPS2_INVERTER_FREQUENCY.
    short valueUps2InverterFrequency;
    ACS::Time timeUps2InverterFrequency;
    short previousValueUps2InverterFrequency;

    /// MonitorPoint: UPS1_INVERTER_SW

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps1InverterSw;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppUps1InverterSw;

    /// MonitorPoint: UPS2_INVERTER_SW

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2InverterSw;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppUps2InverterSw;

    /// MonitorPoint: UPS2_INVERTER_VOLTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2InverterVolts;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2InverterVolts;

    /// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_1

    /// Data associated with UPS2_INVERTER_VOLTAGE_PHASE_1.
    short valueUps2InverterVoltagePhase1;
    ACS::Time timeUps2InverterVoltagePhase1;
    short previousValueUps2InverterVoltagePhase1;

    /// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_2

    /// Data associated with UPS2_INVERTER_VOLTAGE_PHASE_2.
    short valueUps2InverterVoltagePhase2;
    ACS::Time timeUps2InverterVoltagePhase2;
    short previousValueUps2InverterVoltagePhase2;

    /// MonitorPoint: UPS2_INVERTER_VOLTAGE_PHASE_3

    /// Data associated with UPS2_INVERTER_VOLTAGE_PHASE_3.
    short valueUps2InverterVoltagePhase3;
    ACS::Time timeUps2InverterVoltagePhase3;
    short previousValueUps2InverterVoltagePhase3;

    /// MonitorPoint: UPS2_OUTPUT_CURRENT

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2OutputCurrent;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2OutputCurrent;

    /// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE1

    /// Data associated with UPS2_OUTPUT_CURRENT_PHASE1.
    short valueUps2OutputCurrentPhase1;
    ACS::Time timeUps2OutputCurrentPhase1;
    short previousValueUps2OutputCurrentPhase1;

    /// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE2

    /// Data associated with UPS2_OUTPUT_CURRENT_PHASE2.
    short valueUps2OutputCurrentPhase2;
    ACS::Time timeUps2OutputCurrentPhase2;
    short previousValueUps2OutputCurrentPhase2;

    /// MonitorPoint: UPS2_OUTPUT_CURRENT_PHASE3

    /// Data associated with UPS2_OUTPUT_CURRENT_PHASE3.
    short valueUps2OutputCurrentPhase3;
    ACS::Time timeUps2OutputCurrentPhase3;
    short previousValueUps2OutputCurrentPhase3;

    /// MonitorPoint: UPS2_OUTPUT_VOLTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUps2OutputVolts;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUps2OutputVolts;

    /// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE1

    /// Data associated with UPS2_OUTPUT_VOLTS_PHASE1.
    short valueUps2OutputVoltsPhase1;
    ACS::Time timeUps2OutputVoltsPhase1;
    short previousValueUps2OutputVoltsPhase1;

    /// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE2

    /// Data associated with UPS2_OUTPUT_VOLTS_PHASE2.
    short valueUps2OutputVoltsPhase2;
    ACS::Time timeUps2OutputVoltsPhase2;
    short previousValueUps2OutputVoltsPhase2;

    /// MonitorPoint: UPS2_OUTPUT_VOLTS_PHASE3

    /// Data associated with UPS2_OUTPUT_VOLTS_PHASE3.
    short valueUps2OutputVoltsPhase3;
    ACS::Time timeUps2OutputVoltsPhase3;
    short previousValueUps2OutputVoltsPhase3;

    /// MonitorPoint: UPS_STATUS_1

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsStatus1;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppUpsStatus1;

    /// MonitorPoint: UPS_STATUS_2

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsStatus2;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppUpsStatus2;

    /// MonitorPoint: AC_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAcStatus;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_1

    /// Data associated with AIR_CONDITIONING_SYSTEM_1.
    bool valueAirConditioningSystem1;
    ACS::Time timeAirConditioningSystem1;
    bool previousValueAirConditioningSystem1;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_2

    /// Data associated with AIR_CONDITIONING_SYSTEM_2.
    bool valueAirConditioningSystem2;
    ACS::Time timeAirConditioningSystem2;
    bool previousValueAirConditioningSystem2;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_AUTOMATIC

    /// Data associated with AIR_CONDITIONING_SYSTEM_AUTOMATIC.
    bool valueAirConditioningSystemAutomatic;
    ACS::Time timeAirConditioningSystemAutomatic;
    bool previousValueAirConditioningSystemAutomatic;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_IN_LOCAL

    /// Data associated with AIR_CONDITIONING_SYSTEM_IN_LOCAL.
    bool valueAirConditioningSystemInLocal;
    ACS::Time timeAirConditioningSystemInLocal;
    bool previousValueAirConditioningSystemInLocal;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_1_ALARM

    /// Data associated with AIR_CONDITIONING_SYSTEM_1_ALARM.
    bool valueAirConditioningSystem1Alarm;
    ACS::Time timeAirConditioningSystem1Alarm;
    bool previousValueAirConditioningSystem1Alarm;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_2_ALARM

    /// Data associated with AIR_CONDITIONING_SYSTEM_2_ALARM.
    bool valueAirConditioningSystem2Alarm;
    ACS::Time timeAirConditioningSystem2Alarm;
    bool previousValueAirConditioningSystem2Alarm;

    /// MonitorPoint: SHUTTER

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorShutter;

    /// MonitorPoint: SHUTTER_OPEN_POSITION

    /// Data associated with SHUTTER_OPEN_POSITION.
    bool valueShutterOpenPosition;
    ACS::Time timeShutterOpenPosition;
    bool previousValueShutterOpenPosition;

    /// MonitorPoint: SHUTTER_CLOSE_POSITION

    /// Data associated with SHUTTER_CLOSE_POSITION.
    bool valueShutterClosePosition;
    ACS::Time timeShutterClosePosition;
    bool previousValueShutterClosePosition;

    /// MonitorPoint: SHUTTER_MOTOR_ON

    /// Data associated with SHUTTER_MOTOR_ON.
    bool valueShutterMotorOn;
    ACS::Time timeShutterMotorOn;
    bool previousValueShutterMotorOn;

    /// MonitorPoint: SHUTTER_LOCAL_SYSTEM_ERROR

    /// Data associated with SHUTTER_LOCAL_SYSTEM_ERROR.
    bool valueShutterLocalSystemError;
    ACS::Time timeShutterLocalSystemError;
    bool previousValueShutterLocalSystemError;

    /// MonitorPoint: SHUTTER_MOTION_TIMEOUT

    /// Data associated with SHUTTER_MOTION_TIMEOUT.
    bool valueShutterMotionTimeout;
    ACS::Time timeShutterMotionTimeout;
    bool previousValueShutterMotionTimeout;

    /// MonitorPoint: SHUTTER_HANDCRANK_INSERTED

    /// Data associated with SHUTTER_HANDCRANK_INSERTED.
    bool valueShutterHandcrankInserted;
    ACS::Time timeShutterHandcrankInserted;
    bool previousValueShutterHandcrankInserted;

    /// MonitorPoint: CAN_ERROR_0

    /// Data associated with CAN_ERROR_0.
    unsigned char valueCanError0;
    ACS::Time timeCanError0;
    unsigned char previousValueCanError0;

    /// MonitorPoint: CAN_ERROR_1

    /// Data associated with CAN_ERROR_1.
    unsigned char valueCanError1;
    ACS::Time timeCanError1;
    unsigned char previousValueCanError1;

    /// MonitorPoint: CAN_ERROR_2

    /// Data associated with CAN_ERROR_2.
    unsigned char valueCanError2;
    ACS::Time timeCanError2;
    unsigned char previousValueCanError2;

    /// MonitorPoint: CAN_ERROR_3

    /// Data associated with CAN_ERROR_3.
    unsigned char valueCanError3;
    ACS::Time timeCanError3;
    unsigned char previousValueCanError3;

    /// MonitorPoint: SYSTEM_ID_0

    /// Data associated with SYSTEM_ID_0.
    unsigned char valueSystemId0;
    ACS::Time timeSystemId0;
    unsigned char previousValueSystemId0;

    /// MonitorPoint: SYSTEM_ID_1

    /// Data associated with SYSTEM_ID_1.
    unsigned char valueSystemId1;
    ACS::Time timeSystemId1;
    unsigned char previousValueSystemId1;

    /// MonitorPoint: SYSTEM_ID_2

    /// Data associated with SYSTEM_ID_2.
    unsigned char valueSystemId2;
    ACS::Time timeSystemId2;
    unsigned char previousValueSystemId2;

    /// Control point: SUBREF_DELTA_ROT

    /// The relative can address for this control point.
    unsigned long rcaControlCntlSubrefDeltaRot;

    /// Control point: SUBREF_ROTATION

    /// The relative can address for this control point.
    unsigned long rcaControlCntlSubrefRotation;

    /// Control point: SELFTEST_STOP

    /// The relative can address for this control point.
    unsigned long rcaControlSelftestStop;

};
#endif
