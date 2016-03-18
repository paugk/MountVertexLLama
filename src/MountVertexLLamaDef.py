
#! /usr/bin/env python
#  ALMA - Atacama Large Millimeter Array
#  (c) European Southern Observatory, 2002
#  (c) Associated Universities Inc., 2002
#  Copyright by ESO (in the framework of the ALMA collaboration),
#  Copyright by AUI (in the framework of the ALMA collaboration),
#  All rights reserved.
# 
#  This library is free software; you can redistribute it and/or
#  modify it under the terms of the GNU Lesser General Public
#  License as published by the Free software Foundation; either
#  version 2.1 of the License, or (at your option) any later version.
# 
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY, without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#  Lesser General Public License for more details.
# 
#  You should have received a copy of the GNU Lesser General Public
#  License along with this library; if not, write to the Free Software
#  Foundation, Inc., 59 Temple Place, Suite 330, Boston,
#  MA 02111-1307  USA
# 
#  Warning!
#   ---------------------------------------------------------
#  | This is generated code!  Do not modify this file.       |
#  | Any changes will be lost when the file is re-generated. |
#   ---------------------------------------------------------
# 
# $Id: DeviceDefDotPY.xpt 199109 2013-12-18 18:37:52Z rmarson $
# 

#
# Monitor and Control points of the hardware assembly: MountVertexLLama.
#

def load():
    MountVertexLLama = {}
    MountVertexLLama['CAN_ERROR']=[0x07001, 'ubyte', 4]
    MountVertexLLama['SYSTEM_ID']=[0x70004, 'ubyte', 3]
    MountVertexLLama['NUM_TRANS']=[0x70002, 'uint32', 1]
    MountVertexLLama['SW_REV_LEVEL']=[0x70000, 'ubyte', 3]
    MountVertexLLama['STOW_PIN']=[0x0024, 'ubyte', 2]
    MountVertexLLama['SYSTEM_STATUS']=[0x0023, 'ubyte', 6]
    MountVertexLLama['AZ_ENC_STATUS']=[0x0018, 'ubyte', 1]
    MountVertexLLama['EL_ENC_STATUS']=[0x0008, 'ubyte', 1]
    MountVertexLLama['EL_STATUS']=[0x000b, 'ubyte', 8]
    MountVertexLLama['METR_DELTAS_DISP']=[0x7010, 'int32', 2]
    MountVertexLLama['METR_DELTAS_SPEM']=[0x7011, 'int32', 2]
    MountVertexLLama['METR_DELTAS_TILT']=[0x7012, 'int32', 2]
    MountVertexLLama['METR_DELTAS_TILTTEMP']=[0x7013, 'int32', 2]
    MountVertexLLama['METR_EQUIP_STATUS']=[0x0032, 'ubyte', 4]
    MountVertexLLama['METR_MODE']=[0x0031, 'ubyte', 4]
    MountVertexLLama['METR_TEMPS_19']=[0x4019, 'int16', 4]
    MountVertexLLama['METR_TEMPS_1A']=[0x4020, 'int16', 4]
    MountVertexLLama['METR_TEMPS_1B']=[0x4021, 'int16', 4]
    MountVertexLLama['METR_TEMPS_1C']=[0x4022, 'int16', 4]
    MountVertexLLama['METR_TEMPS_1D']=[0x4023, 'int16', 4]
    MountVertexLLama['METR_TEMPS_1E']=[0x4024, 'int16', 4]
    MountVertexLLama['METR_TEMPS_1F']=[0x4025, 'int16', 4]
    MountVertexLLama['PT_MODEL_COEFF_07']=[0x3047, 'double', 1]
    MountVertexLLama['PT_MODEL_COEFF_08']=[0x3048, 'double', 1]
    MountVertexLLama['PT_MODEL_COEFF_09']=[0x3049, 'double', 1]
    MountVertexLLama['SUBREF_ROTATION']=[0x002a, 'int16', 3]
    MountVertexLLama['SUBREF_DELTA_ROT']=[0x0026, 'int16', 3]
    MountVertexLLama['SUBREF_STATUS']=[0x0029, 'ubyte', 5]
    MountVertexLLama['OTHER_STATUS']=[0x8003a, 'ubyte', 1]
    MountVertexLLama['POWER_STATUS']=[0x0030, 'ubyte', 2]
    MountVertexLLama['UPS2_ALARMS']=[0x004c, 'ubyte', 4]
    MountVertexLLama['UPS2_BATTERY_OUTPUT']=[0x0048, 'int16', 2]
    MountVertexLLama['UPS2_BATTERY_STATUS']=[0x0049, 'int16', 2]
    MountVertexLLama['UPS2_BYPASS_VOLTS']=[0x004a, 'int16', 3]
    MountVertexLLama['UPS2_FREQS']=[0x004b, 'int16', 2]
    MountVertexLLama['UPS1_INVERTER_SW']=[0x80035, 'ubyte', 1]
    MountVertexLLama['UPS2_INVERTER_SW']=[0x80045, 'ubyte', 1]
    MountVertexLLama['UPS2_INVERTER_VOLTS']=[0x004d, 'int16', 3]
    MountVertexLLama['UPS2_OUTPUT_CURRENT']=[0x0046, 'int16', 3]
    MountVertexLLama['UPS2_OUTPUT_VOLTS']=[0x0045, 'int16', 3]
    MountVertexLLama['UPS_STATUS_1']=[0x80039, 'ubyte', 1]
    MountVertexLLama['UPS_STATUS_2']=[0x80049, 'ubyte', 1]
    MountVertexLLama['AC_STATUS']=[0x002c, 'ubyte', 1]
    MountVertexLLama['SHUTTER']=[0x002e, 'ubyte', 1]
    MountVertexLLama['SET_SUBREF_DELTA_ROT']=[0x1026, 'int16', 3]
    MountVertexLLama['SET_SUBREF_ROTATION']=[0x1028, 'int16', 3]
    MountVertexLLama['SET_SELFTEST_STOP']=[0x1032, 'ubyte', 1]
    return MountVertexLLama
