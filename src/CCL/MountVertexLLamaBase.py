#! /usr/bin/env python
#******************************************************************************
# ALMA - Atacama Large Millimeter Array
# (c) Associated Universities Inc., 2010
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
#
# WARNING! DO NOT MODIFY THIS FILE!
# ---------------------------------------------------------
# | This is generated code!  Do not modify this file.       |
# | Any changes will be lost when the file is re-generated. |
# | $Id: CCLBaseDotPY.xpt 199109 2013-12-18 18:37:52Z rmarson $ |
# | $Source: /diskb/tmp/stefano/project2/CVS/CONTROL/Common/GenHwDevice/config/templates/amb/CCLBaseDotPY.xpt,v $ |
#  ---------------------------------------------------------
#

"""
This module defines the MountVertexLLama Control Command Language (CCL)
base class. It is automatically generated and provides access to
all set monitor, control points and device methods.
"""

import math

# This class extends MountVertex
import CCL.MountVertex

from CCL.Container import getComponent
from CCL.Container import getDynamicComponent
from CCL.logging import getLogger

class MountVertexLLamaBase(CCL.MountVertex.MountVertex):

    '''
The purpose of this document is to define the interface between the mount component running in an ABM and the ACU. The ICD provides the interface definitions for all monitor and control points accepted by the ACU as part of the low level functionality which is identified at present for the control of the antenna.
    '''
    def __init__(self, \
                antennaName = None, \
                componentName = None, \
                stickyFlag = False):
        '''
        The constructor creates a MountVertexLLama object or a group of MountVertexLLama
        objects.

        If the antennaName is defined then this constructor references
        the component running on that antenna. Alternativly the full
        componentName can be specified if desired.

        If antennaName or componentName are specified as list then a set of
        MountVertexLLama components are created.

        The MountVertexLLamaBase class is a python proxy to the MountVertexLLama
        component. The component can be running before creating this
        proxy but if it is not it will be started. The object reference
        is obtained using a call to getComponent (stickyFlag = True)
        or to getComponentNonSticky (stickyFlag = False, default).

        An exception is thrown if there is a problem creating
        this component, establishing the connection to the
        previously mentioned hardware components, or if either
        both or neither antennaName and componentName are specified.

        EXAMPLE:
        import CCL.MountVertexLLamaBase
        obj = CCL.MountVertexLLamaBase.MountVertexLLamaBase("DV01")

        or

        import CCL.MountVertexLLamaBase
        obj = CCL.MountVertexLLamaBase.MountVertexLLamaBase(["DV01", "DA41"])
        '''
        CCL.MountVertex.MountVertex.__init__(self, \
            antennaName, componentName, stickyFlag)
        self.__logger = getLogger()

    def __del__(self):
        CCL.MountVertex.MountVertex.__del__(self)

    #
    # --------------------- General Methods ---------------------
    #

    #
    # Get the channel number for this device
    #
    def GET_CHANNEL_NUMBER(self):
        '''
        This command returns the channel number for this device.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = self._devices[key].GET_CHANNEL_NUMBER()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    def GET_NODE_ADDRESS(self):
        '''
        Get the node address for this device.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = self._devices[key].GET_NODE_ADDRESS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # --------------------- Generic Monitor Points -------------
    #

    #
    # --------------------- Monitor Points ---------------------
    #

    #
    # EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER
    #
    def GET_EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER(self):
        '''
emergency stop AZ drives failure / equipment container
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_EMERGENCY_STOP_AZ_DRIVES_EQUIP_CONTAINER()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # EMERGENCY_STOP_PLATFORM_2_RECV_CABIN
    #
    def GET_EMERGENCY_STOP_PLATFORM_2_RECV_CABIN(self):
        '''
emergency stop platform 2 failure / receiver cabin
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_EMERGENCY_STOP_PLATFORM_2_RECV_CABIN()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # EMERGENCY_STOP_NASMYTH_CABINS_AB
    #
    def GET_EMERGENCY_STOP_NASMYTH_CABINS_AB(self):
        '''
emergency stop Nasmyth cabins A/B
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_EMERGENCY_STOP_NASMYTH_CABINS_AB()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL
    #
    def GET_EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL(self):
        '''
emergency stop access to platform / outside pedestal
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_EMERGENCY_STOP_ACESS_TO_PLATFORM_OUTSIDE_PEDESTAL()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # EMERGENCY_STOP_CONTROL_CONTAINER
    #
    def GET_EMERGENCY_STOP_CONTROL_CONTAINER(self):
        '''
emergency stop control container
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_EMERGENCY_STOP_CONTROL_CONTAINER()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # COMMUNICATION_ERROR_ACU_UPS2
    #
    def GET_COMMUNICATION_ERROR_ACU_UPS2(self):
        '''
communication error ACU_UPS2
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_COMMUNICATION_ERROR_ACU_UPS2()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_DELTAS_DISP
    #
    def GET_METR_DELTAS_DISP(self):
        '''
Get AZ and EL delta correction applied by the metrology system based on the readout of the sensors at the El encoder mounts
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_DELTAS_DISP()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_DELTAS_SPEM
    #
    def GET_METR_DELTAS_SPEM(self):
        '''
Get AZ and EL delta correction applied by the metrology system based on the systematic error model
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_DELTAS_SPEM()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_DELTAS_TILT
    #
    def GET_METR_DELTAS_TILT(self):
        '''
Get AZ and EL delta correction applied by the metrology system based on the readout of the tiltmeters
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_DELTAS_TILT()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_DELTAS_TILTTEMP
    #
    def GET_METR_DELTAS_TILTTEMP(self):
        '''
Get AZ and EL delta correction applied by the metrology system based on the model for temperature compensation of the tiltmeter offset (?tilt offset model?)
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_DELTAS_TILTTEMP()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_19
    #
    def GET_METR_TEMPS_19(self):
        '''
Get value of metrology temperature sensor pack 19
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_19()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_1A
    #
    def GET_METR_TEMPS_1A(self):
        '''
Get value of metrology temperature sensor pack 1A
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_1A()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_1B
    #
    def GET_METR_TEMPS_1B(self):
        '''
Get value of metrology temperature sensor pack 1B
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_1B()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_1C
    #
    def GET_METR_TEMPS_1C(self):
        '''
Get value of metrology temperature sensor pack 1C
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_1C()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_1D
    #
    def GET_METR_TEMPS_1D(self):
        '''
Get value of metrology temperature sensor pack 1D
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_1D()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_1E
    #
    def GET_METR_TEMPS_1E(self):
        '''
Get value of metrology temperature sensor pack 1E
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_1E()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # METR_TEMPS_1F
    #
    def GET_METR_TEMPS_1F(self):
        '''
Get value of metrology temperature sensor pack 1F
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_METR_TEMPS_1F()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # SUBREF_DELTA_ROT
    #
    def GET_SUBREF_DELTA_ROT(self):
        '''
Subreflector rotation delta position.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_SUBREF_DELTA_ROT()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # OTHER_STATUS
    #
    def GET_OTHER_STATUS(self):
        '''
Cabin and auxiliary status information. Conditions may be Fault conditions (F) or Status information (S). Each condition is marked below; fault conditions require the use of the CLEAR_FAULT_CMD to clear, while status information will clear when the hardware condition is cleared.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_OTHER_STATUS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_ALARMS
    #
    def GET_UPS2_ALARMS(self):
        '''
UPS2 Alarm status of UPS system. Conditions may be fault conditions or status information. Fault conditions require the use of the CLEAR_FAULT_CMD to clear, while status information will clear when the hardware condition is cleared.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_ALARMS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_BATTERY_OUTPUT
    #
    def GET_UPS2_BATTERY_OUTPUT(self):
        '''
UPS 2 Battery voltage and current
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_BATTERY_OUTPUT()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_BATTERY_STATUS
    #
    def GET_UPS2_BATTERY_STATUS(self):
        '''
UPS 2 Nominal battery autonomy
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_BATTERY_STATUS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_BYPASS_VOLTS
    #
    def GET_UPS2_BYPASS_VOLTS(self):
        '''
UPS 2 Bypass voltages by phase
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_BYPASS_VOLTS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_FREQS
    #
    def GET_UPS2_FREQS(self):
        '''
UPS 2 Bypass and inverter frequencies
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_FREQS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS1_INVERTER_SW
    #
    def GET_UPS1_INVERTER_SW(self):
        '''
UPS 1 Inverter switch position
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS1_INVERTER_SW()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_INVERTER_SW
    #
    def GET_UPS2_INVERTER_SW(self):
        '''
UPS 2 Inverter switch position
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_INVERTER_SW()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_INVERTER_VOLTS
    #
    def GET_UPS2_INVERTER_VOLTS(self):
        '''
UPS 2 Inverter voltages by phase
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_INVERTER_VOLTS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_OUTPUT_CURRENT
    #
    def GET_UPS2_OUTPUT_CURRENT(self):
        '''
UPS 2 Output currents by phase
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_OUTPUT_CURRENT()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS2_OUTPUT_VOLTS
    #
    def GET_UPS2_OUTPUT_VOLTS(self):
        '''
UPS 2 Output voltages by phase
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS2_OUTPUT_VOLTS()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS_STATUS_1
    #
    def GET_UPS_STATUS_1(self):
        '''
UPS 1 Current status word
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS_STATUS_1()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # UPS_STATUS_2
    #
    def GET_UPS_STATUS_2(self):
        '''
UPS 2 Current status word
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].GET_UPS_STATUS_2()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # --------------------- Control Points ---------------------
    #

    #
    # SUBREF_DELTA_ROT
    #

    def SET_SUBREF_DELTA_ROT(self, world):

        '''
Set the new subreflector delta position for the tilt axes (will not be accumulated to previous deltas). Delta positions can be commanded when S/R is in A UTO mode.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].SET_SUBREF_DELTA_ROT(world)
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    #
    # SELFTEST_STOP
    #

    def  SET_SELFTEST_STOP(self):

        '''
Terminate ongoing self test.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            result[antName] = \
                self._devices[key].SET_SELFTEST_STOP()
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    # ----------------- List of Monitor Points ------------------
    def getMonitorList(self):
        '''
        This method returns a list containing all monitor point
        names of this hardware device.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            monitorList = \
                CCL.MountVertex.MountVertex.getMonitorList(self)

            monitorList.append("METR_DELTAS_DISP")

            monitorList.append("METR_DELTAS_SPEM")

            monitorList.append("METR_DELTAS_TILT")

            monitorList.append("METR_DELTAS_TILTTEMP")

            monitorList.append("METR_TEMPS_19")

            monitorList.append("METR_TEMPS_1A")

            monitorList.append("METR_TEMPS_1B")

            monitorList.append("METR_TEMPS_1C")

            monitorList.append("METR_TEMPS_1D")

            monitorList.append("METR_TEMPS_1E")

            monitorList.append("METR_TEMPS_1F")

            monitorList.append("SUBREF_DELTA_ROT")

            monitorList.append("OTHER_STATUS")

            monitorList.append("UPS2_ALARMS")

            monitorList.append("UPS2_BATTERY_OUTPUT")

            monitorList.append("UPS2_BATTERY_STATUS")

            monitorList.append("UPS2_BYPASS_VOLTS")

            monitorList.append("UPS2_FREQS")

            monitorList.append("UPS1_INVERTER_SW")

            monitorList.append("UPS2_INVERTER_SW")

            monitorList.append("UPS2_INVERTER_VOLTS")

            monitorList.append("UPS2_OUTPUT_CURRENT")

            monitorList.append("UPS2_OUTPUT_VOLTS")

            monitorList.append("UPS_STATUS_1")

            monitorList.append("UPS_STATUS_2")

            result[antName] = monitorList
        if len(self._devices) == 1:
            return result.values()[0]
        return result

    # ----------------- List of Control Points ------------------
    def getControlList(self):
        '''
    This method returns a list containing all control point
        names of this hardware device.
        '''
        result = {}
        for key, val in self._devices.iteritems():
            antName = key.rsplit("/")[1]
            controlList = \
                CCL.MountVertex.MountVertex.getControlList(self)

            controlList.append("SUBREF_DELTA_ROT")

            controlList.append("SELFTEST_STOP")

            result[antName] = controlList
        if len(self._devices) == 1:
            return result.values()[0]
        return result
