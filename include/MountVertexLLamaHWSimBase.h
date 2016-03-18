#ifndef __cplusplus
#error This is a C++ include file and cannot be used from plain C.
#endif
#ifndef MountVertexLLamaHWSimBase_h
#define MountVertexLLamaHWSimBase_h
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
// $Id: HWSimBaseDotH.xpt 199109 2013-12-18 18:37:52Z rmarson $
// $Source: /diskb/tmp/stefano/project2/CVS/CONTROL/Common/GenHwDevice/config/templates/amb/HWSim/HWSimBaseDotH.xpt,v $
//
// WARNING! DO NOT MODIFY THIS FILE!
//  ---------------------------------------------------------
// | This is generated code!  Do not modify this file.       |
// | Any changes will be lost when the file is re-generated. |
//  ---------------------------------------------------------
//

#include <MountVertexHWSimImpl.h>

#include <vector>
// For AMB::node_t and CAN::byte_t
#include <CANTypes.h>

namespace AMB
{
    /// The MountVertexLLamaHWSimBase class is the base class for the
    /// Antenna Control Unit hardware simulator.
    /// <ul>
    /// <li> Device:   Antenna Control Unit
    /// <li> Assembly: MountVertexLLama
    /// <li> Parent:   root
    /// <li> Node:     0x0
    /// <li> Channel:  2
    /// </ul>
    class MountVertexLLamaHWSimBase:

        public MountVertexHWSimImpl

    {
        public:
        /// Constructor
        /// \param node Node ID of this device
        /// \param serialNumber S/N of this device
        MountVertexLLamaHWSimBase(AMB::node_t node,
            const std::vector< CAN::byte_t >& serialNumber);

        /// Destructor
        virtual ~MountVertexLLamaHWSimBase()
        {
        };

        /// Monitor and Control Points creation (state_m map entries)
        /// and value initialization
        /// \param node Node ID of this device
        /// \param serialNumber S/N of this device
        /// \exception CAN::Error
        virtual void initialize(AMB::node_t node,
            const std::vector< CAN::byte_t >& serialNumber);

        /// Monitor interface ('get' functions for monitor points)
        /// \param rca CAN node RCA
        /// \return std::vector of bytes containing monitor info. Each response
        /// is sized to what's specified in the ICD.
        /// \exception CAN::Error
        virtual std::vector< CAN::byte_t > monitor(AMB::rca_t rca) const;

        /// Control points getter ('get' functions for control points)
        /// \param rca CAN node RCA
        virtual std::vector< CAN::byte_t > controlGetter(AMB::rca_t rca) const;

        /// Control Interface ('set' functions for control points)
        /// \param rca CAN node RCA
        /// \param data CAN message data required by device
        /// \exception CAN::Error
        virtual void control(AMB::rca_t rca,
            const std::vector< CAN::byte_t >& data);

        /// Monitor points setter ('set' functions for monitor points)
        /// \param rca CAN node RCA
        /// \param data CAN message data required by device
        virtual void monitorSetter(AMB::rca_t rca,
            const std::vector< CAN::byte_t >& data);

        /// Specific Monitor point RCAs for MountVertexLLama

        static const AMB::rca_t monitorPoint_CAN_ERROR;

        static const AMB::rca_t monitorPoint_SYSTEM_ID;

        static const AMB::rca_t monitorPoint_NUM_TRANS;

        static const AMB::rca_t monitorPoint_SW_REV_LEVEL;

        static const AMB::rca_t monitorPoint_STOW_PIN;

        static const AMB::rca_t monitorPoint_SYSTEM_STATUS;

        static const AMB::rca_t monitorPoint_AZ_ENC_STATUS;

        static const AMB::rca_t monitorPoint_EL_ENC_STATUS;

        static const AMB::rca_t monitorPoint_EL_STATUS;

        static const AMB::rca_t monitorPoint_METR_DELTAS_DISP;

        static const AMB::rca_t monitorPoint_METR_DELTAS_SPEM;

        static const AMB::rca_t monitorPoint_METR_DELTAS_TILT;

        static const AMB::rca_t monitorPoint_METR_DELTAS_TILTTEMP;

        static const AMB::rca_t monitorPoint_METR_EQUIP_STATUS;

        static const AMB::rca_t monitorPoint_METR_MODE;

        static const AMB::rca_t monitorPoint_METR_TEMPS_19;

        static const AMB::rca_t monitorPoint_METR_TEMPS_1A;

        static const AMB::rca_t monitorPoint_METR_TEMPS_1B;

        static const AMB::rca_t monitorPoint_METR_TEMPS_1C;

        static const AMB::rca_t monitorPoint_METR_TEMPS_1D;

        static const AMB::rca_t monitorPoint_METR_TEMPS_1E;

        static const AMB::rca_t monitorPoint_METR_TEMPS_1F;

        static const AMB::rca_t monitorPoint_PT_MODEL_COEFF_07;

        static const AMB::rca_t monitorPoint_PT_MODEL_COEFF_08;

        static const AMB::rca_t monitorPoint_PT_MODEL_COEFF_09;

        static const AMB::rca_t monitorPoint_SUBREF_ROTATION;

        static const AMB::rca_t monitorPoint_SUBREF_DELTA_ROT;

        static const AMB::rca_t monitorPoint_SUBREF_STATUS;

        static const AMB::rca_t monitorPoint_OTHER_STATUS;

        static const AMB::rca_t monitorPoint_POWER_STATUS;

        static const AMB::rca_t monitorPoint_UPS2_ALARMS;

        static const AMB::rca_t monitorPoint_UPS2_BATTERY_OUTPUT;

        static const AMB::rca_t monitorPoint_UPS2_BATTERY_STATUS;

        static const AMB::rca_t monitorPoint_UPS2_BYPASS_VOLTS;

        static const AMB::rca_t monitorPoint_UPS2_FREQS;

        static const AMB::rca_t monitorPoint_UPS1_INVERTER_SW;

        static const AMB::rca_t monitorPoint_UPS2_INVERTER_SW;

        static const AMB::rca_t monitorPoint_UPS2_INVERTER_VOLTS;

        static const AMB::rca_t monitorPoint_UPS2_OUTPUT_CURRENT;

        static const AMB::rca_t monitorPoint_UPS2_OUTPUT_VOLTS;

        static const AMB::rca_t monitorPoint_UPS_STATUS_1;

        static const AMB::rca_t monitorPoint_UPS_STATUS_2;

        static const AMB::rca_t monitorPoint_AC_STATUS;

        static const AMB::rca_t monitorPoint_SHUTTER;

        /// Specific Monitor points Map for MountVertexLLama
        std::map< const AMB::rca_t, std::vector< CAN::byte_t > (
            AMB::MountVertexLLamaHWSimBase::*)() const > monitorPointsMap;

        /// Specific Control point RCAs for MountVertexLLama

        static const AMB::rca_t controlPoint_SUBREF_DELTA_ROT;

        static const AMB::rca_t controlPoint_SUBREF_ROTATION;

        static const AMB::rca_t controlPoint_SELFTEST_STOP;

        /// Specific Control points Map for MountVertexLLama
        std::map< const AMB::rca_t, void (AMB::MountVertexLLamaHWSimBase::*)(
            const std::vector< CAN::byte_t >& data) > controlPointsMap;

        protected:
        /// Specific Monitor get helper functions

        virtual std::vector< CAN::byte_t > getMonitorCanErrorProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorCanError() const;

        virtual std::vector< CAN::byte_t > getMonitorSystemIdProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorSystemId() const;

        virtual std::vector< CAN::byte_t > getMonitorNumTransProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorNumTrans() const;

        virtual std::vector< CAN::byte_t > getMonitorSwRevLevelProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorSwRevLevel() const;

        virtual std::vector< CAN::byte_t > getMonitorStowPinProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorStowPin() const;

        virtual std::vector< CAN::byte_t > getMonitorSystemStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorSystemStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorAzEncStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorAzEncStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorElEncStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorElEncStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorElStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorElStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasDispProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasDisp() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasSpemProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasSpem() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasTiltProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasTilt() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasTilttempProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrDeltasTilttemp() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrEquipStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrEquipStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrModeProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrMode() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps19Proxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps19() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1aProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1a() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1bProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1b() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1cProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1c() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1dProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1d() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1eProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1e() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1fProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorMetrTemps1f() const;

        virtual std::vector< CAN::byte_t > getMonitorPtModelCoeff07Proxy() const;

        virtual std::vector< CAN::byte_t > getMonitorPtModelCoeff07() const;

        virtual std::vector< CAN::byte_t > getMonitorPtModelCoeff08Proxy() const;

        virtual std::vector< CAN::byte_t > getMonitorPtModelCoeff08() const;

        virtual std::vector< CAN::byte_t > getMonitorPtModelCoeff09Proxy() const;

        virtual std::vector< CAN::byte_t > getMonitorPtModelCoeff09() const;

        virtual std::vector< CAN::byte_t > getMonitorSubrefRotationProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorSubrefRotation() const;

        virtual std::vector< CAN::byte_t > getMonitorSubrefDeltaRotProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorSubrefDeltaRot() const;

        virtual std::vector< CAN::byte_t > getMonitorSubrefStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorSubrefStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorOtherStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorOtherStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorPowerStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorPowerStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2AlarmsProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2Alarms() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2BatteryOutputProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2BatteryOutput() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2BatteryStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2BatteryStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2BypassVoltsProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2BypassVolts() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2FreqsProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2Freqs() const;

        virtual std::vector< CAN::byte_t > getMonitorUps1InverterSwProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps1InverterSw() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2InverterSwProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2InverterSw() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2InverterVoltsProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2InverterVolts() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2OutputCurrentProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2OutputCurrent() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2OutputVoltsProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUps2OutputVolts() const;

        virtual std::vector< CAN::byte_t > getMonitorUpsStatus1Proxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUpsStatus1() const;

        virtual std::vector< CAN::byte_t > getMonitorUpsStatus2Proxy() const;

        virtual std::vector< CAN::byte_t > getMonitorUpsStatus2() const;

        virtual std::vector< CAN::byte_t > getMonitorAcStatusProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorAcStatus() const;

        virtual std::vector< CAN::byte_t > getMonitorShutterProxy() const;

        virtual std::vector< CAN::byte_t > getMonitorShutter() const;

        /// Specific Control get helper functions

        virtual std::vector< CAN::byte_t > getControlSetSubrefDeltaRotProxy() const;

        virtual std::vector< CAN::byte_t > getControlSetSubrefDeltaRot() const;

        virtual std::vector< CAN::byte_t > getControlSetSubrefRotationProxy() const;

        virtual std::vector< CAN::byte_t > getControlSetSubrefRotation() const;

        virtual std::vector< CAN::byte_t > getControlSelftestStopProxy() const;

        virtual std::vector< CAN::byte_t > getControlSelftestStop() const;

        /// Specific Control points get helper Map for MountVertexLLama
        std::map< const AMB::rca_t, std::vector< CAN::byte_t > (
            AMB::MountVertexLLamaHWSimBase::*)() const > controlPointsGetterMap;

        /// Specific Control set helper functions

        /// \exception CAN:Error
        virtual void setControlSetSubrefDeltaRotProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setControlSetSubrefDeltaRot(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setControlSetSubrefRotationProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setControlSetSubrefRotation(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setControlSelftestStopProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setControlSelftestStop(
            const std::vector< CAN::byte_t >& data);

        /// Specific Monitor set helper functions

        /// \exception CAN:Error
        virtual void setMonitorCanErrorProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorCanError(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSystemIdProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSystemId(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorNumTransProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorNumTrans(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSwRevLevelProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSwRevLevel(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorStowPinProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorStowPin(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSystemStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSystemStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorAzEncStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorAzEncStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorElEncStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorElEncStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorElStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorElStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasDispProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasDisp(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasSpemProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasSpem(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasTiltProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasTilt(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasTilttempProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrDeltasTilttemp(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrEquipStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrEquipStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrModeProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrMode(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps19Proxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps19(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1aProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1a(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1bProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1b(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1cProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1c(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1dProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1d(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1eProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1e(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1fProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorMetrTemps1f(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPtModelCoeff07Proxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPtModelCoeff07(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPtModelCoeff08Proxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPtModelCoeff08(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPtModelCoeff09Proxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPtModelCoeff09(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSubrefRotationProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSubrefRotation(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSubrefDeltaRotProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSubrefDeltaRot(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSubrefStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorSubrefStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorOtherStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorOtherStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPowerStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorPowerStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2AlarmsProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2Alarms(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2BatteryOutputProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2BatteryOutput(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2BatteryStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2BatteryStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2BypassVoltsProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2BypassVolts(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2FreqsProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2Freqs(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps1InverterSwProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps1InverterSw(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2InverterSwProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2InverterSw(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2InverterVoltsProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2InverterVolts(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2OutputCurrentProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2OutputCurrent(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2OutputVoltsProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUps2OutputVolts(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUpsStatus1Proxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUpsStatus1(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUpsStatus2Proxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorUpsStatus2(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorAcStatusProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorAcStatus(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorShutterProxy(
            const std::vector< CAN::byte_t >& data);

        /// \exception CAN:Error
        virtual void setMonitorShutter(
            const std::vector< CAN::byte_t >& data);

        /// Specific Monitor points set helper Map for MountVertexLLama
        std::map< const AMB::rca_t, void (AMB::MountVertexLLamaHWSimBase::*)(
            const std::vector< CAN::byte_t >& data) > monitorPointsSetterMap;

        virtual void setBaseAddress(unsigned long arg);
        virtual unsigned long getBaseAddress() const;

        private:
        /// No default ctor.
        MountVertexLLamaHWSimBase();

        /// No copy ctor.
        MountVertexLLamaHWSimBase(const MountVertexLLamaHWSimBase&);

        /// No assigment optor.
        MountVertexLLamaHWSimBase& operator=(const MountVertexLLamaHWSimBase&);

        unsigned long baseAddress_m;
    };
}
#endif
