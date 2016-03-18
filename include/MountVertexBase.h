#ifndef MountVertexBase_h
#define MountVertexBase_h
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
#include <MountVertexBaseS.h>

// Includes needed for data members.
#include <baciSmartPropertyPointer.h>

#include <vector>
#include <iterator>
#include <string>
#include <boost/shared_ptr.hpp>
#include <linux/types.h>

#include <Utils.h>

#include <MountImpl.h>

/// The MountVertexBase class is the base class for the Antenna Control Unit.
/// <ul>
/// <li> Device:   Antenna Control Unit
/// <li> Assembly: MountVertex
/// <li> Parent:   root
/// <li> Node:     0x0
/// <li> Channel:  2
/// </ul>
/// <p>
/// The purpose of this document is to define the interface between the mount component running in an ABM and the ACU. The ICD provides the interface definitions for all monitor and control points accepted by the ACU as part of the low level functionality which is identified at present for the control of the antenna.
class MountVertexBase
    :

    public MountImpl,

    public virtual POA_Control::MountVertexBase
{
    friend class MountVertexSimBase;

    public:
    /// Destructor
    virtual ~MountVertexBase();

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

    /// MonitorPoint: AZ_AUX_MODE
    /// Get azimuth auxiliary mode (1/2 motors enabled).

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_AZ_AUX_MODE(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr AZ_AUX_MODE();

    /// Get the RCA for monitor point AZ_AUX_MODE.
    virtual unsigned long getMonitorRCAAzAuxMode() const;

    /// MonitorPoint: AZ_ENC_STATUS
    /// Status of azimuth encoder.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_AZ_ENC_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr AZ_ENC_STATUS();

    /// Get the RCA for monitor point AZ_ENC_STATUS.
    virtual unsigned long getMonitorRCAAzEncStatus() const;

    /// MonitorPoint: AZ_STATUS
    /// Status of azimuth axis. Conditions may be fault conditions 
    /// or status information. Fault conditions require the use 
    /// of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_AZ_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr AZ_STATUS();

    /// Get the RCA for monitor point AZ_STATUS.
    virtual unsigned long getMonitorRCAAzStatus() const;

    /// MonitorPoint: AZ_PRELIMIT_CW
    /// PRELIMIT_CW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_PRELIMIT_CW(ACS::Time& timestamp);

    /// MonitorPoint: AZ_PRELIMIT_CCW
    /// PRELIMIT_CCW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_PRELIMIT_CCW(ACS::Time& timestamp);

    /// MonitorPoint: AZ_LIMIT_CW
    /// LIMIT_CW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_LIMIT_CW(ACS::Time& timestamp);

    /// MonitorPoint: AZ_LIMIT_CCW
    /// LIMIT_CCW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_LIMIT_CCW(ACS::Time& timestamp);

    /// MonitorPoint: AZ_EMERGENCY_LIMIT_CW
    /// EMERGENCY_LIMIT_CW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_EMERGENCY_LIMIT_CW(ACS::Time& timestamp);

    /// MonitorPoint: AZ_EMERGENCY_LIMIT_CCW
    /// EMERGENCY_LIMIT_CCW

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_EMERGENCY_LIMIT_CCW(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SECOND_EMERGENCY_LIMIT_CW_LIMIT
    /// SECOND_EMERGENCY_LIMIT_CW_LIMIT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_SECOND_EMERGENCY_LIMIT_CW_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SECOND_EMERGENCY_LIMIT_CCW_LIMIT
    /// SECOND_EMERGENCY_LIMIT_CCW_LIMIT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_SECOND_EMERGENCY_LIMIT_CCW_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SERVO_FAILURE
    /// SERVO_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_SERVO_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_OVERSPEED_FAULT
    /// OVERSPEED_FAULT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_OVERSPEED_FAULT(ACS::Time& timestamp);

    /// MonitorPoint: AZ_IMMOBILE_FAILURE
    /// IMMOBILE_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_IMMOBILE_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SPEED_ZERO_STATUS
    /// SPEED_ZERO_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_SPEED_ZERO_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: AZ_STOW_POSITION_STATUS
    /// STOW_POSITION_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_STOW_POSITION_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENCODER_FAILURE
    /// ENCODER_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_ENCODER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_INSANE_VELOCITY_FEEDBACK
    /// INSANE_VELOCITY_FEEDBACK

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_INSANE_VELOCITY_FEEDBACK(ACS::Time& timestamp);

    /// MonitorPoint: AZ_BRAKE_1_FAILURE
    /// BRAKE_1_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_BRAKE_1_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_BRAKE_2_FAILURE
    /// BRAKE_2_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_BRAKE_2_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AMPLIFIER_1_FAILURE
    /// AMPLIFIER_1_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AMPLIFIER_1_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AMPLIFIER_2_FAILURE
    /// AMPLIFIER_2_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AMPLIFIER_2_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_CAN_COMM_ERROR_TO_SERVO_AMPLIFIER
    /// CAN_COMM_ERROR_TO_SERVO_AMPLIFIER

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_CAN_COMM_ERROR_TO_SERVO_AMPLIFIER(ACS::Time& timestamp);

    /// MonitorPoint: AZ_BREAKER_FAULT
    /// BREAKER_FAULT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_BREAKER_FAULT(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_1_OVER_TEMP
    /// MOTOR_1_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_MOTOR_1_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_2_OVER_TEMP
    /// MOTOR_2_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_MOTOR_2_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: AZ_REGENERATION_RESISTOR_OVER_TEMP
    /// REGENERATION_RESISTOR_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_REGENERATION_RESISTOR_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SERVO_OSCILLATION_FAILURE
    /// SERVO_OSCILLATION_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_SERVO_OSCILLATION_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AUXILIARY_ENCODER_FAILURE
    /// AUXILIARY_ENCODER_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AUXILIARY_ENCODER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AZ_POSITION_DEVIATION
    /// POSITION_DEVIATION

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_POSITION_DEVIATION(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AUX_MOTOR_1_OFF_STATUS
    /// AUX_MOTOR_1_OFF_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AUX_MOTOR_1_OFF_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AUX_MOTOR_2_OFF_STATUS
    /// AUX_MOTOR_2_OFF_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AUX_MOTOR_2_OFF_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: AZ_GEARBOX_1_OIL_LEVEL_WARNING
    /// GEARBOX_1_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_GEARBOX_1_OIL_LEVEL_WARNING(ACS::Time& timestamp);

    /// MonitorPoint: AZ_GEARBOX_2_OIL_LEVEL_WARNING
    /// GEARBOX_2_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_GEARBOX_2_OIL_LEVEL_WARNING(ACS::Time& timestamp);

    /// MonitorPoint: AZ_COMPUTER_DISABLED
    /// COMPUTER_DISABLED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_COMPUTER_DISABLED(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AXIS_DISABLED
    /// AXIS_DISABLED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AXIS_DISABLED(ACS::Time& timestamp);

    /// MonitorPoint: AZ_HANDHELD_PCU_OPERATION
    /// HANDHELD_PCU_OPERATION

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_HANDHELD_PCU_OPERATION(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AXIS_IN_STOP_STATUS
    /// AXIS_IN_STOP_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_AXIS_IN_STOP_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: AZ_FLIP_FLOP_BUFFER_POSITION_INCORRECTLY
    /// FLIP_FLOP_BUFFER_POSITION_INCORRECTLY

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_FLIP_FLOP_BUFFER_POSITION_INCORRECTLY(ACS::Time& timestamp);

    /// MonitorPoint: AZ_HAND_CRANK_INSERTED
    /// HAND_CRANK_INSERTED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AZ_HAND_CRANK_INSERTED(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MODE
    /// Get elevation auxiliary mode (1/2 motors enabled).

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_AUX_MODE(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr EL_AUX_MODE();

    /// Get the RCA for monitor point EL_AUX_MODE.
    virtual unsigned long getMonitorRCAElAuxMode() const;

    /// MonitorPoint: EL_ENC_STATUS
    /// Status of elevation encoders.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_ENC_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr EL_ENC_STATUS();

    /// Get the RCA for monitor point EL_ENC_STATUS.
    virtual unsigned long getMonitorRCAElEncStatus() const;

    /// MonitorPoint: EL_STATUS
    /// Status of elevation axis. Conditions may be fault conditions 
    /// or status information. Fault conditions require the use 
    /// of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_EL_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr EL_STATUS();

    /// Get the RCA for monitor point EL_STATUS.
    virtual unsigned long getMonitorRCAElStatus() const;

    /// MonitorPoint: EL_PRELIMIT_UP
    /// PRELIMIT_UP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_PRELIMIT_UP(ACS::Time& timestamp);

    /// MonitorPoint: EL_PRELIMIT_DOWN
    /// PRELIMIT_DOWN

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_PRELIMIT_DOWN(ACS::Time& timestamp);

    /// MonitorPoint: EL_LIMIT_UP
    /// LIMIT_UP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_LIMIT_UP(ACS::Time& timestamp);

    /// MonitorPoint: EL_LIMIT_DOWN
    /// LIMIT_DOWN

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_LIMIT_DOWN(ACS::Time& timestamp);

    /// MonitorPoint: EL_EMERGENCY_LIMIT_UP
    /// EMERGENCY_LIMIT_UP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_EMERGENCY_LIMIT_UP(ACS::Time& timestamp);

    /// MonitorPoint: EL_EMERGENCY_LIMIT_DOWN
    /// EMERGENCY_LIMIT_DOWN

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_EMERGENCY_LIMIT_DOWN(ACS::Time& timestamp);

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT
    /// SECOND_EMERGENCY_LIMIT_UP_LIMIT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT
    /// SECOND_EMERGENCY_LIMIT_DOWN_LIMIT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: EL_SERVO_FAILURE
    /// SERVO_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_SERVO_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_OVERSPEED_FAULT
    /// OVERSPEED_FAULT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_OVERSPEED_FAULT(ACS::Time& timestamp);

    /// MonitorPoint: EL_IMMOBILE_FAILURE
    /// IMMOBILE_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_IMMOBILE_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_SPEED_ZERO_STATUS
    /// SPEED_ZERO_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_SPEED_ZERO_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: EL_STOW_POSITION_STATUS
    /// STOW_POSITION_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_STOW_POSITION_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENCODER_FAILURE
    /// ENCODER_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_ENCODER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_INSANE_VELOCITY_FEEDBACK
    /// INSANE_VELOCITY_FEEDBACK

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_INSANE_VELOCITY_FEEDBACK(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_1_FAILURE
    /// BRAKE_1_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_BRAKE_1_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_2_FAILURE
    /// BRAKE_2_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_BRAKE_2_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_3_FAILURE
    /// BRAKE_3_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_BRAKE_3_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_4_FAILURE
    /// BRAKE_4_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_BRAKE_4_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_1_FAILURE
    /// AMPLIFIER_1_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AMPLIFIER_1_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_2_FAILURE
    /// AMPLIFIER_2_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AMPLIFIER_2_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_3_FAILURE
    /// AMPLIFIER_1_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AMPLIFIER_3_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_4_FAILURE
    /// AMPLIFIER_2_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AMPLIFIER_4_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_1_OVER_TEMP
    /// MOTOR_1_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_MOTOR_1_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_2_OVER_TEMP
    /// MOTOR_2_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_MOTOR_2_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_3_OVER_TEMP
    /// MOTOR_3_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_MOTOR_3_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_4_OVER_TEMP
    /// MOTOR_4_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_MOTOR_4_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: EL_REGENERATION_RESISTOR_OVER_TEMP
    /// REGENERATION_RESISTOR_OVER_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_REGENERATION_RESISTOR_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: EL_SERVO_OSCILLATION_FAILURE
    /// SERVO_OSCILLATION_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_SERVO_OSCILLATION_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUXILIARY_ENCODER_FAILURE
    /// AUXILIARY_ENCODER_FAILURE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AUXILIARY_ENCODER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: EL_POSITION_DEVIATION
    /// POSITION_DEVIATION

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_POSITION_DEVIATION(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MOTOR_1_2_OFF_STATUS
    /// AUX_MOTOR_1_2_OFF_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AUX_MOTOR_1_2_OFF_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MOTOR_3_4_OFF_STATUS
    /// AUX_MOTOR_3_4_OFF_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AUX_MOTOR_3_4_OFF_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_1_OIL_LEVEL_WARNING
    /// GEARBOX_1_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_GEARBOX_1_OIL_LEVEL_WARNING(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_2_OIL_LEVEL_WARNING
    /// GEARBOX_2_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_GEARBOX_2_OIL_LEVEL_WARNING(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_3_OIL_LEVEL_WARNING
    /// GEARBOX_3_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_GEARBOX_3_OIL_LEVEL_WARNING(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_4_OIL_LEVEL_WARNING
    /// GEARBOX_4_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_GEARBOX_4_OIL_LEVEL_WARNING(ACS::Time& timestamp);

    /// MonitorPoint: EL_COMPUTER_DISABLED
    /// COMPUTER_DISABLED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_COMPUTER_DISABLED(ACS::Time& timestamp);

    /// MonitorPoint: EL_AXIS_DISABLED
    /// AXIS_DISABLED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AXIS_DISABLED(ACS::Time& timestamp);

    /// MonitorPoint: EL_HANDHELD_PCU_OPERATION
    /// HANDHELD_PCU_OPERATION

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_HANDHELD_PCU_OPERATION(ACS::Time& timestamp);

    /// MonitorPoint: EL_AXIS_IN_STOP_STATUS
    /// AXIS_IN_STOP_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EL_AXIS_IN_STOP_STATUS(ACS::Time& timestamp);

    /// MonitorPoint: SYSTEM_STATUS
    /// System status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_SYSTEM_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr SYSTEM_STATUS();

    /// Get the RCA for monitor point SYSTEM_STATUS.
    virtual unsigned long getMonitorRCASystemStatus() const;

    /// MonitorPoint: EMERGENCY_STOP
    /// Emergency Stop. Set means applied

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP(ACS::Time& timestamp);

    /// MonitorPoint: STAIRWAY_INTERLOCK
    /// Stairway Interlock. Set means Applied

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_STAIRWAY_INTERLOCK(ACS::Time& timestamp);

    /// MonitorPoint: HANDLING_INTERLOCK
    /// Handling Interlock. Set meand applied.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_HANDLING_INTERLOCK(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_CONDITION
    /// Smoke Alarm Condition. Set means detected

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SMOKE_ALARM_CONDITION(ACS::Time& timestamp);

    /// MonitorPoint: ACU_BOOTING_FAILURE
    /// ACU Booting Failure. Set means failed

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ACU_BOOTING_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_CMD
    /// Survival stow due to missing commands after idle time. Set 
    /// means applied

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SURVIVAL_STOW_DT_MISSING_CMD(ACS::Time& timestamp);

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_PULSE
    /// Survival stow due to missing time pulse after idele time. 
    /// Set means applied

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SURVIVAL_STOW_DT_MISSING_PULSE(ACS::Time& timestamp);

    /// MonitorPoint: TIME_PULSE_MISSING
    /// time pulse missing. Set means missing.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_TIME_PULSE_MISSING(ACS::Time& timestamp);

    /// MonitorPoint: SAFE_SWITCH
    /// Safe switch status information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SAFE_SWITCH(ACS::Time& timestamp);

    /// MonitorPoint: POWER_FAILURE
    /// Power Failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_POWER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: LINE_24V_FAILURE
    /// 24V failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_LINE_24V_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: BREAKER_FAILURE
    /// breaker failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_BREAKER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: ACU_FAN_FAILURE
    /// ACU fan failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ACU_FAN_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_PLC
    /// communication error ACU_PLC

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_COMMUNICATION_ERROR_ACU_PLC(ACS::Time& timestamp);

    /// MonitorPoint: CABINET_OVER_TEMP
    /// cabinet over temperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_CABINET_OVER_TEMP(ACS::Time& timestamp);

    /// MonitorPoint: ALMA_E_STOP
    /// ALMA e-stop failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALMA_E_STOP(ACS::Time& timestamp);

    /// MonitorPoint: RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP
    /// Ramp to receiver cabin not tilted up status information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP(ACS::Time& timestamp);

    /// MonitorPoint: GATE_PLATFORM_2_OPEN
    /// gate platform 2 open status information status information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_GATE_PLATFORM_2_OPEN(ACS::Time& timestamp);

    /// MonitorPoint: LADDER_TO_PLATFORM_1_RETRACTED
    /// Ladder to platform 1 retracted status information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_LADDER_TO_PLATFORM_1_RETRACTED(ACS::Time& timestamp);

    /// MonitorPoint: RECEIVER_CABIN_DOOR_OPEN
    /// receiver cabin door open status information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_RECEIVER_CABIN_DOOR_OPEN(ACS::Time& timestamp);

    /// MonitorPoint: PEDESTAL_DOOR_OPEN
    /// pedestal door open warning information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_PEDESTAL_DOOR_OPEN(ACS::Time& timestamp);

    /// MonitorPoint: DRIVE_CABINET_OPEN
    /// drive cabinet open warning information

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_DRIVE_CABINET_OPEN(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_CABINET
    /// emergency stop cabinet failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_CABINET(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES
    /// emergency stop AZ drives failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_AZ_DRIVES(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_INSIDE_ANTENNA_BASE
    /// emergency stop inside antenna base failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_INSIDE_ANTENNA_BASE(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PLATFORM_2
    /// emergency stop platform 2 failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_PLATFORM_2(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_LADDER_TO_PLATFORM_1
    /// emergency stop ladder to platform 1 failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_LADDER_TO_PLATFORM_1(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_RECEIVER_CABIN
    /// emergency stop receiver cabin failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_RECEIVER_CABIN(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PORTABLE_CONTROL_UNIT
    /// emergency stop portable control unit failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_PORTABLE_CONTROL_UNIT(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_AT_OUTSIDE_PEDESTAL
    /// emergency stop at outside of pedestal failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_EMERGENCY_STOP_AT_OUTSIDE_PEDESTAL(ACS::Time& timestamp);

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_FAILURE
    /// Auto lubrication system failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AUTO_LUBRICATION_SYSTEM_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_MALFUNCTION
    /// Auto lubrication system malfunction

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AUTO_LUBRICATION_SYSTEM_MALFUNCTION(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS
    /// communication error ACU_UPS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_COMMUNICATION_ERROR_ACU_UPS(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS
    /// Metrology equipment status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_EQUIP_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr METR_EQUIP_STATUS();

    /// Get the RCA for monitor point METR_EQUIP_STATUS.
    virtual unsigned long getMonitorRCAMetrEquipStatus() const;

    /// MonitorPoint: METR_EQUIP_STATUS_LOCAL_BUS_ERR
    /// Local bus error ACU

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_LOCAL_BUS_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_1_ERR
    /// Tiltmeter 1 readout error

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_TILTMETER_1_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_2_ERR
    /// Tiltmeter 2 readout error

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_TILTMETER_2_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_3_ERR
    /// Tiltmeter 3 readout error

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_TILTMETER_3_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TEMP_SENSOR_ERR
    /// Temperature sensor readout error

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_TEMP_SENSOR_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_DISPL_SENSOR_ERR
    /// Displacement sensor readout error

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_DISPL_SENSOR_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_ACU_MMC_COMM_ERR
    /// Communication error ACU-MMC

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_ACU_MMC_COMM_ERR(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_METR_DATA_INVALID
    /// Metrology data is not valid

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_METR_EQUIP_STATUS_METR_DATA_INVALID(ACS::Time& timestamp);

    /// MonitorPoint: POWER_STATUS
    /// Power status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_POWER_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr POWER_STATUS();

    /// Get the RCA for monitor point POWER_STATUS.
    virtual unsigned long getMonitorRCAPowerStatus() const;

    /// MonitorPoint: MAIN_SW_POS_TRANSPORTABLE_PS
    /// MAIN_SW_POS_TRANSPORTABLE_PS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_MAIN_SW_POS_TRANSPORTABLE_PS(ACS::Time& timestamp);

    /// MonitorPoint: MAIN_SW_POS_ANTENNABASE_PS
    /// MAIN_SW_POS_ANTENNABASE_PS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_MAIN_SW_POS_ANTENNABASE_PS(ACS::Time& timestamp);

    /// MonitorPoint: MAIN_CIRCUIT_BREAKER
    /// MAIN_CIRCUIT_BREAKER

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_MAIN_CIRCUIT_BREAKER(ACS::Time& timestamp);

    /// MonitorPoint: LIGHTNING_ARRESTOR_TRIPPED
    /// LIGHTNING_ARRESTOR_TRIPPED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_LIGHTNING_ARRESTOR_TRIPPED(ACS::Time& timestamp);

    /// MonitorPoint: SINGLE_PHASE_INTERLOCK
    /// SINGLE_PHASE_INTERLOCK

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SINGLE_PHASE_INTERLOCK(ACS::Time& timestamp);

    /// MonitorPoint: REVERSE_PHASE_PROTECTION_RELEASED
    /// REVERSE_PHASE_PROTECTION_RELEASED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_REVERSE_PHASE_PROTECTION_RELEASED(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS
    /// CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_CRYOGENIC_BUS
    /// CIRCUIT_BREAKER_CRITICAL_CRYOGENIC_BUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_CIRCUIT_BREAKER_CRITICAL_CRYOGENIC_BUS(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_NON_CRITICAL_BUS
    /// CIRCUIT_BREAKER_NON_CRITICAL_BUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_CIRCUIT_BREAKER_NON_CRITICAL_BUS(ACS::Time& timestamp);

    /// MonitorPoint: AC_STATUS
    /// Air conditioning system status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_AC_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr AC_STATUS();

    /// Get the RCA for monitor point AC_STATUS.
    virtual unsigned long getMonitorRCAAcStatus() const;

    /// MonitorPoint: FAST_SWITCHING_OPERATING_MODE
    /// FAST_SWITCHING_OPERATING_MODE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_FAST_SWITCHING_OPERATING_MODE(ACS::Time& timestamp);

    /// MonitorPoint: NORMAL_OPERATING_MODE
    /// NORMAL_OPERATING_MODE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_NORMAL_OPERATING_MODE(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_MANUAL_MODE
    /// AIR_CONDITIONING_MANUAL_MODE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AIR_CONDITIONING_MANUAL_MODE(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_AUTO_MODE
    /// AIR_CONDITIONING_AUTO_MODE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AIR_CONDITIONING_AUTO_MODE(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_A_ALARM
    /// AIR_CONDITIONING_SYSTEM_A_ALARM

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AIR_CONDITIONING_SYSTEM_A_ALARM(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_B_ALARM
    /// AIR_CONDITIONING_SYSTEM_B_ALARM

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_AIR_CONDITIONING_SYSTEM_B_ALARM(ACS::Time& timestamp);

    /// MonitorPoint: SELFTEST_ACTIVATED
    /// SELFTEST_ACTIVATED

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SELFTEST_ACTIVATED(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS
    /// Alarm status of UPS system. Conditions may be fault conditions 
    /// or status information. Fault conditions require the use 
    /// of the CLEAR_FAULT_CMD to clear, while status information 
    /// will clear when the hardware condition is cleared.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS_ALARMS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr UPS_ALARMS();

    /// Get the RCA for monitor point UPS_ALARMS.
    virtual unsigned long getMonitorRCAUpsAlarms() const;

    /// MonitorPoint: UPS_ALARMS_MAIN_FAILURE
    /// Main failure (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_MAIN_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_FAILURE
    /// Rectifier failure (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_RECTIFIER_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_FUSE_BLOWN
    /// Rectifier fuse blown (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_RECTIFIER_FUSE_BLOWN(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_THERMAL_IMAGE
    /// Thermal image (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_THERMAL_IMAGE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_OUTPUT_VOLTAGE
    /// Rectifier output voltage out of tolerance (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_RECTIFIER_OUTPUT_VOLTAGE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_UPS_PHASE_SEQUENCE
    /// UPS phase sequence not correct (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_UPS_PHASE_SEQUENCE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_SWITCH_OPEN
    /// Battery switch open (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_BATTERY_SWITCH_OPEN(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_DISCHARGED
    /// Battery is already discharged (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_BATTERY_DISCHARGED(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_CAPACITY
    /// Battery capacity close to zero (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_BATTERY_CAPACITY(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_FAULT
    /// Battery fault (fault condition)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_BATTERY_FAULT(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_TEST
    /// Performing battery test (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_BATTERY_TEST(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_PLL_FAULT
    /// PLL fault (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_PLL_FAULT(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_INVERTER_VOLTAGE
    /// Inverter voltage out of tolerance (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_INVERTER_VOLTAGE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_OVERLOAD
    /// Overload (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_OVERLOAD(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_EMERGENCY_BYPASS_INACTIVE
    /// Emergency bypass (mains) is not active (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_EMERGENCY_BYPASS_INACTIVE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_LOAD_SUPPLY
    /// Load supplyed by bypass (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_LOAD_SUPPLY(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RETRANSFER_BLOCKED
    /// Retransfer between bypass and inverter is blocked (fault 
    /// condition)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_RETRANSFER_BLOCKED(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_MANUAL_BYPASS_SWITCH
    /// Manual bypass switch is closed (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_MANUAL_BYPASS_SWITCH(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_OUTPUT_CIRCUIT_BREAKER
    /// Output circuit breaker braker is open (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_OUTPUT_CIRCUIT_BREAKER(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_OPTION
    /// Option (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_OPTION(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_HIGH_TEMPERATURE
    /// High temperature (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_HIGH_TEMPERATURE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BYPASS_SWITCH_POSITION
    /// Bypass switch is in position bypass (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_BYPASS_SWITCH_POSITION(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_POWER_OFF
    /// Electronic power off (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_POWER_OFF(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_INVERTER_BRIDGE_BLOCKED
    /// Inverter bridge is blocked due to current (exceeding limits) 
    /// (fauly condition)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_INVERTER_BRIDGE_BLOCKED(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_SHORT_CIRCUIT
    /// Short circuit (status)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_SHORT_CIRCUIT(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_COMM_ERROR
    /// Communication error ACU-UPS (fault condition)

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_UPS_ALARMS_COMM_ERROR(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BATTERY_OUTPUT
    /// Battery voltage and current

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS_BATTERY_OUTPUT(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS_BATTERY_OUTPUT();

    /// Get the RCA for monitor point UPS_BATTERY_OUTPUT.
    virtual unsigned long getMonitorRCAUpsBatteryOutput() const;

    /// MonitorPoint: UPS_BATTERY_VOLTAGE
    /// Battery voltage

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_UPS_BATTERY_VOLTAGE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BATTERY_CURRENT
    /// Battery current

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_UPS_BATTERY_CURRENT(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BATTERY_STATUS
    /// Nominal battery autonomy

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS_BATTERY_STATUS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS_BATTERY_STATUS();

    /// Get the RCA for monitor point UPS_BATTERY_STATUS.
    virtual unsigned long getMonitorRCAUpsBatteryStatus() const;

    /// MonitorPoint: NOMINAL_BATTERY_AUTOMOMY_MINUTES
    /// Battery autonomy in minutes

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_NOMINAL_BATTERY_AUTOMOMY_MINUTES(ACS::Time& timestamp);

    /// MonitorPoint: NOMINAL_BATTERY_AUTONOMY_PERCENTAGE
    /// Battery Autonomy in percentage

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_NOMINAL_BATTERY_AUTONOMY_PERCENTAGE(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BYPASS_VOLTS
    /// Bypass voltages by phase

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS_BYPASS_VOLTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS_BYPASS_VOLTS();

    /// Get the RCA for monitor point UPS_BYPASS_VOLTS.
    virtual unsigned long getMonitorRCAUpsBypassVolts() const;

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_1
    /// BYPASS_VOLTAGE_PHASE_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_BYPASS_VOLTAGE_PHASE_1(ACS::Time& timestamp);

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_2
    /// BYPASS_VOLTAGE_PHASE_2

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_BYPASS_VOLTAGE_PHASE_2(ACS::Time& timestamp);

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_3
    /// BYPASS_VOLTAGE_PHASE_3

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_BYPASS_VOLTAGE_PHASE_3(ACS::Time& timestamp);

    /// MonitorPoint: UPS_FREQS
    /// Bypass and inverter frequencies

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS_FREQS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS_FREQS();

    /// Get the RCA for monitor point UPS_FREQS.
    virtual unsigned long getMonitorRCAUpsFreqs() const;

    /// MonitorPoint: BYPASS_FREQUENCY
    /// BYPASS_FREQUENCY

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_BYPASS_FREQUENCY(ACS::Time& timestamp);

    /// MonitorPoint: INVERTER_FREQUENCY
    /// INVERTER_FREQUENCY

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_INVERTER_FREQUENCY(ACS::Time& timestamp);

    /// MonitorPoint: UPS_INVERTER_VOLTS
    /// Inverter voltages by phase

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_UPS_INVERTER_VOLTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr UPS_INVERTER_VOLTS();

    /// Get the RCA for monitor point UPS_INVERTER_VOLTS.
    virtual unsigned long getMonitorRCAUpsInverterVolts() const;

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_1
    /// INVERTER_VOLTAGE_PHASE_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_INVERTER_VOLTAGE_PHASE_1(ACS::Time& timestamp);

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_2
    /// INVERTER_VOLTAGE_PHASE_2

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_INVERTER_VOLTAGE_PHASE_2(ACS::Time& timestamp);

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_3
    /// INVERTER_VOLTAGE_PHASE_3

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_INVERTER_VOLTAGE_PHASE_3(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS
    /// Status of auto lubrication system

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_ALS_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr ALS_STATUS();

    /// Get the RCA for monitor point ALS_STATUS.
    virtual unsigned long getMonitorRCAAlsStatus() const;

    /// MonitorPoint: ALS_STATUS_AZ_PUMP_FAIL
    /// Az grease pump failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_AZ_PUMP_FAIL(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_INSUFFICIENT_GREASE
    /// Insufficient grease flow during Az lubrication

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_AZ_INSUFFICIENT_GREASE(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_LOW_GREASE
    /// Low grease level Az pump

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_AZ_LOW_GREASE(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_LUB_ONGOING
    /// Az lubrication ongoing

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_AZ_LUB_ONGOING(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_LUB_SUCCESS
    /// Az lubrication successfully completed

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_AZ_LUB_SUCCESS(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_PUMP_FAIL
    /// El grease pump failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_EL_PUMP_FAIL(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_INSUFFICIENT_GREASE
    /// Insufficient grease flow during El lubrication

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_EL_INSUFFICIENT_GREASE(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_LOW_GREASE
    /// Low grease level El pump

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_EL_LOW_GREASE(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_LUB_ONGOING
    /// El lubrication ongoing

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_EL_LUB_ONGOING(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_LUB_SUCCESS
    /// El lubrication successfully completed

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_ALS_STATUS_EL_LUB_SUCCESS(ACS::Time& timestamp);

    /// MonitorPoint: METR_COEFF_0
    /// Metrlogy model coefficient 0 to be used in autonomous mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Double GET_METR_COEFF_0(ACS::Time& timestamp);

    virtual ACS::ROdouble_ptr METR_COEFF_0();

    /// Get the RCA for monitor point METR_COEFF_0.
    virtual unsigned long getMonitorRCAMetrCoeff0() const;

    /// MonitorPoint: METR_COEFF_1
    /// Metrlogy model coefficient 1 to be used in autonomous mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Double GET_METR_COEFF_1(ACS::Time& timestamp);

    virtual ACS::ROdouble_ptr METR_COEFF_1();

    /// Get the RCA for monitor point METR_COEFF_1.
    virtual unsigned long getMonitorRCAMetrCoeff1() const;

    /// MonitorPoint: SUBREF_CORR_ROT
    /// Subreflector tilt correction applied by the ACU

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_SUBREF_CORR_ROT(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr SUBREF_CORR_ROT();

    /// Get the RCA for monitor point SUBREF_CORR_ROT.
    virtual unsigned long getMonitorRCASubrefCorrRot() const;

    /// MonitorPoint: SUBREF_CORR_ROT_X_TIP
    /// Subreflector tilt correction x tip applied by the ACU

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_SUBREF_CORR_ROT_X_TIP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_CORR_ROT_Y_TILT
    /// Subreflector tilt correction y tip applied by the ACU

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Float GET_SUBREF_CORR_ROT_Y_TILT(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_STATUS
    /// Subreflector status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_SUBREF_STATUS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr SUBREF_STATUS();

    /// Get the RCA for monitor point SUBREF_STATUS.
    virtual unsigned long getMonitorRCASubrefStatus() const;

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_1_OVERTEMP
    /// Amplifier Actuator 1 overtemperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_AMPLIFIER_ACT_1_OVERTEMP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_2_OVERTEMP
    /// Amplifier Actuator 2 overtemperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_AMPLIFIER_ACT_2_OVERTEMP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_3_OVERTEMP
    /// Amplifier Actuator 3 overtemperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_AMPLIFIER_ACT_3_OVERTEMP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_4_OVERTEMP
    /// Amplifier Actuator 4 overtemperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_AMPLIFIER_ACT_4_OVERTEMP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_5_OVERTEMP
    /// Amplifier Actuator 5 overtemperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_AMPLIFIER_ACT_5_OVERTEMP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_6_OVERTEMP
    /// Amplifier Actuator 6 overtemperature

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_AMPLIFIER_ACT_6_OVERTEMP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_1_DOES_NOT_MOVE
    /// Actuator 1 does not move

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_1_DOES_NOT_MOVE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_2_DOES_NOT_MOVE
    /// Actuator 2 does not move

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_2_DOES_NOT_MOVE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_3_DOES_NOT_MOVE
    /// Actuator 3 does not move

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_3_DOES_NOT_MOVE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_4_DOES_NOT_MOVE
    /// Actuator 4 does not move

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_4_DOES_NOT_MOVE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_5_DOES_NOT_MOVE
    /// Actuator 5 does not move

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_5_DOES_NOT_MOVE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_6_DOES_NOT_MOVE
    /// Actuator 6 does not move

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_6_DOES_NOT_MOVE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_1_NOT_INITIALIZED
    /// Actuator 1 not initialized

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_1_NOT_INITIALIZED(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_2_NOT_INITIALIZED
    /// Actuator 2 not initialized

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_2_NOT_INITIALIZED(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_3_NOT_INITIALIZED
    /// Actuator 3 not initialized

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_3_NOT_INITIALIZED(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_4_NOT_INITIALIZED
    /// Actuator 4 not initialized

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_4_NOT_INITIALIZED(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_5_NOT_INITIALIZED
    /// Actuator 5 not initialized

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_5_NOT_INITIALIZED(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_6_NOT_INITIALIZED
    /// Actuator 6 not initialized

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_ACT_6_NOT_INITIALIZED(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_HEXAPOD_IN_INIT_MODE
    /// Hexapod in initializing mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_HEXAPOD_IN_INIT_MODE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_DRIVE_POWER_SUPPLY_FAILURE
    /// Subreflector drive power supply failure

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_DRIVE_POWER_SUPPLY_FAILURE(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_COMM_ERROR_ACU_HPC
    /// communication error ACU-HPC

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SUBREF_COMM_ERROR_ACU_HPC(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_LIMITS
    /// Subreflector Mechanism limit status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_SUBREF_LIMITS(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr SUBREF_LIMITS();

    /// Get the RCA for monitor point SUBREF_LIMITS.
    virtual unsigned long getMonitorRCASubrefLimits() const;

    /// MonitorPoint: SL_ACT_1_NEGATIVE_LIMIT
    /// Actuator 1 Negative Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_1_NEGATIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_2_NEGATIVE_LIMIT
    /// Actuator 2 Negative Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_2_NEGATIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_3_NEGATIVE_LIMIT
    /// Actuator 3 Negative Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_3_NEGATIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_4_NEGATIVE_LIMIT
    /// Actuator 4 Negative Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_4_NEGATIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_5_NEGATIVE_LIMIT
    /// Actuator 5 Negative Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_5_NEGATIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_6_NEGATIVE_LIMIT
    /// Actuator 6 Negative Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_6_NEGATIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_1_POSITIVE_LIMIT
    /// Actuator 1 Positive Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_1_POSITIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_2_POSITIVE_LIMIT
    /// Actuator 2 Positive Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_2_POSITIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_3_POSITIVE_LIMIT
    /// Actuator 3 Positive Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_3_POSITIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_4_POSITIVE_LIMIT
    /// Actuator 4 Positive Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_4_POSITIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_5_POSITIVE_LIMIT
    /// Actuator 5 Positive Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_5_POSITIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_6_POSITIVE_LIMIT
    /// Actuator 6 Positive Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_ACT_6_POSITIVE_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_X_LIMIT
    /// Hexapod Negative X Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_NEGATIVE_X_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_X_LIMIT
    /// Hexapod Positive X Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_POSITIVE_X_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_Y_LIMIT
    /// Hexapod Negative Y Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_NEGATIVE_Y_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_Y_LIMIT
    /// Hexapod Positive Y Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_POSITIVE_Y_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_Z_LIMIT
    /// Hexapod Negative Z Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_NEGATIVE_Z_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_Z_LIMIT
    /// Hexapod Positive Z Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_POSITIVE_Z_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_X_LIMIT
    /// Hexapod Negative THETA X Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_NEGATIVE_THETA_X_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_X_LIMIT
    /// Hexapod Positive  THETA X Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_POSITIVE_THETA_X_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_Y_LIMIT
    /// Hexapod Negative  THETA Y Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_NEGATIVE_THETA_Y_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_Y_LIMIT
    /// Hexapod Positive THETA  Y Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_POSITIVE_THETA_Y_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_Z_LIMIT
    /// Hexapod Negative  THETA Z Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_NEGATIVE_THETA_Z_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_Z_LIMIT
    /// Hexapod Positive THETA Z Limit

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXA_POSITIVE_THETA_Z_LIMIT(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_1
    /// Hexapod Vertical Collision Switch 1 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_1(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_2
    /// Hexapod Vertical Collision Switch 2 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_2(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_3
    /// Hexapod Vertical Collision Switch 3 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_3(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_4
    /// Hexapod Vertical Collision Switch 4 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_4(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_5
    /// Hexapod Vertical Collision Switch 5 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_5(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_6
    /// Hexapod Vertical Collision Switch 6 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_6(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_7
    /// Hexapod Vertical Collision Switch 7 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_7(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_8
    /// Hexapod Vertical Collision Switch 8 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_8(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_1
    /// Hexapod Horizontal Collision Switch 1 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_1(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_2
    /// Hexapod Horizontal Collision Switch 2 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_2(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_3
    /// Hexapod Horizontal Collision Switch 3 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_3(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_4
    /// Hexapod Horizontal Collision Switch 4 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_4(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_5
    /// Hexapod Horizontal Collision Switch 5 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_5(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_6
    /// Hexapod Horizontal Collision Switch 6 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_6(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_7
    /// Hexapod Horizontal Collision Switch 7 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_7(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_8
    /// Hexapod Horizontal Collision Switch 8 Encountered Status

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Boolean GET_SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_8(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS
    /// Motor currents in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_EL_MOTOR_CURRENTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr EL_MOTOR_CURRENTS();

    /// Get the RCA for monitor point EL_MOTOR_CURRENTS.
    virtual unsigned long getMonitorRCAElMotorCurrents() const;

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR1
    /// Motor current in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_CURRENTS_MOTOR1(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR2
    /// Motor current in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_CURRENTS_MOTOR2(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR3
    /// Motor current in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_CURRENTS_MOTOR3(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR4
    /// Motor current in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_CURRENTS_MOTOR4(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TEMPS
    /// Motor temperatures in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_EL_MOTOR_TEMPS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr EL_MOTOR_TEMPS();

    /// Get the RCA for monitor point EL_MOTOR_TEMPS.
    virtual unsigned long getMonitorRCAElMotorTemps() const;

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR1
    /// Motor temperature in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TEMPS_MOTOR1(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR2
    /// Motor temperature in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TEMPS_MOTOR2(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR3
    /// Motor temperature in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TEMPS_MOTOR3(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR4
    /// Motor temperature in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TEMPS_MOTOR4(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE
    /// Motor torques in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_EL_MOTOR_TORQUE(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr EL_MOTOR_TORQUE();

    /// Get the RCA for monitor point EL_MOTOR_TORQUE.
    virtual unsigned long getMonitorRCAElMotorTorque() const;

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR1
    /// Motor torque in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TORQUE_MOTOR1(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR2
    /// Motor torque in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TORQUE_MOTOR2(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR3
    /// Motor torque in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TORQUE_MOTOR3(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR4
    /// Motor torque in all elevation axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_EL_MOTOR_TORQUE_MOTOR4(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TEMP
    /// Get Az and El total delta corecton applied by the metrology 
    /// system due to temperature variations

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_DELTAS_TEMP(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_DELTAS_TEMP();

    /// Get the RCA for monitor point METR_DELTAS_TEMP.
    virtual unsigned long getMonitorRCAMetrDeltasTemp() const;

    /// MonitorPoint: METR_DISPL_0
    /// Metrology system displacement sensor readouts. This assumes 
    /// that sensors measuring displacement will be included in 
    /// the design.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_METR_DISPL_0(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr METR_DISPL_0();

    /// Get the RCA for monitor point METR_DISPL_0.
    virtual unsigned long getMonitorRCAMetrDispl0() const;

    /// MonitorPoint: METR_DISPL_1
    /// Metrology system displacement sensor readouts. This assumes 
    /// that sensors measuring displacement will be included in 
    /// the design.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_METR_DISPL_1(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr METR_DISPL_1();

    /// Get the RCA for monitor point METR_DISPL_1.
    virtual unsigned long getMonitorRCAMetrDispl1() const;

    /// MonitorPoint: METR_DISPL_2
    /// Metrology system displacement sensor readouts. This assumes 
    /// that sensors measuring displacement will be included in 
    /// the design.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_METR_DISPL_2(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr METR_DISPL_2();

    /// Get the RCA for monitor point METR_DISPL_2.
    virtual unsigned long getMonitorRCAMetrDispl2() const;

    /// MonitorPoint: METR_DISPL_3
    /// Metrology system displacement sensor readouts. This assumes 
    /// that sensors measuring displacement will be included in 
    /// the design.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Long GET_METR_DISPL_3(ACS::Time& timestamp);

    virtual ACS::ROlong_ptr METR_DISPL_3();

    /// Get the RCA for monitor point METR_DISPL_3.
    virtual unsigned long getMonitorRCAMetrDispl3() const;

    /// MonitorPoint: AZ_MOTOR_CURRENTS
    /// Motor currents in all azimuth axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_AZ_MOTOR_CURRENTS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr AZ_MOTOR_CURRENTS();

    /// Get the RCA for monitor point AZ_MOTOR_CURRENTS.
    virtual unsigned long getMonitorRCAAzMotorCurrents() const;

    /// MonitorPoint: AZ_MOTOR_TEMPS
    /// Motor temperatures in all azimuth axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_AZ_MOTOR_TEMPS(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr AZ_MOTOR_TEMPS();

    /// Get the RCA for monitor point AZ_MOTOR_TEMPS.
    virtual unsigned long getMonitorRCAAzMotorTemps() const;

    /// MonitorPoint: AZ_MOTOR_TORQUE
    /// Motor torques in all azimuth axis drive motors.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_AZ_MOTOR_TORQUE(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr AZ_MOTOR_TORQUE();

    /// Get the RCA for monitor point AZ_MOTOR_TORQUE.
    virtual unsigned long getMonitorRCAAzMotorTorque() const;

    /// MonitorPoint: METR_MODE
    /// Get metrology mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_MODE(ACS::Time& timestamp);

    virtual ACS::ROpattern_ptr METR_MODE();

    /// Get the RCA for monitor point METR_MODE.
    virtual unsigned long getMonitorRCAMetrMode() const;

    /// MonitorPoint: METR_TILT_0
    /// Get metrology system tiltmeter 0 readout

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TILT_0(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TILT_0();

    /// Get the RCA for monitor point METR_TILT_0.
    virtual unsigned long getMonitorRCAMetrTilt0() const;

    /// MonitorPoint: METR_TILT_1
    /// Get metrology system tiltmeter 1 readout

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TILT_1(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TILT_1();

    /// Get the RCA for monitor point METR_TILT_1.
    virtual unsigned long getMonitorRCAMetrTilt1() const;

    /// MonitorPoint: METR_TILT_2
    /// Get metrology system tiltmeter 2 readout

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual Control::LongSeq*
        GET_METR_TILT_2(ACS::Time& timestamp);

    virtual ACS::ROlongSeq_ptr METR_TILT_2();

    /// Get the RCA for monitor point METR_TILT_2.
    virtual unsigned long getMonitorRCAMetrTilt2() const;

    /// Get the RCA for monitor point SUBREF_ROTATION.
    virtual unsigned long getMonitorRCASubrefRotation() const;

    /// MonitorPoint: SUBREF_ROTATION_X_TIP
    /// Subreflector rotation x tip

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Double GET_SUBREF_ROTATION_X_TIP(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ROTATION_Y_TILT
    /// Subreflector rotation y tilt

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual CORBA::Double GET_SUBREF_ROTATION_Y_TILT(ACS::Time& timestamp);

    /// Get the RCA for control point AZ_AUX_MODE.
    virtual unsigned long getControlRCACntlAzAuxMode() const;

    /// Get the RCA for control point EL_AUX_MODE.
    virtual unsigned long getControlRCACntlElAuxMode() const;

    /// ControlPoint: INIT_SUBREF_CMD
    /// Initialize the subreflector system and cause the incremental 
    /// encoders to be calibrated.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_INIT_SUBREF_CMD(CORBA::Long world);

    /// Get the RCA for control point INIT_SUBREF_CMD.
    virtual unsigned long getControlRCAInitSubrefCmd() const;

    /// ControlPoint: ALS
    /// Execute autolubrication function.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_ALS(CORBA::Long world);

    /// Get the RCA for control point ALS.
    virtual unsigned long getControlRCACntlAls() const;

    /// ControlPoint: REC_CAB_TEMP
    /// Set receiver cabin temperature.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_REC_CAB_TEMP(CORBA::Long world);

    /// Get the RCA for control point REC_CAB_TEMP.
    virtual unsigned long getControlRCACntlRecCabTemp() const;

    /// ControlPoint: METR_COEFF_0
    /// Metrology model coefficient 0 to be used in autonomous mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_METR_COEFF_0(CORBA::Double world);

    /// Get the RCA for control point METR_COEFF_0.
    virtual unsigned long getControlRCACntlMetrCoeff0() const;

    /// ControlPoint: METR_COEFF_1
    /// Metrology model coefficient 1 to be used in autonomous mode

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx
    virtual void SET_METR_COEFF_1(CORBA::Double world);

    /// Get the RCA for control point METR_COEFF_1.
    virtual unsigned long getControlRCACntlMetrCoeff1() const;

    protected:
    /// Constructor. Never instanciate this class directly!
    MountVertexBase(const ACE_CString& name, maci::ContainerServices* cs);

    /// MonitorPoint: AZ_AUX_MODE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAzAuxMode(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAzAuxModeProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzAuxMode(const unsigned long rca);

    /// MonitorPoint: AZ_ENC_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAzEncStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAzEncStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzEncStatus(const unsigned long rca);

    /// MonitorPoint: AZ_ENC_READ_HEAD_ERROR
    /// byte 0, bit 0 Encoder read head error.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncReadHeadError(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_EEU_TIMING_ERROR
    /// byte 0, bit 2 EEU timing error

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncEeuTimingError(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_EEU_DOES_NOT_RESPOND
    /// byte 0, bit 3 EEU does not respond.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncEeuDoesNotRespond(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_EEU_DATA_ERROR
    /// byte 0, bit 4 EEU data error.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncEeuDataError(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_POSITION_MEANINGLESS
    /// byte 0, bit 5 Position read from encoder does not make sense.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncPositionMeaningless(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENC_EEU_DUAL_HEAD_MODE
    /// byte 0, bit 7 EEU dual head mode

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncEeuDualHeadMode(ACS::Time& timestamp);

    /// MonitorPoint: AZ_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzStatus(const unsigned long rca);

    /// MonitorPoint: AZ_PRELIMIT_CW

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzPrelimitCw(ACS::Time& timestamp);

    /// MonitorPoint: AZ_PRELIMIT_CCW

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzPrelimitCcw(ACS::Time& timestamp);

    /// MonitorPoint: AZ_LIMIT_CW

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzLimitCw(ACS::Time& timestamp);

    /// MonitorPoint: AZ_LIMIT_CCW

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzLimitCcw(ACS::Time& timestamp);

    /// MonitorPoint: AZ_EMERGENCY_LIMIT_CW

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEmergencyLimitCw(ACS::Time& timestamp);

    /// MonitorPoint: AZ_EMERGENCY_LIMIT_CCW

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEmergencyLimitCcw(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SECOND_EMERGENCY_LIMIT_CW_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzSecondEmergencyLimitCwLimit(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SECOND_EMERGENCY_LIMIT_CCW_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzSecondEmergencyLimitCcwLimit(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SERVO_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzServoFailure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_OVERSPEED_FAULT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzOverspeedFault(ACS::Time& timestamp);

    /// MonitorPoint: AZ_IMMOBILE_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzImmobileFailure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SPEED_ZERO_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzSpeedZeroStatus(ACS::Time& timestamp);

    /// MonitorPoint: AZ_STOW_POSITION_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzStowPositionStatus(ACS::Time& timestamp);

    /// MonitorPoint: AZ_ENCODER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzEncoderFailure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_INSANE_VELOCITY_FEEDBACK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzInsaneVelocityFeedback(ACS::Time& timestamp);

    /// MonitorPoint: AZ_BRAKE_1_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzBrake1Failure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_BRAKE_2_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzBrake2Failure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AMPLIFIER_1_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAmplifier1Failure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AMPLIFIER_2_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAmplifier2Failure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_CAN_COMM_ERROR_TO_SERVO_AMPLIFIER

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzCanCommErrorToServoAmplifier(ACS::Time& timestamp);

    /// MonitorPoint: AZ_BREAKER_FAULT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzBreakerFault(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_1_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzMotor1OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_2_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzMotor2OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: AZ_REGENERATION_RESISTOR_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzRegenerationResistorOverTemp(ACS::Time& timestamp);

    /// MonitorPoint: AZ_SERVO_OSCILLATION_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzServoOscillationFailure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AUXILIARY_ENCODER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAuxiliaryEncoderFailure(ACS::Time& timestamp);

    /// MonitorPoint: AZ_POSITION_DEVIATION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzPositionDeviation(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AUX_MOTOR_1_OFF_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAuxMotor1OffStatus(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AUX_MOTOR_2_OFF_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAuxMotor2OffStatus(ACS::Time& timestamp);

    /// MonitorPoint: AZ_GEARBOX_1_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzGearbox1OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: AZ_GEARBOX_2_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzGearbox2OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: AZ_COMPUTER_DISABLED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzComputerDisabled(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AXIS_DISABLED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAxisDisabled(ACS::Time& timestamp);

    /// MonitorPoint: AZ_HANDHELD_PCU_OPERATION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzHandheldPcuOperation(ACS::Time& timestamp);

    /// MonitorPoint: AZ_AXIS_IN_STOP_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzAxisInStopStatus(ACS::Time& timestamp);

    /// MonitorPoint: AZ_FLIP_FLOP_BUFFER_POSITION_INCORRECTLY

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzFlipFlopBufferPositionIncorrectly(ACS::Time& timestamp);

    /// MonitorPoint: AZ_HAND_CRANK_INSERTED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAzHandCrankInserted(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MODE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getElAuxMode(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getElAuxModeProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElAuxMode(const unsigned long rca);

    /// MonitorPoint: EL_ENC_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getElEncStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getElEncStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElEncStatus(const unsigned long rca);

    /// MonitorPoint: EL_ENC_READ_HEAD_ERROR
    /// byte 0, bit 0 Encoder read head error.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncReadHeadError(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_EEU_TIMING_ERROR
    /// byte 0, bit 2 EEU timing error

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncEeuTimingError(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_EEU_DOES_NOT_RESPOND
    /// byte 0, bit 3 EEU does not respond.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncEeuDoesNotRespond(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_EEU_DATA_ERROR
    /// byte 0, bit 4 EEU data error.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncEeuDataError(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_POSITION_MEANINGLESS
    /// byte 0, bit 5 Position read from encoder does not make sense.

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncPositionMeaningless(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENC_EEU_DUAL_HEAD_MODE
    /// byte 0, bit 7 EEU dual head mode

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncEeuDualHeadMode(ACS::Time& timestamp);

    /// MonitorPoint: EL_STATUS

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

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElPrelimitUp(ACS::Time& timestamp);

    /// MonitorPoint: EL_PRELIMIT_DOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElPrelimitDown(ACS::Time& timestamp);

    /// MonitorPoint: EL_LIMIT_UP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElLimitUp(ACS::Time& timestamp);

    /// MonitorPoint: EL_LIMIT_DOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElLimitDown(ACS::Time& timestamp);

    /// MonitorPoint: EL_EMERGENCY_LIMIT_UP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEmergencyLimitUp(ACS::Time& timestamp);

    /// MonitorPoint: EL_EMERGENCY_LIMIT_DOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEmergencyLimitDown(ACS::Time& timestamp);

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_UP_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElSecondEmergencyLimitUpLimit(ACS::Time& timestamp);

    /// MonitorPoint: EL_SECOND_EMERGENCY_LIMIT_DOWN_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElSecondEmergencyLimitDownLimit(ACS::Time& timestamp);

    /// MonitorPoint: EL_SERVO_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElServoFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_OVERSPEED_FAULT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElOverspeedFault(ACS::Time& timestamp);

    /// MonitorPoint: EL_IMMOBILE_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElImmobileFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_SPEED_ZERO_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElSpeedZeroStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_STOW_POSITION_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElStowPositionStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_ENCODER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElEncoderFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_INSANE_VELOCITY_FEEDBACK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElInsaneVelocityFeedback(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_1_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake1Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_2_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake2Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_3_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake3Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_BRAKE_4_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElBrake4Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_1_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier1Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_2_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier2Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_3_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier3Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AMPLIFIER_4_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAmplifier4Failure(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_1_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor1OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_2_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor2OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_3_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor3OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_4_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElMotor4OverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_REGENERATION_RESISTOR_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElRegenerationResistorOverTemp(ACS::Time& timestamp);

    /// MonitorPoint: EL_SERVO_OSCILLATION_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElServoOscillationFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUXILIARY_ENCODER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAuxiliaryEncoderFailure(ACS::Time& timestamp);

    /// MonitorPoint: EL_POSITION_DEVIATION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElPositionDeviation(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MOTOR_1_2_OFF_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAuxMotor12OffStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_AUX_MOTOR_3_4_OFF_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAuxMotor34OffStatus(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_1_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox1OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_2_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox2OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_3_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox3OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_GEARBOX_4_OIL_LEVEL_WARNING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElGearbox4OilLevelWarning(ACS::Time& timestamp);

    /// MonitorPoint: EL_COMPUTER_DISABLED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElComputerDisabled(ACS::Time& timestamp);

    /// MonitorPoint: EL_AXIS_DISABLED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAxisDisabled(ACS::Time& timestamp);

    /// MonitorPoint: EL_HANDHELD_PCU_OPERATION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElHandheldPcuOperation(ACS::Time& timestamp);

    /// MonitorPoint: EL_AXIS_IN_STOP_STATUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getElAxisInStopStatus(ACS::Time& timestamp);

    /// MonitorPoint: SYSTEM_STATUS

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

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStop(ACS::Time& timestamp);

    /// MonitorPoint: STAIRWAY_INTERLOCK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getStairwayInterlock(ACS::Time& timestamp);

    /// MonitorPoint: HANDLING_INTERLOCK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getHandlingInterlock(ACS::Time& timestamp);

    /// MonitorPoint: SMOKE_ALARM_CONDITION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSmokeAlarmCondition(ACS::Time& timestamp);

    /// MonitorPoint: ACU_BOOTING_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAcuBootingFailure(ACS::Time& timestamp);

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_CMD

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSurvivalStowDtMissingCmd(ACS::Time& timestamp);

    /// MonitorPoint: SURVIVAL_STOW_DT_MISSING_PULSE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSurvivalStowDtMissingPulse(ACS::Time& timestamp);

    /// MonitorPoint: TIME_PULSE_MISSING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getTimePulseMissing(ACS::Time& timestamp);

    /// MonitorPoint: SAFE_SWITCH

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSafeSwitch(ACS::Time& timestamp);

    /// MonitorPoint: POWER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getPowerFailure(ACS::Time& timestamp);

    /// MonitorPoint: LINE_24V_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getLine24vFailure(ACS::Time& timestamp);

    /// MonitorPoint: BREAKER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getBreakerFailure(ACS::Time& timestamp);

    /// MonitorPoint: ACU_FAN_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAcuFanFailure(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_PLC

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCommunicationErrorAcuPlc(ACS::Time& timestamp);

    /// MonitorPoint: CABINET_OVER_TEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCabinetOverTemp(ACS::Time& timestamp);

    /// MonitorPoint: ALMA_E_STOP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlmaEStop(ACS::Time& timestamp);

    /// MonitorPoint: RAMP_TO_RECEIVER_CABIN_NO_TILTED_UP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getRampToReceiverCabinNoTiltedUp(ACS::Time& timestamp);

    /// MonitorPoint: GATE_PLATFORM_2_OPEN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getGatePlatform2Open(ACS::Time& timestamp);

    /// MonitorPoint: LADDER_TO_PLATFORM_1_RETRACTED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getLadderToPlatform1Retracted(ACS::Time& timestamp);

    /// MonitorPoint: RECEIVER_CABIN_DOOR_OPEN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getReceiverCabinDoorOpen(ACS::Time& timestamp);

    /// MonitorPoint: PEDESTAL_DOOR_OPEN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getPedestalDoorOpen(ACS::Time& timestamp);

    /// MonitorPoint: DRIVE_CABINET_OPEN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getDriveCabinetOpen(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_CABINET

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopCabinet(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopAzDrives(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_INSIDE_ANTENNA_BASE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopInsideAntennaBase(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PLATFORM_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopPlatform2(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_LADDER_TO_PLATFORM_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopLadderToPlatform1(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_RECEIVER_CABIN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopReceiverCabin(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_PORTABLE_CONTROL_UNIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopPortableControlUnit(ACS::Time& timestamp);

    /// MonitorPoint: EMERGENCY_STOP_AT_OUTSIDE_PEDESTAL

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getEmergencyStopAtOutsidePedestal(ACS::Time& timestamp);

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAutoLubricationSystemFailure(ACS::Time& timestamp);

    /// MonitorPoint: AUTO_LUBRICATION_SYSTEM_MALFUNCTION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAutoLubricationSystemMalfunction(ACS::Time& timestamp);

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCommunicationErrorAcuUps(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS

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

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusLocalBusErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_1_ERR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusTiltmeter1Err(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_2_ERR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusTiltmeter2Err(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_3_ERR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusTiltmeter3Err(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_TEMP_SENSOR_ERR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusTempSensorErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_DISPL_SENSOR_ERR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusDisplSensorErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_ACU_MMC_COMM_ERR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusAcuMmcCommErr(ACS::Time& timestamp);

    /// MonitorPoint: METR_EQUIP_STATUS_METR_DATA_INVALID

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrEquipStatusMetrDataInvalid(ACS::Time& timestamp);

    /// MonitorPoint: POWER_STATUS

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

    /// MonitorPoint: MAIN_SW_POS_TRANSPORTABLE_PS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMainSwPosTransportablePs(ACS::Time& timestamp);

    /// MonitorPoint: MAIN_SW_POS_ANTENNABASE_PS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMainSwPosAntennabasePs(ACS::Time& timestamp);

    /// MonitorPoint: MAIN_CIRCUIT_BREAKER

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMainCircuitBreaker(ACS::Time& timestamp);

    /// MonitorPoint: LIGHTNING_ARRESTOR_TRIPPED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getLightningArrestorTripped(ACS::Time& timestamp);

    /// MonitorPoint: SINGLE_PHASE_INTERLOCK

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSinglePhaseInterlock(ACS::Time& timestamp);

    /// MonitorPoint: REVERSE_PHASE_PROTECTION_RELEASED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getReversePhaseProtectionReleased(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_ELECTRONIC_BUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCircuitBreakerCriticalElectronicBus(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_CRYOGENIC_BUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCircuitBreakerCriticalCryogenicBus(ACS::Time& timestamp);

    /// MonitorPoint: CIRCUIT_BREAKER_NON_CRITICAL_BUS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getCircuitBreakerNonCriticalBus(ACS::Time& timestamp);

    /// MonitorPoint: AC_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAcStatus(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual unsigned char getAcStatusProxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAcStatus(const unsigned long rca);

    /// MonitorPoint: FAST_SWITCHING_OPERATING_MODE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getFastSwitchingOperatingMode(ACS::Time& timestamp);

    /// MonitorPoint: NORMAL_OPERATING_MODE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getNormalOperatingMode(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_MANUAL_MODE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningManualMode(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_AUTO_MODE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningAutoMode(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_A_ALARM

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystemAAlarm(ACS::Time& timestamp);

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_B_ALARM

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAirConditioningSystemBAlarm(ACS::Time& timestamp);

    /// MonitorPoint: SELFTEST_ACTIVATED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSelftestActivated(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getUpsAlarms(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getUpsAlarmsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsAlarms(const unsigned long rca);

    /// MonitorPoint: UPS_ALARMS_MAIN_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsMainFailure(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsRectifierFailure(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_FUSE_BLOWN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsRectifierFuseBlown(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_THERMAL_IMAGE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsThermalImage(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_OUTPUT_VOLTAGE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsRectifierOutputVoltage(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_UPS_PHASE_SEQUENCE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsUpsPhaseSequence(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_SWITCH_OPEN

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsBatterySwitchOpen(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_DISCHARGED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsBatteryDischarged(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_CAPACITY

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsBatteryCapacity(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_FAULT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsBatteryFault(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BATTERY_TEST

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsBatteryTest(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_PLL_FAULT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsPllFault(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_INVERTER_VOLTAGE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsInverterVoltage(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_OVERLOAD

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsOverload(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_EMERGENCY_BYPASS_INACTIVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsEmergencyBypassInactive(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_LOAD_SUPPLY

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsLoadSupply(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_RETRANSFER_BLOCKED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsRetransferBlocked(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_MANUAL_BYPASS_SWITCH

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsManualBypassSwitch(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_OUTPUT_CIRCUIT_BREAKER

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsOutputCircuitBreaker(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_OPTION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsOption(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_HIGH_TEMPERATURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsHighTemperature(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_BYPASS_SWITCH_POSITION

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsBypassSwitchPosition(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_POWER_OFF

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsPowerOff(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_INVERTER_BRIDGE_BLOCKED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsInverterBridgeBlocked(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_SHORT_CIRCUIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsShortCircuit(ACS::Time& timestamp);

    /// MonitorPoint: UPS_ALARMS_COMM_ERROR

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getUpsAlarmsCommError(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BATTERY_OUTPUT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsBatteryOutput(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsBatteryOutputProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsBatteryOutput(const unsigned long rca);

    /// MonitorPoint: UPS_BATTERY_VOLTAGE

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getUpsBatteryVoltage(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getUpsBatteryVoltageProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BATTERY_CURRENT

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getUpsBatteryCurrent(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getUpsBatteryCurrentProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BATTERY_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsBatteryStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsBatteryStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsBatteryStatus(const unsigned long rca);

    /// MonitorPoint: NOMINAL_BATTERY_AUTOMOMY_MINUTES

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getNominalBatteryAutomomyMinutes(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getNominalBatteryAutomomyMinutesProxy(ACS::Time& timestamp);

    /// MonitorPoint: NOMINAL_BATTERY_AUTONOMY_PERCENTAGE

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getNominalBatteryAutonomyPercentage(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getNominalBatteryAutonomyPercentageProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS_BYPASS_VOLTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsBypassVolts(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsBypassVoltsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsBypassVolts(const unsigned long rca);

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getBypassVoltagePhase1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getBypassVoltagePhase1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getBypassVoltagePhase2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getBypassVoltagePhase2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_3

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getBypassVoltagePhase3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getBypassVoltagePhase3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS_FREQS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsFreqs(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsFreqsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsFreqs(const unsigned long rca);

    /// MonitorPoint: BYPASS_FREQUENCY

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getBypassFrequency(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getBypassFrequencyProxy(ACS::Time& timestamp);

    /// MonitorPoint: INVERTER_FREQUENCY

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getInverterFrequency(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getInverterFrequencyProxy(ACS::Time& timestamp);

    /// MonitorPoint: UPS_INVERTER_VOLTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsInverterVolts(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getUpsInverterVoltsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAUpsInverterVolts(const unsigned long rca);

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getInverterVoltagePhase1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getInverterVoltagePhase1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getInverterVoltagePhase2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getInverterVoltagePhase2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_3

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getInverterVoltagePhase3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getInverterVoltagePhase3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAlsStatus(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAlsStatusProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAlsStatus(const unsigned long rca);

    /// MonitorPoint: ALS_STATUS_AZ_PUMP_FAIL

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusAzPumpFail(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_INSUFFICIENT_GREASE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusAzInsufficientGrease(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_LOW_GREASE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusAzLowGrease(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_LUB_ONGOING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusAzLubOngoing(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_AZ_LUB_SUCCESS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusAzLubSuccess(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_PUMP_FAIL

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusElPumpFail(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_INSUFFICIENT_GREASE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusElInsufficientGrease(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_LOW_GREASE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusElLowGrease(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_LUB_ONGOING

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusElLubOngoing(ACS::Time& timestamp);

    /// MonitorPoint: ALS_STATUS_EL_LUB_SUCCESS

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getAlsStatusElLubSuccess(ACS::Time& timestamp);

    /// MonitorPoint: METR_COEFF_0

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getMetrCoeff0(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getMetrCoeff0Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrCoeff0(const unsigned long rca);

    /// MonitorPoint: METR_COEFF_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getMetrCoeff1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual double getMetrCoeff1Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrCoeff1(const unsigned long rca);

    /// MonitorPoint: SUBREF_CORR_ROT

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getSubrefCorrRot(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getSubrefCorrRotProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASubrefCorrRot(const unsigned long rca);

    /// MonitorPoint: SUBREF_CORR_ROT_X_TIP

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getSubrefCorrRotXTip(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getSubrefCorrRotXTipProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_CORR_ROT_X_TIP to a world value.

    virtual float rawToWorldSubrefCorrRotXTip(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_CORR_ROT_X_TIP.
    virtual double getScaleSubrefCorrRotXTip() const;

    /// Get the offset conversion factor of SUBREF_CORR_ROT_X_TIP.
    virtual double getOffsetSubrefCorrRotXTip() const;

    /// Override the default conversion factors of SUBREF_CORR_ROT_X_TIP:
    /// scale and offset.
    virtual void setConversionSubrefCorrRotXTip(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_CORR_ROT_Y_TILT

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getSubrefCorrRotYTilt(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getSubrefCorrRotYTiltProxy(ACS::Time& timestamp);

    /// Convert the raw value of SUBREF_CORR_ROT_Y_TILT to a world value.

    virtual float rawToWorldSubrefCorrRotYTilt(
        const short raw) const;

    /// Get the scale conversion factor of SUBREF_CORR_ROT_Y_TILT.
    virtual double getScaleSubrefCorrRotYTilt() const;

    /// Get the offset conversion factor of SUBREF_CORR_ROT_Y_TILT.
    virtual double getOffsetSubrefCorrRotYTilt() const;

    /// Override the default conversion factors of SUBREF_CORR_ROT_Y_TILT:
    /// scale and offset.
    virtual void setConversionSubrefCorrRotYTilt(const double scale,
        const double offset);

    /// MonitorPoint: SUBREF_STATUS

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

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct1Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_2_OVERTEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct2Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_3_OVERTEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct3Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_4_OVERTEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct4Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_5_OVERTEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct5Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_AMPLIFIER_ACT_6_OVERTEMP

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAmplifierAct6Overtemp(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_1_DOES_NOT_MOVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct1DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_2_DOES_NOT_MOVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct2DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_3_DOES_NOT_MOVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct3DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_4_DOES_NOT_MOVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct4DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_5_DOES_NOT_MOVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct5DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_6_DOES_NOT_MOVE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct6DoesNotMove(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_1_NOT_INITIALIZED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct1NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_2_NOT_INITIALIZED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct2NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_3_NOT_INITIALIZED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct3NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_4_NOT_INITIALIZED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct4NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_5_NOT_INITIALIZED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct5NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_ACT_6_NOT_INITIALIZED

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefAct6NotInitialized(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_HEXAPOD_IN_INIT_MODE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefHexapodInInitMode(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_DRIVE_POWER_SUPPLY_FAILURE

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefDrivePowerSupplyFailure(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_COMM_ERROR_ACU_HPC

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSubrefCommErrorAcuHpc(ACS::Time& timestamp);

    /// MonitorPoint: SUBREF_LIMITS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSubrefLimits(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getSubrefLimitsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCASubrefLimits(const unsigned long rca);

    /// MonitorPoint: SL_ACT_1_NEGATIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct1NegativeLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_2_NEGATIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct2NegativeLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_3_NEGATIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct3NegativeLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_4_NEGATIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct4NegativeLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_5_NEGATIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct5NegativeLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_6_NEGATIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct6NegativeLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_1_POSITIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct1PositiveLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_2_POSITIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct2PositiveLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_3_POSITIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct3PositiveLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_4_POSITIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct4PositiveLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_5_POSITIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct5PositiveLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_ACT_6_POSITIVE_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlAct6PositiveLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_X_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaNegativeXLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_X_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaPositiveXLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_Y_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaNegativeYLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_Y_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaPositiveYLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_Z_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaNegativeZLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_Z_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaPositiveZLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_X_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaNegativeThetaXLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_X_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaPositiveThetaXLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_Y_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaNegativeThetaYLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_Y_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaPositiveThetaYLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_Z_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaNegativeThetaZLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_Z_LIMIT

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexaPositiveThetaZLimit(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch1(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch2(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_3

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch3(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_4

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch4(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_5

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch5(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_6

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch6(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_7

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch7(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_8

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodVerticalCollisionSwitch8(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_1

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch1(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_2

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch2(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_3

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch3(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_4

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch4(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_5

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch5(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_6

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch6(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_7

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch7(ACS::Time& timestamp);

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_8

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getSlHexapodHorizontalCollisionSwitch8(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElMotorCurrents(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElMotorCurrentsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElMotorCurrents(const unsigned long rca);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorCurrentsMotor1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorCurrentsMotor1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorCurrentsMotor2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorCurrentsMotor2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorCurrentsMotor3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorCurrentsMotor3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR4

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorCurrentsMotor4(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorCurrentsMotor4Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TEMPS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElMotorTemps(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElMotorTempsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElMotorTemps(const unsigned long rca);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTempsMotor1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTempsMotor1Proxy(ACS::Time& timestamp);

    /// Convert the raw value of EL_MOTOR_TEMPS_MOTOR1 to a world value.

    virtual short rawToWorldElMotorTempsMotor1(
        const unsigned char raw) const;

    /// Get the scale conversion factor of EL_MOTOR_TEMPS_MOTOR1.
    virtual double getScaleElMotorTempsMotor1() const;

    /// Get the offset conversion factor of EL_MOTOR_TEMPS_MOTOR1.
    virtual double getOffsetElMotorTempsMotor1() const;

    /// Override the default conversion factors of EL_MOTOR_TEMPS_MOTOR1:
    /// scale and offset.
    virtual void setConversionElMotorTempsMotor1(const double scale,
        const double offset);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTempsMotor2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTempsMotor2Proxy(ACS::Time& timestamp);

    /// Convert the raw value of EL_MOTOR_TEMPS_MOTOR2 to a world value.

    virtual short rawToWorldElMotorTempsMotor2(
        const unsigned char raw) const;

    /// Get the scale conversion factor of EL_MOTOR_TEMPS_MOTOR2.
    virtual double getScaleElMotorTempsMotor2() const;

    /// Get the offset conversion factor of EL_MOTOR_TEMPS_MOTOR2.
    virtual double getOffsetElMotorTempsMotor2() const;

    /// Override the default conversion factors of EL_MOTOR_TEMPS_MOTOR2:
    /// scale and offset.
    virtual void setConversionElMotorTempsMotor2(const double scale,
        const double offset);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTempsMotor3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTempsMotor3Proxy(ACS::Time& timestamp);

    /// Convert the raw value of EL_MOTOR_TEMPS_MOTOR3 to a world value.

    virtual short rawToWorldElMotorTempsMotor3(
        const unsigned char raw) const;

    /// Get the scale conversion factor of EL_MOTOR_TEMPS_MOTOR3.
    virtual double getScaleElMotorTempsMotor3() const;

    /// Get the offset conversion factor of EL_MOTOR_TEMPS_MOTOR3.
    virtual double getOffsetElMotorTempsMotor3() const;

    /// Override the default conversion factors of EL_MOTOR_TEMPS_MOTOR3:
    /// scale and offset.
    virtual void setConversionElMotorTempsMotor3(const double scale,
        const double offset);

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR4

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTempsMotor4(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTempsMotor4Proxy(ACS::Time& timestamp);

    /// Convert the raw value of EL_MOTOR_TEMPS_MOTOR4 to a world value.

    virtual short rawToWorldElMotorTempsMotor4(
        const unsigned char raw) const;

    /// Get the scale conversion factor of EL_MOTOR_TEMPS_MOTOR4.
    virtual double getScaleElMotorTempsMotor4() const;

    /// Get the offset conversion factor of EL_MOTOR_TEMPS_MOTOR4.
    virtual double getOffsetElMotorTempsMotor4() const;

    /// Override the default conversion factors of EL_MOTOR_TEMPS_MOTOR4:
    /// scale and offset.
    virtual void setConversionElMotorTempsMotor4(const double scale,
        const double offset);

    /// MonitorPoint: EL_MOTOR_TORQUE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElMotorTorque(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getElMotorTorqueProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAElMotorTorque(const unsigned long rca);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR1

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTorqueMotor1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTorqueMotor1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR2

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTorqueMotor2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTorqueMotor2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR3

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTorqueMotor3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTorqueMotor3Proxy(ACS::Time& timestamp);

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR4

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getElMotorTorqueMotor4(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getElMotorTorqueMotor4Proxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasTemp(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< int > getMetrDeltasTempProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDeltasTemp(const unsigned long rca);

    /// MonitorPoint: METR_DELTAS_TEMP_AZ_CORRECTION
    /// Azimuth delta correction

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasTempAzCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasTempAzCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DELTAS_TEMP_EL_CORRECTION
    /// Elevation delta correction

    /// \exception ControlExceptions::INACTErrorEx
    virtual int getMetrDeltasTempElCorrection(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDeltasTempElCorrectionProxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_DISPL_0

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl0(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl0Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDispl0(const unsigned long rca);

    /// MonitorPoint: METR_DISPL_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl1Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDispl1(const unsigned long rca);

    /// MonitorPoint: METR_DISPL_2

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl2Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDispl2(const unsigned long rca);

    /// MonitorPoint: METR_DISPL_3

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl3(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual int getMetrDispl3Proxy(ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrDispl3(const unsigned long rca);

    /// MonitorPoint: AZ_MOTOR_CURRENTS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzMotorCurrents(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzMotorCurrentsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzMotorCurrents(const unsigned long rca);

    /// MonitorPoint: AZ_MOTOR_CURRENTS_MOTOR1
    /// Motor1 current in all azimuth axis drive motors.

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getAzMotorCurrentsMotor1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getAzMotorCurrentsMotor1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_CURRENTS_MOTOR2
    /// Motor2 current in all azimuth axis drive motors.

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getAzMotorCurrentsMotor2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getAzMotorCurrentsMotor2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_TEMPS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzMotorTemps(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzMotorTempsProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzMotorTemps(const unsigned long rca);

    /// MonitorPoint: AZ_MOTOR_TEMPS_MOTOR1
    /// Motor1 temperature in all azimuth axis drive motors.

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getAzMotorTempsMotor1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getAzMotorTempsMotor1Proxy(ACS::Time& timestamp);

    /// Convert the raw value of AZ_MOTOR_TEMPS_MOTOR1 to a world value.

    virtual short rawToWorldAzMotorTempsMotor1(
        const unsigned char raw) const;

    /// Get the scale conversion factor of AZ_MOTOR_TEMPS_MOTOR1.
    virtual double getScaleAzMotorTempsMotor1() const;

    /// Get the offset conversion factor of AZ_MOTOR_TEMPS_MOTOR1.
    virtual double getOffsetAzMotorTempsMotor1() const;

    /// Override the default conversion factors of AZ_MOTOR_TEMPS_MOTOR1:
    /// scale and offset.
    virtual void setConversionAzMotorTempsMotor1(const double scale,
        const double offset);

    /// MonitorPoint: AZ_MOTOR_TEMPS_MOTOR2
    /// Motor2 temperature in all azimuth axis drive motors.

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getAzMotorTempsMotor2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getAzMotorTempsMotor2Proxy(ACS::Time& timestamp);

    /// Convert the raw value of AZ_MOTOR_TEMPS_MOTOR2 to a world value.

    virtual short rawToWorldAzMotorTempsMotor2(
        const unsigned char raw) const;

    /// Get the scale conversion factor of AZ_MOTOR_TEMPS_MOTOR2.
    virtual double getScaleAzMotorTempsMotor2() const;

    /// Get the offset conversion factor of AZ_MOTOR_TEMPS_MOTOR2.
    virtual double getOffsetAzMotorTempsMotor2() const;

    /// Override the default conversion factors of AZ_MOTOR_TEMPS_MOTOR2:
    /// scale and offset.
    virtual void setConversionAzMotorTempsMotor2(const double scale,
        const double offset);

    /// MonitorPoint: AZ_MOTOR_TORQUE

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzMotorTorque(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< unsigned char > getAzMotorTorqueProxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAAzMotorTorque(const unsigned long rca);

    /// MonitorPoint: AZ_MOTOR_TORQUE_MOTOR1
    /// Motor1 torque in all azimuth axis drive motors.

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getAzMotorTorqueMotor1(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getAzMotorTorqueMotor1Proxy(ACS::Time& timestamp);

    /// MonitorPoint: AZ_MOTOR_TORQUE_MOTOR2
    /// Motor2 torque in all azimuth axis drive motors.

    /// \exception ControlExceptions::INACTErrorEx
    virtual short getAzMotorTorqueMotor2(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual short getAzMotorTorqueMotor2Proxy(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE

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
    /// byte 0, bit 0 Standard pointing error model enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeStandardPointingErrorModelEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_TILTMETER_COMP_ENABLED
    /// byte 0, bit 1 Tiltmeter compensation enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeTiltmeterCompEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_TEMP_COMP_ENABLED
    /// byte 0, bit 2 Temperature compensation enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeTempCompEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_LASER_BASED_COMP_ENABLED
    /// byte 0, bit 3 Laser based compensation enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeLaserBasedCompEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_FRICTION_COMP_ALGORITHM_ENABLED
    /// byte 0, bit 4 Friction compensatiopn algorithm enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeFrictionCompAlgorithmEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_AUTOMATIC_SUBREF_POSN_CORRECTION_ENABLED
    /// byte 0, bit 5 Automatic sub-reflector position correction 
    /// enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeAutomaticSubrefPosnCorrectionEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_MODE_MOUNT_ENC_CORRECTION_BASED_ENABLED
    /// byte 0, bit 6 Correction based on encoder mount sensors 
    /// enabled

    /// \exception ControlExceptions::INACTErrorEx
    virtual bool getMetrModeMountEncCorrectionBasedEnabled(ACS::Time& timestamp);

    /// MonitorPoint: METR_TILT_0

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTilt0(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTilt0Proxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTilt0(const unsigned long rca);

    /// MonitorPoint: METR_TILT_0_X
    /// tiltmeter 0, tilt x

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt0X(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt0XProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_0_X to a world value.

    virtual float rawToWorldMetrTilt0X(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_0_X.
    virtual double getScaleMetrTilt0X() const;

    /// Get the offset conversion factor of METR_TILT_0_X.
    virtual double getOffsetMetrTilt0X() const;

    /// Override the default conversion factors of METR_TILT_0_X:
    /// scale and offset.
    virtual void setConversionMetrTilt0X(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_0_Y
    /// tiltmeter 0, tilt y

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt0Y(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt0YProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_0_Y to a world value.

    virtual float rawToWorldMetrTilt0Y(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_0_Y.
    virtual double getScaleMetrTilt0Y() const;

    /// Get the offset conversion factor of METR_TILT_0_Y.
    virtual double getOffsetMetrTilt0Y() const;

    /// Override the default conversion factors of METR_TILT_0_Y:
    /// scale and offset.
    virtual void setConversionMetrTilt0Y(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_0_TEMPERATURE
    /// tiltmeter 0, tilt temperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt0Temperature(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt0TemperatureProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_0_TEMPERATURE to a world value.

    virtual float rawToWorldMetrTilt0Temperature(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_0_TEMPERATURE.
    virtual double getScaleMetrTilt0Temperature() const;

    /// Get the offset conversion factor of METR_TILT_0_TEMPERATURE.
    virtual double getOffsetMetrTilt0Temperature() const;

    /// Override the default conversion factors of METR_TILT_0_TEMPERATURE:
    /// scale and offset.
    virtual void setConversionMetrTilt0Temperature(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTilt1(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTilt1Proxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTilt1(const unsigned long rca);

    /// MonitorPoint: METR_TILT_1_X
    /// tiltmeter 1, tilt x

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt1X(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt1XProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_1_X to a world value.

    virtual float rawToWorldMetrTilt1X(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_1_X.
    virtual double getScaleMetrTilt1X() const;

    /// Get the offset conversion factor of METR_TILT_1_X.
    virtual double getOffsetMetrTilt1X() const;

    /// Override the default conversion factors of METR_TILT_1_X:
    /// scale and offset.
    virtual void setConversionMetrTilt1X(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_1_Y
    /// tiltmeter 1, tilt y

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt1Y(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt1YProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_1_Y to a world value.

    virtual float rawToWorldMetrTilt1Y(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_1_Y.
    virtual double getScaleMetrTilt1Y() const;

    /// Get the offset conversion factor of METR_TILT_1_Y.
    virtual double getOffsetMetrTilt1Y() const;

    /// Override the default conversion factors of METR_TILT_1_Y:
    /// scale and offset.
    virtual void setConversionMetrTilt1Y(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_1_TEMPERATURE
    /// tiltmeter 1, tilt temperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt1Temperature(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt1TemperatureProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_1_TEMPERATURE to a world value.

    virtual float rawToWorldMetrTilt1Temperature(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_1_TEMPERATURE.
    virtual double getScaleMetrTilt1Temperature() const;

    /// Get the offset conversion factor of METR_TILT_1_TEMPERATURE.
    virtual double getOffsetMetrTilt1Temperature() const;

    /// Override the default conversion factors of METR_TILT_1_TEMPERATURE:
    /// scale and offset.
    virtual void setConversionMetrTilt1Temperature(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_2

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTilt2(
        ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual std::vector< short > getMetrTilt2Proxy(
        ACS::Time& timestamp);

    /// Set the RCA for this monitor point.
    virtual void setMonitorRCAMetrTilt2(const unsigned long rca);

    /// MonitorPoint: METR_TILT_2_X
    /// tiltmeter 2, tilt x

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt2X(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt2XProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_2_X to a world value.

    virtual float rawToWorldMetrTilt2X(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_2_X.
    virtual double getScaleMetrTilt2X() const;

    /// Get the offset conversion factor of METR_TILT_2_X.
    virtual double getOffsetMetrTilt2X() const;

    /// Override the default conversion factors of METR_TILT_2_X:
    /// scale and offset.
    virtual void setConversionMetrTilt2X(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_2_Y
    /// tiltmeter 2, tilt y

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt2Y(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt2YProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_2_Y to a world value.

    virtual float rawToWorldMetrTilt2Y(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_2_Y.
    virtual double getScaleMetrTilt2Y() const;

    /// Get the offset conversion factor of METR_TILT_2_Y.
    virtual double getOffsetMetrTilt2Y() const;

    /// Override the default conversion factors of METR_TILT_2_Y:
    /// scale and offset.
    virtual void setConversionMetrTilt2Y(const double scale,
        const double offset);

    /// MonitorPoint: METR_TILT_2_TEMPERATURE
    /// tiltmeter 2, tilt temperature

    /// \exception ControlExceptions::INACTErrorEx
    virtual float getMetrTilt2Temperature(ACS::Time& timestamp);

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual float getMetrTilt2TemperatureProxy(ACS::Time& timestamp);

    /// Convert the raw value of METR_TILT_2_TEMPERATURE to a world value.

    virtual float rawToWorldMetrTilt2Temperature(
        const short raw) const;

    /// Get the scale conversion factor of METR_TILT_2_TEMPERATURE.
    virtual double getScaleMetrTilt2Temperature() const;

    /// Get the offset conversion factor of METR_TILT_2_TEMPERATURE.
    virtual double getOffsetMetrTilt2Temperature() const;

    /// Override the default conversion factors of METR_TILT_2_TEMPERATURE:
    /// scale and offset.
    virtual void setConversionMetrTilt2Temperature(const double scale,
        const double offset);

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

    /// ControlPoint: AZ_AUX_MODE

    /// Set azimuth auxiliary mode (1/2 motors enabled). This command 
    /// is only possible when the axis is in shutdown or standby 
    /// modes.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlAzAuxMode(const unsigned char world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlAzAuxMode(const unsigned long rca);

    /// ControlPoint: EL_AUX_MODE

    /// Set elevation auxiliary mode (1/2 motors enabled). This 
    /// command is only possible when the axis is in shutdown or 
    /// standby modes.

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlElAuxMode(const unsigned char world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlElAuxMode(const unsigned long rca);

    /// ControlPoint: INIT_SUBREF_CMD

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setInitSubrefCmd(const unsigned char world);

    /// Set the RCA for this control point.
    virtual void setControlRCAInitSubrefCmd(const unsigned long rca);

    /// ControlPoint: ALS

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlAls(const unsigned char world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlAls(const unsigned long rca);

    /// ControlPoint: REC_CAB_TEMP

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlRecCabTemp(const unsigned char world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlRecCabTemp(const unsigned long rca);

    /// ControlPoint: METR_COEFF_0

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlMetrCoeff0(const double world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlMetrCoeff0(const unsigned long rca);

    /// ControlPoint: METR_COEFF_1

    /// \exception ControlExceptions::CAMBErrorEx 
    /// \exception ControlExceptions::INACTErrorEx

    virtual void setCntlMetrCoeff1(const double world);

    /// Set the RCA for this control point.
    virtual void setControlRCACntlMetrCoeff1(const unsigned long rca);

    private:
    /// Default constructor. Never instanciate this class directly!
    MountVertexBase();

    /// ALMA coding standards: copy constructor is disabled.
    MountVertexBase(const MountVertexBase&);

    /// ALMA coding standards: assignment operator is disabled.
    MountVertexBase& operator=(const MountVertexBase&);

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, unsigned char > > cacheAzEncStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheAzStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, unsigned char > > cacheElEncStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheElStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheSystemStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheMetrEquipStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cachePowerStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, unsigned char > > cacheAcStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheUpsAlarms;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheUpsBatteryOutput;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheUpsBatteryStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheUpsBypassVolts;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheUpsFreqs;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheUpsInverterVolts;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheAlsStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheSubrefCorrRot;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheSubrefStatus;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheSubrefLimits;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheElMotorCurrents;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheElMotorTemps;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheElMotorTorque;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            int > > > cacheMetrDeltasTemp;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheAzMotorCurrents;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheAzMotorTemps;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheAzMotorTorque;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            unsigned char > > > cacheMetrMode;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheMetrTilt0;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheMetrTilt1;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheMetrTilt2;

    boost::shared_ptr< AMB::Cache<
        MountVertexBase, std::vector<
            short > > > cacheSubrefRotation;

    /// MonitorPoint: AZ_AUX_MODE

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzAuxMode;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppAzAuxMode;

    /// MonitorPoint: AZ_ENC_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzEncStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppAzEncStatus;

    /// MonitorPoint: AZ_ENC_READ_HEAD_ERROR

    /// Data associated with AZ_ENC_READ_HEAD_ERROR.
    bool valueAzEncReadHeadError;
    ACS::Time timeAzEncReadHeadError;
    bool previousValueAzEncReadHeadError;

    /// MonitorPoint: AZ_ENC_EEU_TIMING_ERROR

    /// Data associated with AZ_ENC_EEU_TIMING_ERROR.
    bool valueAzEncEeuTimingError;
    ACS::Time timeAzEncEeuTimingError;
    bool previousValueAzEncEeuTimingError;

    /// MonitorPoint: AZ_ENC_EEU_DOES_NOT_RESPOND

    /// Data associated with AZ_ENC_EEU_DOES_NOT_RESPOND.
    bool valueAzEncEeuDoesNotRespond;
    ACS::Time timeAzEncEeuDoesNotRespond;
    bool previousValueAzEncEeuDoesNotRespond;

    /// MonitorPoint: AZ_ENC_EEU_DATA_ERROR

    /// Data associated with AZ_ENC_EEU_DATA_ERROR.
    bool valueAzEncEeuDataError;
    ACS::Time timeAzEncEeuDataError;
    bool previousValueAzEncEeuDataError;

    /// MonitorPoint: AZ_ENC_POSITION_MEANINGLESS

    /// Data associated with AZ_ENC_POSITION_MEANINGLESS.
    bool valueAzEncPositionMeaningless;
    ACS::Time timeAzEncPositionMeaningless;
    bool previousValueAzEncPositionMeaningless;

    /// MonitorPoint: AZ_ENC_EEU_DUAL_HEAD_MODE

    /// Data associated with AZ_ENC_EEU_DUAL_HEAD_MODE.
    bool valueAzEncEeuDualHeadMode;
    ACS::Time timeAzEncEeuDualHeadMode;
    bool previousValueAzEncEeuDualHeadMode;

    /// MonitorPoint: AZ_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppAzStatus;

    /// MonitorPoint: AZ_PRELIMIT_CW

    /// Data associated with AZ_PRELIMIT_CW.
    bool valueAzPrelimitCw;
    ACS::Time timeAzPrelimitCw;
    bool previousValueAzPrelimitCw;

    /// MonitorPoint: AZ_PRELIMIT_CCW

    /// Data associated with AZ_PRELIMIT_CCW.
    bool valueAzPrelimitCcw;
    ACS::Time timeAzPrelimitCcw;
    bool previousValueAzPrelimitCcw;

    /// MonitorPoint: AZ_LIMIT_CW

    /// Data associated with AZ_LIMIT_CW.
    bool valueAzLimitCw;
    ACS::Time timeAzLimitCw;
    bool previousValueAzLimitCw;

    /// MonitorPoint: AZ_LIMIT_CCW

    /// Data associated with AZ_LIMIT_CCW.
    bool valueAzLimitCcw;
    ACS::Time timeAzLimitCcw;
    bool previousValueAzLimitCcw;

    /// MonitorPoint: AZ_EMERGENCY_LIMIT_CW

    /// Data associated with AZ_EMERGENCY_LIMIT_CW.
    bool valueAzEmergencyLimitCw;
    ACS::Time timeAzEmergencyLimitCw;
    bool previousValueAzEmergencyLimitCw;

    /// MonitorPoint: AZ_EMERGENCY_LIMIT_CCW

    /// Data associated with AZ_EMERGENCY_LIMIT_CCW.
    bool valueAzEmergencyLimitCcw;
    ACS::Time timeAzEmergencyLimitCcw;
    bool previousValueAzEmergencyLimitCcw;

    /// MonitorPoint: AZ_SECOND_EMERGENCY_LIMIT_CW_LIMIT

    /// Data associated with AZ_SECOND_EMERGENCY_LIMIT_CW_LIMIT.
    bool valueAzSecondEmergencyLimitCwLimit;
    ACS::Time timeAzSecondEmergencyLimitCwLimit;
    bool previousValueAzSecondEmergencyLimitCwLimit;

    /// MonitorPoint: AZ_SECOND_EMERGENCY_LIMIT_CCW_LIMIT

    /// Data associated with AZ_SECOND_EMERGENCY_LIMIT_CCW_LIMIT.
    bool valueAzSecondEmergencyLimitCcwLimit;
    ACS::Time timeAzSecondEmergencyLimitCcwLimit;
    bool previousValueAzSecondEmergencyLimitCcwLimit;

    /// MonitorPoint: AZ_SERVO_FAILURE

    /// Data associated with AZ_SERVO_FAILURE.
    bool valueAzServoFailure;
    ACS::Time timeAzServoFailure;
    bool previousValueAzServoFailure;

    /// MonitorPoint: AZ_OVERSPEED_FAULT

    /// Data associated with AZ_OVERSPEED_FAULT.
    bool valueAzOverspeedFault;
    ACS::Time timeAzOverspeedFault;
    bool previousValueAzOverspeedFault;

    /// MonitorPoint: AZ_IMMOBILE_FAILURE

    /// Data associated with AZ_IMMOBILE_FAILURE.
    bool valueAzImmobileFailure;
    ACS::Time timeAzImmobileFailure;
    bool previousValueAzImmobileFailure;

    /// MonitorPoint: AZ_SPEED_ZERO_STATUS

    /// Data associated with AZ_SPEED_ZERO_STATUS.
    bool valueAzSpeedZeroStatus;
    ACS::Time timeAzSpeedZeroStatus;
    bool previousValueAzSpeedZeroStatus;

    /// MonitorPoint: AZ_STOW_POSITION_STATUS

    /// Data associated with AZ_STOW_POSITION_STATUS.
    bool valueAzStowPositionStatus;
    ACS::Time timeAzStowPositionStatus;
    bool previousValueAzStowPositionStatus;

    /// MonitorPoint: AZ_ENCODER_FAILURE

    /// Data associated with AZ_ENCODER_FAILURE.
    bool valueAzEncoderFailure;
    ACS::Time timeAzEncoderFailure;
    bool previousValueAzEncoderFailure;

    /// MonitorPoint: AZ_INSANE_VELOCITY_FEEDBACK

    /// Data associated with AZ_INSANE_VELOCITY_FEEDBACK.
    bool valueAzInsaneVelocityFeedback;
    ACS::Time timeAzInsaneVelocityFeedback;
    bool previousValueAzInsaneVelocityFeedback;

    /// MonitorPoint: AZ_BRAKE_1_FAILURE

    /// Data associated with AZ_BRAKE_1_FAILURE.
    bool valueAzBrake1Failure;
    ACS::Time timeAzBrake1Failure;
    bool previousValueAzBrake1Failure;

    /// MonitorPoint: AZ_BRAKE_2_FAILURE

    /// Data associated with AZ_BRAKE_2_FAILURE.
    bool valueAzBrake2Failure;
    ACS::Time timeAzBrake2Failure;
    bool previousValueAzBrake2Failure;

    /// MonitorPoint: AZ_AMPLIFIER_1_FAILURE

    /// Data associated with AZ_AMPLIFIER_1_FAILURE.
    bool valueAzAmplifier1Failure;
    ACS::Time timeAzAmplifier1Failure;
    bool previousValueAzAmplifier1Failure;

    /// MonitorPoint: AZ_AMPLIFIER_2_FAILURE

    /// Data associated with AZ_AMPLIFIER_2_FAILURE.
    bool valueAzAmplifier2Failure;
    ACS::Time timeAzAmplifier2Failure;
    bool previousValueAzAmplifier2Failure;

    /// MonitorPoint: AZ_CAN_COMM_ERROR_TO_SERVO_AMPLIFIER

    /// Data associated with AZ_CAN_COMM_ERROR_TO_SERVO_AMPLIFIER.
    bool valueAzCanCommErrorToServoAmplifier;
    ACS::Time timeAzCanCommErrorToServoAmplifier;
    bool previousValueAzCanCommErrorToServoAmplifier;

    /// MonitorPoint: AZ_BREAKER_FAULT

    /// Data associated with AZ_BREAKER_FAULT.
    bool valueAzBreakerFault;
    ACS::Time timeAzBreakerFault;
    bool previousValueAzBreakerFault;

    /// MonitorPoint: AZ_MOTOR_1_OVER_TEMP

    /// Data associated with AZ_MOTOR_1_OVER_TEMP.
    bool valueAzMotor1OverTemp;
    ACS::Time timeAzMotor1OverTemp;
    bool previousValueAzMotor1OverTemp;

    /// MonitorPoint: AZ_MOTOR_2_OVER_TEMP

    /// Data associated with AZ_MOTOR_2_OVER_TEMP.
    bool valueAzMotor2OverTemp;
    ACS::Time timeAzMotor2OverTemp;
    bool previousValueAzMotor2OverTemp;

    /// MonitorPoint: AZ_REGENERATION_RESISTOR_OVER_TEMP

    /// Data associated with AZ_REGENERATION_RESISTOR_OVER_TEMP.
    bool valueAzRegenerationResistorOverTemp;
    ACS::Time timeAzRegenerationResistorOverTemp;
    bool previousValueAzRegenerationResistorOverTemp;

    /// MonitorPoint: AZ_SERVO_OSCILLATION_FAILURE

    /// Data associated with AZ_SERVO_OSCILLATION_FAILURE.
    bool valueAzServoOscillationFailure;
    ACS::Time timeAzServoOscillationFailure;
    bool previousValueAzServoOscillationFailure;

    /// MonitorPoint: AZ_AUXILIARY_ENCODER_FAILURE

    /// Data associated with AZ_AUXILIARY_ENCODER_FAILURE.
    bool valueAzAuxiliaryEncoderFailure;
    ACS::Time timeAzAuxiliaryEncoderFailure;
    bool previousValueAzAuxiliaryEncoderFailure;

    /// MonitorPoint: AZ_POSITION_DEVIATION

    /// Data associated with AZ_POSITION_DEVIATION.
    bool valueAzPositionDeviation;
    ACS::Time timeAzPositionDeviation;
    bool previousValueAzPositionDeviation;

    /// MonitorPoint: AZ_AUX_MOTOR_1_OFF_STATUS

    /// Data associated with AZ_AUX_MOTOR_1_OFF_STATUS.
    bool valueAzAuxMotor1OffStatus;
    ACS::Time timeAzAuxMotor1OffStatus;
    bool previousValueAzAuxMotor1OffStatus;

    /// MonitorPoint: AZ_AUX_MOTOR_2_OFF_STATUS

    /// Data associated with AZ_AUX_MOTOR_2_OFF_STATUS.
    bool valueAzAuxMotor2OffStatus;
    ACS::Time timeAzAuxMotor2OffStatus;
    bool previousValueAzAuxMotor2OffStatus;

    /// MonitorPoint: AZ_GEARBOX_1_OIL_LEVEL_WARNING

    /// Data associated with AZ_GEARBOX_1_OIL_LEVEL_WARNING.
    bool valueAzGearbox1OilLevelWarning;
    ACS::Time timeAzGearbox1OilLevelWarning;
    bool previousValueAzGearbox1OilLevelWarning;

    /// MonitorPoint: AZ_GEARBOX_2_OIL_LEVEL_WARNING

    /// Data associated with AZ_GEARBOX_2_OIL_LEVEL_WARNING.
    bool valueAzGearbox2OilLevelWarning;
    ACS::Time timeAzGearbox2OilLevelWarning;
    bool previousValueAzGearbox2OilLevelWarning;

    /// MonitorPoint: AZ_COMPUTER_DISABLED

    /// Data associated with AZ_COMPUTER_DISABLED.
    bool valueAzComputerDisabled;
    ACS::Time timeAzComputerDisabled;
    bool previousValueAzComputerDisabled;

    /// MonitorPoint: AZ_AXIS_DISABLED

    /// Data associated with AZ_AXIS_DISABLED.
    bool valueAzAxisDisabled;
    ACS::Time timeAzAxisDisabled;
    bool previousValueAzAxisDisabled;

    /// MonitorPoint: AZ_HANDHELD_PCU_OPERATION

    /// Data associated with AZ_HANDHELD_PCU_OPERATION.
    bool valueAzHandheldPcuOperation;
    ACS::Time timeAzHandheldPcuOperation;
    bool previousValueAzHandheldPcuOperation;

    /// MonitorPoint: AZ_AXIS_IN_STOP_STATUS

    /// Data associated with AZ_AXIS_IN_STOP_STATUS.
    bool valueAzAxisInStopStatus;
    ACS::Time timeAzAxisInStopStatus;
    bool previousValueAzAxisInStopStatus;

    /// MonitorPoint: AZ_FLIP_FLOP_BUFFER_POSITION_INCORRECTLY

    /// Data associated with AZ_FLIP_FLOP_BUFFER_POSITION_INCORRECTLY.
    bool valueAzFlipFlopBufferPositionIncorrectly;
    ACS::Time timeAzFlipFlopBufferPositionIncorrectly;
    bool previousValueAzFlipFlopBufferPositionIncorrectly;

    /// MonitorPoint: AZ_HAND_CRANK_INSERTED

    /// Data associated with AZ_HAND_CRANK_INSERTED.
    bool valueAzHandCrankInserted;
    ACS::Time timeAzHandCrankInserted;
    bool previousValueAzHandCrankInserted;

    /// MonitorPoint: EL_AUX_MODE

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElAuxMode;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppElAuxMode;

    /// MonitorPoint: EL_ENC_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElEncStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppElEncStatus;

    /// MonitorPoint: EL_ENC_READ_HEAD_ERROR

    /// Data associated with EL_ENC_READ_HEAD_ERROR.
    bool valueElEncReadHeadError;
    ACS::Time timeElEncReadHeadError;
    bool previousValueElEncReadHeadError;

    /// MonitorPoint: EL_ENC_EEU_TIMING_ERROR

    /// Data associated with EL_ENC_EEU_TIMING_ERROR.
    bool valueElEncEeuTimingError;
    ACS::Time timeElEncEeuTimingError;
    bool previousValueElEncEeuTimingError;

    /// MonitorPoint: EL_ENC_EEU_DOES_NOT_RESPOND

    /// Data associated with EL_ENC_EEU_DOES_NOT_RESPOND.
    bool valueElEncEeuDoesNotRespond;
    ACS::Time timeElEncEeuDoesNotRespond;
    bool previousValueElEncEeuDoesNotRespond;

    /// MonitorPoint: EL_ENC_EEU_DATA_ERROR

    /// Data associated with EL_ENC_EEU_DATA_ERROR.
    bool valueElEncEeuDataError;
    ACS::Time timeElEncEeuDataError;
    bool previousValueElEncEeuDataError;

    /// MonitorPoint: EL_ENC_POSITION_MEANINGLESS

    /// Data associated with EL_ENC_POSITION_MEANINGLESS.
    bool valueElEncPositionMeaningless;
    ACS::Time timeElEncPositionMeaningless;
    bool previousValueElEncPositionMeaningless;

    /// MonitorPoint: EL_ENC_EEU_DUAL_HEAD_MODE

    /// Data associated with EL_ENC_EEU_DUAL_HEAD_MODE.
    bool valueElEncEeuDualHeadMode;
    ACS::Time timeElEncEeuDualHeadMode;
    bool previousValueElEncEeuDualHeadMode;

    /// MonitorPoint: EL_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppElStatus;

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

    /// MonitorPoint: SYSTEM_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSystemStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppSystemStatus;

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

    /// MonitorPoint: GATE_PLATFORM_2_OPEN

    /// Data associated with GATE_PLATFORM_2_OPEN.
    bool valueGatePlatform2Open;
    ACS::Time timeGatePlatform2Open;
    bool previousValueGatePlatform2Open;

    /// MonitorPoint: LADDER_TO_PLATFORM_1_RETRACTED

    /// Data associated with LADDER_TO_PLATFORM_1_RETRACTED.
    bool valueLadderToPlatform1Retracted;
    ACS::Time timeLadderToPlatform1Retracted;
    bool previousValueLadderToPlatform1Retracted;

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

    /// MonitorPoint: EMERGENCY_STOP_AZ_DRIVES

    /// Data associated with EMERGENCY_STOP_AZ_DRIVES.
    bool valueEmergencyStopAzDrives;
    ACS::Time timeEmergencyStopAzDrives;
    bool previousValueEmergencyStopAzDrives;

    /// MonitorPoint: EMERGENCY_STOP_INSIDE_ANTENNA_BASE

    /// Data associated with EMERGENCY_STOP_INSIDE_ANTENNA_BASE.
    bool valueEmergencyStopInsideAntennaBase;
    ACS::Time timeEmergencyStopInsideAntennaBase;
    bool previousValueEmergencyStopInsideAntennaBase;

    /// MonitorPoint: EMERGENCY_STOP_PLATFORM_2

    /// Data associated with EMERGENCY_STOP_PLATFORM_2.
    bool valueEmergencyStopPlatform2;
    ACS::Time timeEmergencyStopPlatform2;
    bool previousValueEmergencyStopPlatform2;

    /// MonitorPoint: EMERGENCY_STOP_LADDER_TO_PLATFORM_1

    /// Data associated with EMERGENCY_STOP_LADDER_TO_PLATFORM_1.
    bool valueEmergencyStopLadderToPlatform1;
    ACS::Time timeEmergencyStopLadderToPlatform1;
    bool previousValueEmergencyStopLadderToPlatform1;

    /// MonitorPoint: EMERGENCY_STOP_RECEIVER_CABIN

    /// Data associated with EMERGENCY_STOP_RECEIVER_CABIN.
    bool valueEmergencyStopReceiverCabin;
    ACS::Time timeEmergencyStopReceiverCabin;
    bool previousValueEmergencyStopReceiverCabin;

    /// MonitorPoint: EMERGENCY_STOP_PORTABLE_CONTROL_UNIT

    /// Data associated with EMERGENCY_STOP_PORTABLE_CONTROL_UNIT.
    bool valueEmergencyStopPortableControlUnit;
    ACS::Time timeEmergencyStopPortableControlUnit;
    bool previousValueEmergencyStopPortableControlUnit;

    /// MonitorPoint: EMERGENCY_STOP_AT_OUTSIDE_PEDESTAL

    /// Data associated with EMERGENCY_STOP_AT_OUTSIDE_PEDESTAL.
    bool valueEmergencyStopAtOutsidePedestal;
    ACS::Time timeEmergencyStopAtOutsidePedestal;
    bool previousValueEmergencyStopAtOutsidePedestal;

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

    /// MonitorPoint: COMMUNICATION_ERROR_ACU_UPS

    /// Data associated with COMMUNICATION_ERROR_ACU_UPS.
    bool valueCommunicationErrorAcuUps;
    ACS::Time timeCommunicationErrorAcuUps;
    bool previousValueCommunicationErrorAcuUps;

    /// MonitorPoint: METR_EQUIP_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrEquipStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppMetrEquipStatus;

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

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_2_ERR

    /// Data associated with METR_EQUIP_STATUS_TILTMETER_2_ERR.
    bool valueMetrEquipStatusTiltmeter2Err;
    ACS::Time timeMetrEquipStatusTiltmeter2Err;
    bool previousValueMetrEquipStatusTiltmeter2Err;

    /// MonitorPoint: METR_EQUIP_STATUS_TILTMETER_3_ERR

    /// Data associated with METR_EQUIP_STATUS_TILTMETER_3_ERR.
    bool valueMetrEquipStatusTiltmeter3Err;
    ACS::Time timeMetrEquipStatusTiltmeter3Err;
    bool previousValueMetrEquipStatusTiltmeter3Err;

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

    /// MonitorPoint: POWER_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorPowerStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppPowerStatus;

    /// MonitorPoint: MAIN_SW_POS_TRANSPORTABLE_PS

    /// Data associated with MAIN_SW_POS_TRANSPORTABLE_PS.
    bool valueMainSwPosTransportablePs;
    ACS::Time timeMainSwPosTransportablePs;
    bool previousValueMainSwPosTransportablePs;

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

    /// MonitorPoint: CIRCUIT_BREAKER_CRITICAL_CRYOGENIC_BUS

    /// Data associated with CIRCUIT_BREAKER_CRITICAL_CRYOGENIC_BUS.
    bool valueCircuitBreakerCriticalCryogenicBus;
    ACS::Time timeCircuitBreakerCriticalCryogenicBus;
    bool previousValueCircuitBreakerCriticalCryogenicBus;

    /// MonitorPoint: CIRCUIT_BREAKER_NON_CRITICAL_BUS

    /// Data associated with CIRCUIT_BREAKER_NON_CRITICAL_BUS.
    bool valueCircuitBreakerNonCriticalBus;
    ACS::Time timeCircuitBreakerNonCriticalBus;
    bool previousValueCircuitBreakerNonCriticalBus;

    /// MonitorPoint: AC_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAcStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppAcStatus;

    /// MonitorPoint: FAST_SWITCHING_OPERATING_MODE

    /// Data associated with FAST_SWITCHING_OPERATING_MODE.
    bool valueFastSwitchingOperatingMode;
    ACS::Time timeFastSwitchingOperatingMode;
    bool previousValueFastSwitchingOperatingMode;

    /// MonitorPoint: NORMAL_OPERATING_MODE

    /// Data associated with NORMAL_OPERATING_MODE.
    bool valueNormalOperatingMode;
    ACS::Time timeNormalOperatingMode;
    bool previousValueNormalOperatingMode;

    /// MonitorPoint: AIR_CONDITIONING_MANUAL_MODE

    /// Data associated with AIR_CONDITIONING_MANUAL_MODE.
    bool valueAirConditioningManualMode;
    ACS::Time timeAirConditioningManualMode;
    bool previousValueAirConditioningManualMode;

    /// MonitorPoint: AIR_CONDITIONING_AUTO_MODE

    /// Data associated with AIR_CONDITIONING_AUTO_MODE.
    bool valueAirConditioningAutoMode;
    ACS::Time timeAirConditioningAutoMode;
    bool previousValueAirConditioningAutoMode;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_A_ALARM

    /// Data associated with AIR_CONDITIONING_SYSTEM_A_ALARM.
    bool valueAirConditioningSystemAAlarm;
    ACS::Time timeAirConditioningSystemAAlarm;
    bool previousValueAirConditioningSystemAAlarm;

    /// MonitorPoint: AIR_CONDITIONING_SYSTEM_B_ALARM

    /// Data associated with AIR_CONDITIONING_SYSTEM_B_ALARM.
    bool valueAirConditioningSystemBAlarm;
    ACS::Time timeAirConditioningSystemBAlarm;
    bool previousValueAirConditioningSystemBAlarm;

    /// MonitorPoint: SELFTEST_ACTIVATED

    /// Data associated with SELFTEST_ACTIVATED.
    bool valueSelftestActivated;
    ACS::Time timeSelftestActivated;
    bool previousValueSelftestActivated;

    /// MonitorPoint: UPS_ALARMS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsAlarms;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppUpsAlarms;

    /// MonitorPoint: UPS_ALARMS_MAIN_FAILURE

    /// Data associated with UPS_ALARMS_MAIN_FAILURE.
    bool valueUpsAlarmsMainFailure;
    ACS::Time timeUpsAlarmsMainFailure;
    bool previousValueUpsAlarmsMainFailure;

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_FAILURE

    /// Data associated with UPS_ALARMS_RECTIFIER_FAILURE.
    bool valueUpsAlarmsRectifierFailure;
    ACS::Time timeUpsAlarmsRectifierFailure;
    bool previousValueUpsAlarmsRectifierFailure;

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_FUSE_BLOWN

    /// Data associated with UPS_ALARMS_RECTIFIER_FUSE_BLOWN.
    bool valueUpsAlarmsRectifierFuseBlown;
    ACS::Time timeUpsAlarmsRectifierFuseBlown;
    bool previousValueUpsAlarmsRectifierFuseBlown;

    /// MonitorPoint: UPS_ALARMS_THERMAL_IMAGE

    /// Data associated with UPS_ALARMS_THERMAL_IMAGE.
    bool valueUpsAlarmsThermalImage;
    ACS::Time timeUpsAlarmsThermalImage;
    bool previousValueUpsAlarmsThermalImage;

    /// MonitorPoint: UPS_ALARMS_RECTIFIER_OUTPUT_VOLTAGE

    /// Data associated with UPS_ALARMS_RECTIFIER_OUTPUT_VOLTAGE.
    bool valueUpsAlarmsRectifierOutputVoltage;
    ACS::Time timeUpsAlarmsRectifierOutputVoltage;
    bool previousValueUpsAlarmsRectifierOutputVoltage;

    /// MonitorPoint: UPS_ALARMS_UPS_PHASE_SEQUENCE

    /// Data associated with UPS_ALARMS_UPS_PHASE_SEQUENCE.
    bool valueUpsAlarmsUpsPhaseSequence;
    ACS::Time timeUpsAlarmsUpsPhaseSequence;
    bool previousValueUpsAlarmsUpsPhaseSequence;

    /// MonitorPoint: UPS_ALARMS_BATTERY_SWITCH_OPEN

    /// Data associated with UPS_ALARMS_BATTERY_SWITCH_OPEN.
    bool valueUpsAlarmsBatterySwitchOpen;
    ACS::Time timeUpsAlarmsBatterySwitchOpen;
    bool previousValueUpsAlarmsBatterySwitchOpen;

    /// MonitorPoint: UPS_ALARMS_BATTERY_DISCHARGED

    /// Data associated with UPS_ALARMS_BATTERY_DISCHARGED.
    bool valueUpsAlarmsBatteryDischarged;
    ACS::Time timeUpsAlarmsBatteryDischarged;
    bool previousValueUpsAlarmsBatteryDischarged;

    /// MonitorPoint: UPS_ALARMS_BATTERY_CAPACITY

    /// Data associated with UPS_ALARMS_BATTERY_CAPACITY.
    bool valueUpsAlarmsBatteryCapacity;
    ACS::Time timeUpsAlarmsBatteryCapacity;
    bool previousValueUpsAlarmsBatteryCapacity;

    /// MonitorPoint: UPS_ALARMS_BATTERY_FAULT

    /// Data associated with UPS_ALARMS_BATTERY_FAULT.
    bool valueUpsAlarmsBatteryFault;
    ACS::Time timeUpsAlarmsBatteryFault;
    bool previousValueUpsAlarmsBatteryFault;

    /// MonitorPoint: UPS_ALARMS_BATTERY_TEST

    /// Data associated with UPS_ALARMS_BATTERY_TEST.
    bool valueUpsAlarmsBatteryTest;
    ACS::Time timeUpsAlarmsBatteryTest;
    bool previousValueUpsAlarmsBatteryTest;

    /// MonitorPoint: UPS_ALARMS_PLL_FAULT

    /// Data associated with UPS_ALARMS_PLL_FAULT.
    bool valueUpsAlarmsPllFault;
    ACS::Time timeUpsAlarmsPllFault;
    bool previousValueUpsAlarmsPllFault;

    /// MonitorPoint: UPS_ALARMS_INVERTER_VOLTAGE

    /// Data associated with UPS_ALARMS_INVERTER_VOLTAGE.
    bool valueUpsAlarmsInverterVoltage;
    ACS::Time timeUpsAlarmsInverterVoltage;
    bool previousValueUpsAlarmsInverterVoltage;

    /// MonitorPoint: UPS_ALARMS_OVERLOAD

    /// Data associated with UPS_ALARMS_OVERLOAD.
    bool valueUpsAlarmsOverload;
    ACS::Time timeUpsAlarmsOverload;
    bool previousValueUpsAlarmsOverload;

    /// MonitorPoint: UPS_ALARMS_EMERGENCY_BYPASS_INACTIVE

    /// Data associated with UPS_ALARMS_EMERGENCY_BYPASS_INACTIVE.
    bool valueUpsAlarmsEmergencyBypassInactive;
    ACS::Time timeUpsAlarmsEmergencyBypassInactive;
    bool previousValueUpsAlarmsEmergencyBypassInactive;

    /// MonitorPoint: UPS_ALARMS_LOAD_SUPPLY

    /// Data associated with UPS_ALARMS_LOAD_SUPPLY.
    bool valueUpsAlarmsLoadSupply;
    ACS::Time timeUpsAlarmsLoadSupply;
    bool previousValueUpsAlarmsLoadSupply;

    /// MonitorPoint: UPS_ALARMS_RETRANSFER_BLOCKED

    /// Data associated with UPS_ALARMS_RETRANSFER_BLOCKED.
    bool valueUpsAlarmsRetransferBlocked;
    ACS::Time timeUpsAlarmsRetransferBlocked;
    bool previousValueUpsAlarmsRetransferBlocked;

    /// MonitorPoint: UPS_ALARMS_MANUAL_BYPASS_SWITCH

    /// Data associated with UPS_ALARMS_MANUAL_BYPASS_SWITCH.
    bool valueUpsAlarmsManualBypassSwitch;
    ACS::Time timeUpsAlarmsManualBypassSwitch;
    bool previousValueUpsAlarmsManualBypassSwitch;

    /// MonitorPoint: UPS_ALARMS_OUTPUT_CIRCUIT_BREAKER

    /// Data associated with UPS_ALARMS_OUTPUT_CIRCUIT_BREAKER.
    bool valueUpsAlarmsOutputCircuitBreaker;
    ACS::Time timeUpsAlarmsOutputCircuitBreaker;
    bool previousValueUpsAlarmsOutputCircuitBreaker;

    /// MonitorPoint: UPS_ALARMS_OPTION

    /// Data associated with UPS_ALARMS_OPTION.
    bool valueUpsAlarmsOption;
    ACS::Time timeUpsAlarmsOption;
    bool previousValueUpsAlarmsOption;

    /// MonitorPoint: UPS_ALARMS_HIGH_TEMPERATURE

    /// Data associated with UPS_ALARMS_HIGH_TEMPERATURE.
    bool valueUpsAlarmsHighTemperature;
    ACS::Time timeUpsAlarmsHighTemperature;
    bool previousValueUpsAlarmsHighTemperature;

    /// MonitorPoint: UPS_ALARMS_BYPASS_SWITCH_POSITION

    /// Data associated with UPS_ALARMS_BYPASS_SWITCH_POSITION.
    bool valueUpsAlarmsBypassSwitchPosition;
    ACS::Time timeUpsAlarmsBypassSwitchPosition;
    bool previousValueUpsAlarmsBypassSwitchPosition;

    /// MonitorPoint: UPS_ALARMS_POWER_OFF

    /// Data associated with UPS_ALARMS_POWER_OFF.
    bool valueUpsAlarmsPowerOff;
    ACS::Time timeUpsAlarmsPowerOff;
    bool previousValueUpsAlarmsPowerOff;

    /// MonitorPoint: UPS_ALARMS_INVERTER_BRIDGE_BLOCKED

    /// Data associated with UPS_ALARMS_INVERTER_BRIDGE_BLOCKED.
    bool valueUpsAlarmsInverterBridgeBlocked;
    ACS::Time timeUpsAlarmsInverterBridgeBlocked;
    bool previousValueUpsAlarmsInverterBridgeBlocked;

    /// MonitorPoint: UPS_ALARMS_SHORT_CIRCUIT

    /// Data associated with UPS_ALARMS_SHORT_CIRCUIT.
    bool valueUpsAlarmsShortCircuit;
    ACS::Time timeUpsAlarmsShortCircuit;
    bool previousValueUpsAlarmsShortCircuit;

    /// MonitorPoint: UPS_ALARMS_COMM_ERROR

    /// Data associated with UPS_ALARMS_COMM_ERROR.
    bool valueUpsAlarmsCommError;
    ACS::Time timeUpsAlarmsCommError;
    bool previousValueUpsAlarmsCommError;

    /// MonitorPoint: UPS_BATTERY_OUTPUT

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsBatteryOutput;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUpsBatteryOutput;

    /// MonitorPoint: UPS_BATTERY_VOLTAGE

    /// Data associated with UPS_BATTERY_VOLTAGE.
    float valueUpsBatteryVoltage;
    ACS::Time timeUpsBatteryVoltage;
    float previousValueUpsBatteryVoltage;

    /// MonitorPoint: UPS_BATTERY_CURRENT

    /// Data associated with UPS_BATTERY_CURRENT.
    float valueUpsBatteryCurrent;
    ACS::Time timeUpsBatteryCurrent;
    float previousValueUpsBatteryCurrent;

    /// MonitorPoint: UPS_BATTERY_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsBatteryStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUpsBatteryStatus;

    /// MonitorPoint: NOMINAL_BATTERY_AUTOMOMY_MINUTES

    /// Data associated with NOMINAL_BATTERY_AUTOMOMY_MINUTES.
    int valueNominalBatteryAutomomyMinutes;
    ACS::Time timeNominalBatteryAutomomyMinutes;
    int previousValueNominalBatteryAutomomyMinutes;

    /// MonitorPoint: NOMINAL_BATTERY_AUTONOMY_PERCENTAGE

    /// Data associated with NOMINAL_BATTERY_AUTONOMY_PERCENTAGE.
    int valueNominalBatteryAutonomyPercentage;
    ACS::Time timeNominalBatteryAutonomyPercentage;
    int previousValueNominalBatteryAutonomyPercentage;

    /// MonitorPoint: UPS_BYPASS_VOLTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsBypassVolts;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUpsBypassVolts;

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_1

    /// Data associated with BYPASS_VOLTAGE_PHASE_1.
    float valueBypassVoltagePhase1;
    ACS::Time timeBypassVoltagePhase1;
    float previousValueBypassVoltagePhase1;

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_2

    /// Data associated with BYPASS_VOLTAGE_PHASE_2.
    float valueBypassVoltagePhase2;
    ACS::Time timeBypassVoltagePhase2;
    float previousValueBypassVoltagePhase2;

    /// MonitorPoint: BYPASS_VOLTAGE_PHASE_3

    /// Data associated with BYPASS_VOLTAGE_PHASE_3.
    float valueBypassVoltagePhase3;
    ACS::Time timeBypassVoltagePhase3;
    float previousValueBypassVoltagePhase3;

    /// MonitorPoint: UPS_FREQS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsFreqs;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUpsFreqs;

    /// MonitorPoint: BYPASS_FREQUENCY

    /// Data associated with BYPASS_FREQUENCY.
    int valueBypassFrequency;
    ACS::Time timeBypassFrequency;
    int previousValueBypassFrequency;

    /// MonitorPoint: INVERTER_FREQUENCY

    /// Data associated with INVERTER_FREQUENCY.
    int valueInverterFrequency;
    ACS::Time timeInverterFrequency;
    int previousValueInverterFrequency;

    /// MonitorPoint: UPS_INVERTER_VOLTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorUpsInverterVolts;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppUpsInverterVolts;

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_1

    /// Data associated with INVERTER_VOLTAGE_PHASE_1.
    float valueInverterVoltagePhase1;
    ACS::Time timeInverterVoltagePhase1;
    float previousValueInverterVoltagePhase1;

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_2

    /// Data associated with INVERTER_VOLTAGE_PHASE_2.
    float valueInverterVoltagePhase2;
    ACS::Time timeInverterVoltagePhase2;
    float previousValueInverterVoltagePhase2;

    /// MonitorPoint: INVERTER_VOLTAGE_PHASE_3

    /// Data associated with INVERTER_VOLTAGE_PHASE_3.
    float valueInverterVoltagePhase3;
    ACS::Time timeInverterVoltagePhase3;
    float previousValueInverterVoltagePhase3;

    /// MonitorPoint: ALS_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAlsStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppAlsStatus;

    /// MonitorPoint: ALS_STATUS_AZ_PUMP_FAIL

    /// Data associated with ALS_STATUS_AZ_PUMP_FAIL.
    bool valueAlsStatusAzPumpFail;
    ACS::Time timeAlsStatusAzPumpFail;
    bool previousValueAlsStatusAzPumpFail;

    /// MonitorPoint: ALS_STATUS_AZ_INSUFFICIENT_GREASE

    /// Data associated with ALS_STATUS_AZ_INSUFFICIENT_GREASE.
    bool valueAlsStatusAzInsufficientGrease;
    ACS::Time timeAlsStatusAzInsufficientGrease;
    bool previousValueAlsStatusAzInsufficientGrease;

    /// MonitorPoint: ALS_STATUS_AZ_LOW_GREASE

    /// Data associated with ALS_STATUS_AZ_LOW_GREASE.
    bool valueAlsStatusAzLowGrease;
    ACS::Time timeAlsStatusAzLowGrease;
    bool previousValueAlsStatusAzLowGrease;

    /// MonitorPoint: ALS_STATUS_AZ_LUB_ONGOING

    /// Data associated with ALS_STATUS_AZ_LUB_ONGOING.
    bool valueAlsStatusAzLubOngoing;
    ACS::Time timeAlsStatusAzLubOngoing;
    bool previousValueAlsStatusAzLubOngoing;

    /// MonitorPoint: ALS_STATUS_AZ_LUB_SUCCESS

    /// Data associated with ALS_STATUS_AZ_LUB_SUCCESS.
    bool valueAlsStatusAzLubSuccess;
    ACS::Time timeAlsStatusAzLubSuccess;
    bool previousValueAlsStatusAzLubSuccess;

    /// MonitorPoint: ALS_STATUS_EL_PUMP_FAIL

    /// Data associated with ALS_STATUS_EL_PUMP_FAIL.
    bool valueAlsStatusElPumpFail;
    ACS::Time timeAlsStatusElPumpFail;
    bool previousValueAlsStatusElPumpFail;

    /// MonitorPoint: ALS_STATUS_EL_INSUFFICIENT_GREASE

    /// Data associated with ALS_STATUS_EL_INSUFFICIENT_GREASE.
    bool valueAlsStatusElInsufficientGrease;
    ACS::Time timeAlsStatusElInsufficientGrease;
    bool previousValueAlsStatusElInsufficientGrease;

    /// MonitorPoint: ALS_STATUS_EL_LOW_GREASE

    /// Data associated with ALS_STATUS_EL_LOW_GREASE.
    bool valueAlsStatusElLowGrease;
    ACS::Time timeAlsStatusElLowGrease;
    bool previousValueAlsStatusElLowGrease;

    /// MonitorPoint: ALS_STATUS_EL_LUB_ONGOING

    /// Data associated with ALS_STATUS_EL_LUB_ONGOING.
    bool valueAlsStatusElLubOngoing;
    ACS::Time timeAlsStatusElLubOngoing;
    bool previousValueAlsStatusElLubOngoing;

    /// MonitorPoint: ALS_STATUS_EL_LUB_SUCCESS

    /// Data associated with ALS_STATUS_EL_LUB_SUCCESS.
    bool valueAlsStatusElLubSuccess;
    ACS::Time timeAlsStatusElLubSuccess;
    bool previousValueAlsStatusElLubSuccess;

    /// MonitorPoint: METR_COEFF_0

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrCoeff0;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROdouble > sppMetrCoeff0;

    /// MonitorPoint: METR_COEFF_1

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrCoeff1;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROdouble > sppMetrCoeff1;

    /// MonitorPoint: SUBREF_CORR_ROT

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSubrefCorrRot;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppSubrefCorrRot;

    /// MonitorPoint: SUBREF_CORR_ROT_X_TIP

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefCorrRotXTip;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefCorrRotXTip;

    /// Data associated with SUBREF_CORR_ROT_X_TIP.
    float valueSubrefCorrRotXTip;
    ACS::Time timeSubrefCorrRotXTip;
    float previousValueSubrefCorrRotXTip;

    /// MonitorPoint: SUBREF_CORR_ROT_Y_TILT

    /// The scaling factor for converting data from raw to world.
    double scaleSubrefCorrRotYTilt;

    /// The offset factor for converting data from raw to world.
    double offsetSubrefCorrRotYTilt;

    /// Data associated with SUBREF_CORR_ROT_Y_TILT.
    float valueSubrefCorrRotYTilt;
    ACS::Time timeSubrefCorrRotYTilt;
    float previousValueSubrefCorrRotYTilt;

    /// MonitorPoint: SUBREF_STATUS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSubrefStatus;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppSubrefStatus;

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

    /// MonitorPoint: SUBREF_LIMITS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorSubrefLimits;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppSubrefLimits;

    /// MonitorPoint: SL_ACT_1_NEGATIVE_LIMIT

    /// Data associated with SL_ACT_1_NEGATIVE_LIMIT.
    bool valueSlAct1NegativeLimit;
    ACS::Time timeSlAct1NegativeLimit;
    bool previousValueSlAct1NegativeLimit;

    /// MonitorPoint: SL_ACT_2_NEGATIVE_LIMIT

    /// Data associated with SL_ACT_2_NEGATIVE_LIMIT.
    bool valueSlAct2NegativeLimit;
    ACS::Time timeSlAct2NegativeLimit;
    bool previousValueSlAct2NegativeLimit;

    /// MonitorPoint: SL_ACT_3_NEGATIVE_LIMIT

    /// Data associated with SL_ACT_3_NEGATIVE_LIMIT.
    bool valueSlAct3NegativeLimit;
    ACS::Time timeSlAct3NegativeLimit;
    bool previousValueSlAct3NegativeLimit;

    /// MonitorPoint: SL_ACT_4_NEGATIVE_LIMIT

    /// Data associated with SL_ACT_4_NEGATIVE_LIMIT.
    bool valueSlAct4NegativeLimit;
    ACS::Time timeSlAct4NegativeLimit;
    bool previousValueSlAct4NegativeLimit;

    /// MonitorPoint: SL_ACT_5_NEGATIVE_LIMIT

    /// Data associated with SL_ACT_5_NEGATIVE_LIMIT.
    bool valueSlAct5NegativeLimit;
    ACS::Time timeSlAct5NegativeLimit;
    bool previousValueSlAct5NegativeLimit;

    /// MonitorPoint: SL_ACT_6_NEGATIVE_LIMIT

    /// Data associated with SL_ACT_6_NEGATIVE_LIMIT.
    bool valueSlAct6NegativeLimit;
    ACS::Time timeSlAct6NegativeLimit;
    bool previousValueSlAct6NegativeLimit;

    /// MonitorPoint: SL_ACT_1_POSITIVE_LIMIT

    /// Data associated with SL_ACT_1_POSITIVE_LIMIT.
    bool valueSlAct1PositiveLimit;
    ACS::Time timeSlAct1PositiveLimit;
    bool previousValueSlAct1PositiveLimit;

    /// MonitorPoint: SL_ACT_2_POSITIVE_LIMIT

    /// Data associated with SL_ACT_2_POSITIVE_LIMIT.
    bool valueSlAct2PositiveLimit;
    ACS::Time timeSlAct2PositiveLimit;
    bool previousValueSlAct2PositiveLimit;

    /// MonitorPoint: SL_ACT_3_POSITIVE_LIMIT

    /// Data associated with SL_ACT_3_POSITIVE_LIMIT.
    bool valueSlAct3PositiveLimit;
    ACS::Time timeSlAct3PositiveLimit;
    bool previousValueSlAct3PositiveLimit;

    /// MonitorPoint: SL_ACT_4_POSITIVE_LIMIT

    /// Data associated with SL_ACT_4_POSITIVE_LIMIT.
    bool valueSlAct4PositiveLimit;
    ACS::Time timeSlAct4PositiveLimit;
    bool previousValueSlAct4PositiveLimit;

    /// MonitorPoint: SL_ACT_5_POSITIVE_LIMIT

    /// Data associated with SL_ACT_5_POSITIVE_LIMIT.
    bool valueSlAct5PositiveLimit;
    ACS::Time timeSlAct5PositiveLimit;
    bool previousValueSlAct5PositiveLimit;

    /// MonitorPoint: SL_ACT_6_POSITIVE_LIMIT

    /// Data associated with SL_ACT_6_POSITIVE_LIMIT.
    bool valueSlAct6PositiveLimit;
    ACS::Time timeSlAct6PositiveLimit;
    bool previousValueSlAct6PositiveLimit;

    /// MonitorPoint: SL_HEXA_NEGATIVE_X_LIMIT

    /// Data associated with SL_HEXA_NEGATIVE_X_LIMIT.
    bool valueSlHexaNegativeXLimit;
    ACS::Time timeSlHexaNegativeXLimit;
    bool previousValueSlHexaNegativeXLimit;

    /// MonitorPoint: SL_HEXA_POSITIVE_X_LIMIT

    /// Data associated with SL_HEXA_POSITIVE_X_LIMIT.
    bool valueSlHexaPositiveXLimit;
    ACS::Time timeSlHexaPositiveXLimit;
    bool previousValueSlHexaPositiveXLimit;

    /// MonitorPoint: SL_HEXA_NEGATIVE_Y_LIMIT

    /// Data associated with SL_HEXA_NEGATIVE_Y_LIMIT.
    bool valueSlHexaNegativeYLimit;
    ACS::Time timeSlHexaNegativeYLimit;
    bool previousValueSlHexaNegativeYLimit;

    /// MonitorPoint: SL_HEXA_POSITIVE_Y_LIMIT

    /// Data associated with SL_HEXA_POSITIVE_Y_LIMIT.
    bool valueSlHexaPositiveYLimit;
    ACS::Time timeSlHexaPositiveYLimit;
    bool previousValueSlHexaPositiveYLimit;

    /// MonitorPoint: SL_HEXA_NEGATIVE_Z_LIMIT

    /// Data associated with SL_HEXA_NEGATIVE_Z_LIMIT.
    bool valueSlHexaNegativeZLimit;
    ACS::Time timeSlHexaNegativeZLimit;
    bool previousValueSlHexaNegativeZLimit;

    /// MonitorPoint: SL_HEXA_POSITIVE_Z_LIMIT

    /// Data associated with SL_HEXA_POSITIVE_Z_LIMIT.
    bool valueSlHexaPositiveZLimit;
    ACS::Time timeSlHexaPositiveZLimit;
    bool previousValueSlHexaPositiveZLimit;

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_X_LIMIT

    /// Data associated with SL_HEXA_NEGATIVE_THETA_X_LIMIT.
    bool valueSlHexaNegativeThetaXLimit;
    ACS::Time timeSlHexaNegativeThetaXLimit;
    bool previousValueSlHexaNegativeThetaXLimit;

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_X_LIMIT

    /// Data associated with SL_HEXA_POSITIVE_THETA_X_LIMIT.
    bool valueSlHexaPositiveThetaXLimit;
    ACS::Time timeSlHexaPositiveThetaXLimit;
    bool previousValueSlHexaPositiveThetaXLimit;

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_Y_LIMIT

    /// Data associated with SL_HEXA_NEGATIVE_THETA_Y_LIMIT.
    bool valueSlHexaNegativeThetaYLimit;
    ACS::Time timeSlHexaNegativeThetaYLimit;
    bool previousValueSlHexaNegativeThetaYLimit;

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_Y_LIMIT

    /// Data associated with SL_HEXA_POSITIVE_THETA_Y_LIMIT.
    bool valueSlHexaPositiveThetaYLimit;
    ACS::Time timeSlHexaPositiveThetaYLimit;
    bool previousValueSlHexaPositiveThetaYLimit;

    /// MonitorPoint: SL_HEXA_NEGATIVE_THETA_Z_LIMIT

    /// Data associated with SL_HEXA_NEGATIVE_THETA_Z_LIMIT.
    bool valueSlHexaNegativeThetaZLimit;
    ACS::Time timeSlHexaNegativeThetaZLimit;
    bool previousValueSlHexaNegativeThetaZLimit;

    /// MonitorPoint: SL_HEXA_POSITIVE_THETA_Z_LIMIT

    /// Data associated with SL_HEXA_POSITIVE_THETA_Z_LIMIT.
    bool valueSlHexaPositiveThetaZLimit;
    ACS::Time timeSlHexaPositiveThetaZLimit;
    bool previousValueSlHexaPositiveThetaZLimit;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_1

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_1.
    bool valueSlHexapodVerticalCollisionSwitch1;
    ACS::Time timeSlHexapodVerticalCollisionSwitch1;
    bool previousValueSlHexapodVerticalCollisionSwitch1;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_2

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_2.
    bool valueSlHexapodVerticalCollisionSwitch2;
    ACS::Time timeSlHexapodVerticalCollisionSwitch2;
    bool previousValueSlHexapodVerticalCollisionSwitch2;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_3

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_3.
    bool valueSlHexapodVerticalCollisionSwitch3;
    ACS::Time timeSlHexapodVerticalCollisionSwitch3;
    bool previousValueSlHexapodVerticalCollisionSwitch3;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_4

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_4.
    bool valueSlHexapodVerticalCollisionSwitch4;
    ACS::Time timeSlHexapodVerticalCollisionSwitch4;
    bool previousValueSlHexapodVerticalCollisionSwitch4;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_5

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_5.
    bool valueSlHexapodVerticalCollisionSwitch5;
    ACS::Time timeSlHexapodVerticalCollisionSwitch5;
    bool previousValueSlHexapodVerticalCollisionSwitch5;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_6

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_6.
    bool valueSlHexapodVerticalCollisionSwitch6;
    ACS::Time timeSlHexapodVerticalCollisionSwitch6;
    bool previousValueSlHexapodVerticalCollisionSwitch6;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_7

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_7.
    bool valueSlHexapodVerticalCollisionSwitch7;
    ACS::Time timeSlHexapodVerticalCollisionSwitch7;
    bool previousValueSlHexapodVerticalCollisionSwitch7;

    /// MonitorPoint: SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_8

    /// Data associated with SL_HEXAPOD_VERTICAL_COLLISION_SWITCH_8.
    bool valueSlHexapodVerticalCollisionSwitch8;
    ACS::Time timeSlHexapodVerticalCollisionSwitch8;
    bool previousValueSlHexapodVerticalCollisionSwitch8;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_1

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_1.
    bool valueSlHexapodHorizontalCollisionSwitch1;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch1;
    bool previousValueSlHexapodHorizontalCollisionSwitch1;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_2

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_2.
    bool valueSlHexapodHorizontalCollisionSwitch2;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch2;
    bool previousValueSlHexapodHorizontalCollisionSwitch2;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_3

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_3.
    bool valueSlHexapodHorizontalCollisionSwitch3;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch3;
    bool previousValueSlHexapodHorizontalCollisionSwitch3;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_4

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_4.
    bool valueSlHexapodHorizontalCollisionSwitch4;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch4;
    bool previousValueSlHexapodHorizontalCollisionSwitch4;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_5

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_5.
    bool valueSlHexapodHorizontalCollisionSwitch5;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch5;
    bool previousValueSlHexapodHorizontalCollisionSwitch5;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_6

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_6.
    bool valueSlHexapodHorizontalCollisionSwitch6;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch6;
    bool previousValueSlHexapodHorizontalCollisionSwitch6;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_7

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_7.
    bool valueSlHexapodHorizontalCollisionSwitch7;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch7;
    bool previousValueSlHexapodHorizontalCollisionSwitch7;

    /// MonitorPoint: SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_8

    /// Data associated with SL_HEXAPOD_HORIZONTAL_COLLISION_SWITCH_8.
    bool valueSlHexapodHorizontalCollisionSwitch8;
    ACS::Time timeSlHexapodHorizontalCollisionSwitch8;
    bool previousValueSlHexapodHorizontalCollisionSwitch8;

    /// MonitorPoint: EL_MOTOR_CURRENTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElMotorCurrents;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppElMotorCurrents;

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR1

    /// Data associated with EL_MOTOR_CURRENTS_MOTOR1.
    short valueElMotorCurrentsMotor1;
    ACS::Time timeElMotorCurrentsMotor1;
    short previousValueElMotorCurrentsMotor1;

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR2

    /// Data associated with EL_MOTOR_CURRENTS_MOTOR2.
    short valueElMotorCurrentsMotor2;
    ACS::Time timeElMotorCurrentsMotor2;
    short previousValueElMotorCurrentsMotor2;

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR3

    /// Data associated with EL_MOTOR_CURRENTS_MOTOR3.
    short valueElMotorCurrentsMotor3;
    ACS::Time timeElMotorCurrentsMotor3;
    short previousValueElMotorCurrentsMotor3;

    /// MonitorPoint: EL_MOTOR_CURRENTS_MOTOR4

    /// Data associated with EL_MOTOR_CURRENTS_MOTOR4.
    short valueElMotorCurrentsMotor4;
    ACS::Time timeElMotorCurrentsMotor4;
    short previousValueElMotorCurrentsMotor4;

    /// MonitorPoint: EL_MOTOR_TEMPS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElMotorTemps;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppElMotorTemps;

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR1

    /// The scaling factor for converting data from raw to world.
    double scaleElMotorTempsMotor1;

    /// The offset factor for converting data from raw to world.
    double offsetElMotorTempsMotor1;

    /// Data associated with EL_MOTOR_TEMPS_MOTOR1.
    short valueElMotorTempsMotor1;
    ACS::Time timeElMotorTempsMotor1;
    short previousValueElMotorTempsMotor1;

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR2

    /// The scaling factor for converting data from raw to world.
    double scaleElMotorTempsMotor2;

    /// The offset factor for converting data from raw to world.
    double offsetElMotorTempsMotor2;

    /// Data associated with EL_MOTOR_TEMPS_MOTOR2.
    short valueElMotorTempsMotor2;
    ACS::Time timeElMotorTempsMotor2;
    short previousValueElMotorTempsMotor2;

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR3

    /// The scaling factor for converting data from raw to world.
    double scaleElMotorTempsMotor3;

    /// The offset factor for converting data from raw to world.
    double offsetElMotorTempsMotor3;

    /// Data associated with EL_MOTOR_TEMPS_MOTOR3.
    short valueElMotorTempsMotor3;
    ACS::Time timeElMotorTempsMotor3;
    short previousValueElMotorTempsMotor3;

    /// MonitorPoint: EL_MOTOR_TEMPS_MOTOR4

    /// The scaling factor for converting data from raw to world.
    double scaleElMotorTempsMotor4;

    /// The offset factor for converting data from raw to world.
    double offsetElMotorTempsMotor4;

    /// Data associated with EL_MOTOR_TEMPS_MOTOR4.
    short valueElMotorTempsMotor4;
    ACS::Time timeElMotorTempsMotor4;
    short previousValueElMotorTempsMotor4;

    /// MonitorPoint: EL_MOTOR_TORQUE

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorElMotorTorque;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppElMotorTorque;

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR1

    /// Data associated with EL_MOTOR_TORQUE_MOTOR1.
    short valueElMotorTorqueMotor1;
    ACS::Time timeElMotorTorqueMotor1;
    short previousValueElMotorTorqueMotor1;

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR2

    /// Data associated with EL_MOTOR_TORQUE_MOTOR2.
    short valueElMotorTorqueMotor2;
    ACS::Time timeElMotorTorqueMotor2;
    short previousValueElMotorTorqueMotor2;

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR3

    /// Data associated with EL_MOTOR_TORQUE_MOTOR3.
    short valueElMotorTorqueMotor3;
    ACS::Time timeElMotorTorqueMotor3;
    short previousValueElMotorTorqueMotor3;

    /// MonitorPoint: EL_MOTOR_TORQUE_MOTOR4

    /// Data associated with EL_MOTOR_TORQUE_MOTOR4.
    short valueElMotorTorqueMotor4;
    ACS::Time timeElMotorTorqueMotor4;
    short previousValueElMotorTorqueMotor4;

    /// MonitorPoint: METR_DELTAS_TEMP

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDeltasTemp;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrDeltasTemp;

    /// MonitorPoint: METR_DELTAS_TEMP_AZ_CORRECTION

    /// Data associated with METR_DELTAS_TEMP_AZ_CORRECTION.
    int valueMetrDeltasTempAzCorrection;
    ACS::Time timeMetrDeltasTempAzCorrection;
    int previousValueMetrDeltasTempAzCorrection;

    /// MonitorPoint: METR_DELTAS_TEMP_EL_CORRECTION

    /// Data associated with METR_DELTAS_TEMP_EL_CORRECTION.
    int valueMetrDeltasTempElCorrection;
    ACS::Time timeMetrDeltasTempElCorrection;
    int previousValueMetrDeltasTempElCorrection;

    /// MonitorPoint: METR_DISPL_0

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDispl0;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppMetrDispl0;

    /// MonitorPoint: METR_DISPL_1

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDispl1;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppMetrDispl1;

    /// MonitorPoint: METR_DISPL_2

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDispl2;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppMetrDispl2;

    /// MonitorPoint: METR_DISPL_3

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrDispl3;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlong > sppMetrDispl3;

    /// MonitorPoint: AZ_MOTOR_CURRENTS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzMotorCurrents;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppAzMotorCurrents;

    /// MonitorPoint: AZ_MOTOR_CURRENTS_MOTOR1

    /// Data associated with AZ_MOTOR_CURRENTS_MOTOR1.
    short valueAzMotorCurrentsMotor1;
    ACS::Time timeAzMotorCurrentsMotor1;
    short previousValueAzMotorCurrentsMotor1;

    /// MonitorPoint: AZ_MOTOR_CURRENTS_MOTOR2

    /// Data associated with AZ_MOTOR_CURRENTS_MOTOR2.
    short valueAzMotorCurrentsMotor2;
    ACS::Time timeAzMotorCurrentsMotor2;
    short previousValueAzMotorCurrentsMotor2;

    /// MonitorPoint: AZ_MOTOR_TEMPS

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzMotorTemps;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppAzMotorTemps;

    /// MonitorPoint: AZ_MOTOR_TEMPS_MOTOR1

    /// The scaling factor for converting data from raw to world.
    double scaleAzMotorTempsMotor1;

    /// The offset factor for converting data from raw to world.
    double offsetAzMotorTempsMotor1;

    /// Data associated with AZ_MOTOR_TEMPS_MOTOR1.
    short valueAzMotorTempsMotor1;
    ACS::Time timeAzMotorTempsMotor1;
    short previousValueAzMotorTempsMotor1;

    /// MonitorPoint: AZ_MOTOR_TEMPS_MOTOR2

    /// The scaling factor for converting data from raw to world.
    double scaleAzMotorTempsMotor2;

    /// The offset factor for converting data from raw to world.
    double offsetAzMotorTempsMotor2;

    /// Data associated with AZ_MOTOR_TEMPS_MOTOR2.
    short valueAzMotorTempsMotor2;
    ACS::Time timeAzMotorTempsMotor2;
    short previousValueAzMotorTempsMotor2;

    /// MonitorPoint: AZ_MOTOR_TORQUE

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorAzMotorTorque;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppAzMotorTorque;

    /// MonitorPoint: AZ_MOTOR_TORQUE_MOTOR1

    /// Data associated with AZ_MOTOR_TORQUE_MOTOR1.
    short valueAzMotorTorqueMotor1;
    ACS::Time timeAzMotorTorqueMotor1;
    short previousValueAzMotorTorqueMotor1;

    /// MonitorPoint: AZ_MOTOR_TORQUE_MOTOR2

    /// Data associated with AZ_MOTOR_TORQUE_MOTOR2.
    short valueAzMotorTorqueMotor2;
    ACS::Time timeAzMotorTorqueMotor2;
    short previousValueAzMotorTorqueMotor2;

    /// MonitorPoint: METR_MODE

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrMode;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer< baci::ROpattern > sppMetrMode;

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

    /// MonitorPoint: METR_MODE_TEMP_COMP_ENABLED

    /// Data associated with METR_MODE_TEMP_COMP_ENABLED.
    bool valueMetrModeTempCompEnabled;
    ACS::Time timeMetrModeTempCompEnabled;
    bool previousValueMetrModeTempCompEnabled;

    /// MonitorPoint: METR_MODE_LASER_BASED_COMP_ENABLED

    /// Data associated with METR_MODE_LASER_BASED_COMP_ENABLED.
    bool valueMetrModeLaserBasedCompEnabled;
    ACS::Time timeMetrModeLaserBasedCompEnabled;
    bool previousValueMetrModeLaserBasedCompEnabled;

    /// MonitorPoint: METR_MODE_FRICTION_COMP_ALGORITHM_ENABLED

    /// Data associated with METR_MODE_FRICTION_COMP_ALGORITHM_ENABLED.
    bool valueMetrModeFrictionCompAlgorithmEnabled;
    ACS::Time timeMetrModeFrictionCompAlgorithmEnabled;
    bool previousValueMetrModeFrictionCompAlgorithmEnabled;

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

    /// MonitorPoint: METR_TILT_0

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTilt0;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTilt0;

    /// MonitorPoint: METR_TILT_0_X

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt0X;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt0X;

    /// Data associated with METR_TILT_0_X.
    float valueMetrTilt0X;
    ACS::Time timeMetrTilt0X;
    float previousValueMetrTilt0X;

    /// MonitorPoint: METR_TILT_0_Y

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt0Y;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt0Y;

    /// Data associated with METR_TILT_0_Y.
    float valueMetrTilt0Y;
    ACS::Time timeMetrTilt0Y;
    float previousValueMetrTilt0Y;

    /// MonitorPoint: METR_TILT_0_TEMPERATURE

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt0Temperature;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt0Temperature;

    /// Data associated with METR_TILT_0_TEMPERATURE.
    float valueMetrTilt0Temperature;
    ACS::Time timeMetrTilt0Temperature;
    float previousValueMetrTilt0Temperature;

    /// MonitorPoint: METR_TILT_1

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTilt1;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTilt1;

    /// MonitorPoint: METR_TILT_1_X

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt1X;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt1X;

    /// Data associated with METR_TILT_1_X.
    float valueMetrTilt1X;
    ACS::Time timeMetrTilt1X;
    float previousValueMetrTilt1X;

    /// MonitorPoint: METR_TILT_1_Y

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt1Y;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt1Y;

    /// Data associated with METR_TILT_1_Y.
    float valueMetrTilt1Y;
    ACS::Time timeMetrTilt1Y;
    float previousValueMetrTilt1Y;

    /// MonitorPoint: METR_TILT_1_TEMPERATURE

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt1Temperature;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt1Temperature;

    /// Data associated with METR_TILT_1_TEMPERATURE.
    float valueMetrTilt1Temperature;
    ACS::Time timeMetrTilt1Temperature;
    float previousValueMetrTilt1Temperature;

    /// MonitorPoint: METR_TILT_2

    /// The relative can address for this monitor point.
    unsigned long rcaMonitorMetrTilt2;

    /// The ACS smart property pointer for getting the property.

    baci::SmartPropertyPointer<
        baci::ROlongSeq > sppMetrTilt2;

    /// MonitorPoint: METR_TILT_2_X

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt2X;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt2X;

    /// Data associated with METR_TILT_2_X.
    float valueMetrTilt2X;
    ACS::Time timeMetrTilt2X;
    float previousValueMetrTilt2X;

    /// MonitorPoint: METR_TILT_2_Y

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt2Y;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt2Y;

    /// Data associated with METR_TILT_2_Y.
    float valueMetrTilt2Y;
    ACS::Time timeMetrTilt2Y;
    float previousValueMetrTilt2Y;

    /// MonitorPoint: METR_TILT_2_TEMPERATURE

    /// The scaling factor for converting data from raw to world.
    double scaleMetrTilt2Temperature;

    /// The offset factor for converting data from raw to world.
    double offsetMetrTilt2Temperature;

    /// Data associated with METR_TILT_2_TEMPERATURE.
    float valueMetrTilt2Temperature;
    ACS::Time timeMetrTilt2Temperature;
    float previousValueMetrTilt2Temperature;

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

    /// Control point: AZ_AUX_MODE

    /// The relative can address for this control point.
    unsigned long rcaControlCntlAzAuxMode;

    /// Control point: EL_AUX_MODE

    /// The relative can address for this control point.
    unsigned long rcaControlCntlElAuxMode;

    /// Control point: INIT_SUBREF_CMD

    /// The relative can address for this control point.
    unsigned long rcaControlInitSubrefCmd;

    /// Control point: ALS

    /// The relative can address for this control point.
    unsigned long rcaControlCntlAls;

    /// Control point: REC_CAB_TEMP

    /// The relative can address for this control point.
    unsigned long rcaControlCntlRecCabTemp;

    /// Control point: METR_COEFF_0

    /// The relative can address for this control point.
    unsigned long rcaControlCntlMetrCoeff0;

    /// Control point: METR_COEFF_1

    /// The relative can address for this control point.
    unsigned long rcaControlCntlMetrCoeff1;

};
#endif
