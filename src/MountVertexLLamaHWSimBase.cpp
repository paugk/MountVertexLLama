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
// $Id: HWSimBaseDotCPP.xpt 199109 2013-12-18 18:37:52Z rmarson $
// $Source: /diskb/tmp/stefano/project2/CVS/CONTROL/Common/GenHwDevice/config/templates/amb/HWSim/HWSimBaseDotCPP.xpt,v $
//
//
// WARNING! DO NOT MODIFY THIS FILE!
//  ---------------------------------------------------------
// | This is generated code!  Do not modify this file.       |
// | Any changes will be lost when the file is re-generated. |
//  ---------------------------------------------------------
//

#include <MountVertexLLamaHWSimBase.h>
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
// For AMB::node_t and CAN::byte_t
#include <CANTypes.h>

/// Specific Monitor points RCAs for MountVertexLLama

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_CAN_ERROR(0x07001U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_ID(0x70004U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_NUM_TRANS(0x70002U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SW_REV_LEVEL(0x70000U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_STOW_PIN(0x0024U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_STATUS(0x0023U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_AZ_ENC_STATUS(0x0018U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_ENC_STATUS(0x0008U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_STATUS(0x000bU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_DISP(0x7010U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_SPEM(0x7011U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILT(0x7012U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILTTEMP(0x7013U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_EQUIP_STATUS(0x0032U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_MODE(0x0031U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_19(0x4019U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1A(0x4020U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1B(0x4021U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1C(0x4022U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1D(0x4023U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1E(0x4024U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1F(0x4025U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_07(0x3047U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_08(0x3048U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_09(0x3049U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_ROTATION(0x002aU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_DELTA_ROT(0x0026U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_STATUS(0x0029U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_OTHER_STATUS(0x8003aU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_POWER_STATUS(0x0030U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_ALARMS(0x004cU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_OUTPUT(0x0048U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_STATUS(0x0049U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BYPASS_VOLTS(0x004aU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_FREQS(0x004bU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS1_INVERTER_SW(0x80035U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_SW(0x80045U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_VOLTS(0x004dU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_CURRENT(0x0046U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_VOLTS(0x0045U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_1(0x80039U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_2(0x80049U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_AC_STATUS(0x002cU);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::monitorPoint_SHUTTER(0x002eU);

/// Specific Control points RCAs for MountVertexLLama

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_DELTA_ROT(0x1026U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_ROTATION(0x1028U);

const AMB::rca_t AMB::MountVertexLLamaHWSimBase::controlPoint_SELFTEST_STOP(0x1032U);

/// Constructor
AMB::MountVertexLLamaHWSimBase::MountVertexLLamaHWSimBase(AMB::node_t node,
    const std::vector< CAN::byte_t >& serialNumber):

    MountVertexHWSimImpl(node, serialNumber),

     baseAddress_m(0UL)

{
/// TODO
/// Thomas, 2009-04-03
/// Ralph's tests fail.  So I commented the correct way out and put the
/// old way back into place until it has been sorted out what happens when
/// TAT gathers the printed out strings.
    // Start message for LBSimulator -> Should be changed to the AMBLBSimulator class
//    std::ios::fmtflags oldFlags(std::cout.flags());
//    std::cout.setf(std::ios::hex, std::ios::basefield);
//    std::cout << "Creating node 0x" << node << ", s/n 0x";
//    for(unsigned short i(0U); i < 8U; ++i)
//    {
//        std::cout << std::setw(2) << std::setfill('0')
//            << static_cast<int>(serialNumber[i]);
//    }

//    std::cout.setf(oldFlags);

//    std::cout << ", MountVertexLLama device\n";

    std::cout << "Creating node 0x" << std::hex << node << ", s/n 0x";
    for(unsigned short i(0U); i < 8U; ++i)
    {
        std::cout << std::hex << std::setw(2) << std::setfill('0')
            << static_cast<int>(serialNumber[i]);
    }

    std::cout << ", MountVertexLLama device" << std::endl;

    // Set the device name
    devname_m = "MountVertexLLama";

    // Initialize monitor and control points
    initialize(node, serialNumber);

    // We already initialized baseAddress_m, but we reset it with the same
    // value using setBaseAddress since it will recurse through all the
    // inheritance levels.
    setBaseAddress(getBaseAddress());

}

/**
 * Override the base address for this device.
 */
inline void AMB::MountVertexLLamaHWSimBase::setBaseAddress(unsigned long arg)
{

    //We need to set the base class object baseaddress to what every we have.
    MountVertexHWSimBase::setBaseAddress(arg);

    baseAddress_m = arg;
}

/**
 * Get the base address for this device.
 */
inline unsigned long AMB::MountVertexLLamaHWSimBase::getBaseAddress() const
{
    return baseAddress_m;
}

// Monitor and Control Points creation (state_m map entries)
// and default value initialization.
// NOTE: The default value has to be un-scaled in the spreadsheet.
// ----------------------------------------------------------------------------
void AMB::MountVertexLLamaHWSimBase::initialize(AMB::node_t node,
    const std::vector< CAN::byte_t >& serialNumber)
{

    // Initialize the extended class
    MountVertexHWSimImpl::initialize(node, serialNumber);

    // Specific monitor points

    if(state_m.find(monitorPoint_CAN_ERROR) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_CAN_ERROR, vvalue));
    }

    if(state_m.find(monitorPoint_SYSTEM_ID) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 3U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_SYSTEM_ID, vvalue));
    }

    if(state_m.find(monitorPoint_NUM_TRANS) == state_m.end())
    {
        unsigned int raw = static_cast<unsigned int>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_NUM_TRANS, vvalue));
    }

    if(state_m.find(monitorPoint_SW_REV_LEVEL) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 3U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_SW_REV_LEVEL, vvalue));
    }

    if(state_m.find(monitorPoint_STOW_PIN) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 2U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_STOW_PIN, vvalue));
    }

    if(state_m.find(monitorPoint_SYSTEM_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_SYSTEM_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_AZ_ENC_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_AZ_ENC_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_EL_ENC_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_EL_ENC_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_EL_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_EL_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_METR_DELTAS_DISP) == state_m.end())
    {
        int raw = static_cast<int>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_DELTAS_DISP, vvalue));
    }

    if(state_m.find(monitorPoint_METR_DELTAS_SPEM) == state_m.end())
    {
        int raw = static_cast<int>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_DELTAS_SPEM, vvalue));
    }

    if(state_m.find(monitorPoint_METR_DELTAS_TILT) == state_m.end())
    {
        int raw = static_cast<int>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_DELTAS_TILT, vvalue));
    }

    if(state_m.find(monitorPoint_METR_DELTAS_TILTTEMP) == state_m.end())
    {
        int raw = static_cast<int>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_DELTAS_TILTTEMP, vvalue));
    }

    if(state_m.find(monitorPoint_METR_EQUIP_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_EQUIP_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_METR_MODE) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_MODE, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_19) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_19, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_1A) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_1A, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_1B) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_1B, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_1C) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_1C, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_1D) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_1D, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_1E) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_1E, vvalue));
    }

    if(state_m.find(monitorPoint_METR_TEMPS_1F) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_METR_TEMPS_1F, vvalue));
    }

    if(state_m.find(monitorPoint_PT_MODEL_COEFF_07) == state_m.end())
    {
        double raw = static_cast<double>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_PT_MODEL_COEFF_07, vvalue));
    }

    if(state_m.find(monitorPoint_PT_MODEL_COEFF_08) == state_m.end())
    {
        double raw = static_cast<double>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_PT_MODEL_COEFF_08, vvalue));
    }

    if(state_m.find(monitorPoint_PT_MODEL_COEFF_09) == state_m.end())
    {
        double raw = static_cast<double>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 8U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_PT_MODEL_COEFF_09, vvalue));
    }

    if(state_m.find(monitorPoint_SUBREF_ROTATION) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_SUBREF_ROTATION, vvalue));
    }

    if(state_m.find(monitorPoint_SUBREF_DELTA_ROT) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_SUBREF_DELTA_ROT, vvalue));
    }

    if(state_m.find(monitorPoint_SUBREF_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 5U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_SUBREF_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_OTHER_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_OTHER_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_POWER_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 2U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_POWER_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_ALARMS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_ALARMS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_BATTERY_OUTPUT) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_BATTERY_OUTPUT, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_BATTERY_STATUS) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_BATTERY_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_BYPASS_VOLTS) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_BYPASS_VOLTS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_FREQS) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 4U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_FREQS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS1_INVERTER_SW) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_UPS1_INVERTER_SW, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_INVERTER_SW) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_UPS2_INVERTER_SW, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_INVERTER_VOLTS) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_INVERTER_VOLTS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_OUTPUT_CURRENT) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_OUTPUT_CURRENT, vvalue));
    }

    if(state_m.find(monitorPoint_UPS2_OUTPUT_VOLTS) == state_m.end())
    {
        short raw = static_cast<short>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        std::vector< CAN::byte_t > rawVector;
        for(CAN::byte_t i(0U); i < 6U; ++i)
        {
            rawVector.push_back(0);
        }
        AMB::TypeConversion::valueToData(*vvalue, rawVector);

        state_m.insert(std::make_pair(monitorPoint_UPS2_OUTPUT_VOLTS, vvalue));
    }

    if(state_m.find(monitorPoint_UPS_STATUS_1) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_UPS_STATUS_1, vvalue));
    }

    if(state_m.find(monitorPoint_UPS_STATUS_2) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_UPS_STATUS_2, vvalue));
    }

    if(state_m.find(monitorPoint_AC_STATUS) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_AC_STATUS, vvalue));
    }

    if(state_m.find(monitorPoint_SHUTTER) == state_m.end())
    {
        unsigned char raw = static_cast<unsigned char>(0LL);

        raw = 0;
        std::vector< CAN::byte_t >* vvalue(new std::vector< CAN::byte_t >);

        AMB::TypeConversion::valueToData(
            *vvalue, raw);

        state_m.insert(std::make_pair(monitorPoint_SHUTTER, vvalue));
    }

    // Specific control points

    if(state_m.find(controlPoint_SUBREF_DELTA_ROT) == state_m.end())
    {
        state_m.insert(std::make_pair(controlPoint_SUBREF_DELTA_ROT,
            new std::vector< CAN::byte_t >(6U, 0x0U)));
    }

    if(state_m.find(controlPoint_SUBREF_ROTATION) == state_m.end())
    {
        state_m.insert(std::make_pair(controlPoint_SUBREF_ROTATION,
            new std::vector< CAN::byte_t >(6U, 0x0U)));
    }

    if(state_m.find(controlPoint_SELFTEST_STOP) == state_m.end())
    {
        state_m.insert(std::make_pair(controlPoint_SELFTEST_STOP,
            new std::vector< CAN::byte_t >(1U, 0x0U)));
    }

    // Specific Control points Map for MountVertexLLama

    controlPointsMap[controlPoint_SUBREF_DELTA_ROT] = &AMB::MountVertexLLamaHWSimBase::setControlSetSubrefDeltaRotProxy;
    controlPointsGetterMap[controlPoint_SUBREF_DELTA_ROT] = &AMB::MountVertexLLamaHWSimBase::getControlSetSubrefDeltaRotProxy;

    controlPointsMap[controlPoint_SUBREF_ROTATION] = &AMB::MountVertexLLamaHWSimBase::setControlSetSubrefRotationProxy;
    controlPointsGetterMap[controlPoint_SUBREF_ROTATION] = &AMB::MountVertexLLamaHWSimBase::getControlSetSubrefRotationProxy;

    controlPointsMap[controlPoint_SELFTEST_STOP] = &AMB::MountVertexLLamaHWSimBase::setControlSelftestStopProxy;
    controlPointsGetterMap[controlPoint_SELFTEST_STOP] = &AMB::MountVertexLLamaHWSimBase::getControlSelftestStopProxy;

    // Specific Monitor points Map for MountVertexLLama

    monitorPointsMap[monitorPoint_CAN_ERROR] = &AMB::MountVertexLLamaHWSimBase::getMonitorCanErrorProxy;
    monitorPointsSetterMap[monitorPoint_CAN_ERROR] = &AMB::MountVertexLLamaHWSimBase::setMonitorCanErrorProxy;

    monitorPointsMap[monitorPoint_SYSTEM_ID] = &AMB::MountVertexLLamaHWSimBase::getMonitorSystemIdProxy;
    monitorPointsSetterMap[monitorPoint_SYSTEM_ID] = &AMB::MountVertexLLamaHWSimBase::setMonitorSystemIdProxy;

    monitorPointsMap[monitorPoint_NUM_TRANS] = &AMB::MountVertexLLamaHWSimBase::getMonitorNumTransProxy;
    monitorPointsSetterMap[monitorPoint_NUM_TRANS] = &AMB::MountVertexLLamaHWSimBase::setMonitorNumTransProxy;

    monitorPointsMap[monitorPoint_SW_REV_LEVEL] = &AMB::MountVertexLLamaHWSimBase::getMonitorSwRevLevelProxy;
    monitorPointsSetterMap[monitorPoint_SW_REV_LEVEL] = &AMB::MountVertexLLamaHWSimBase::setMonitorSwRevLevelProxy;

    monitorPointsMap[monitorPoint_STOW_PIN] = &AMB::MountVertexLLamaHWSimBase::getMonitorStowPinProxy;
    monitorPointsSetterMap[monitorPoint_STOW_PIN] = &AMB::MountVertexLLamaHWSimBase::setMonitorStowPinProxy;

    monitorPointsMap[monitorPoint_SYSTEM_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorSystemStatusProxy;
    monitorPointsSetterMap[monitorPoint_SYSTEM_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorSystemStatusProxy;

    monitorPointsMap[monitorPoint_AZ_ENC_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorAzEncStatusProxy;
    monitorPointsSetterMap[monitorPoint_AZ_ENC_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorAzEncStatusProxy;

    monitorPointsMap[monitorPoint_EL_ENC_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorElEncStatusProxy;
    monitorPointsSetterMap[monitorPoint_EL_ENC_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorElEncStatusProxy;

    monitorPointsMap[monitorPoint_EL_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorElStatusProxy;
    monitorPointsSetterMap[monitorPoint_EL_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorElStatusProxy;

    monitorPointsMap[monitorPoint_METR_DELTAS_DISP] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasDispProxy;
    monitorPointsSetterMap[monitorPoint_METR_DELTAS_DISP] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasDispProxy;

    monitorPointsMap[monitorPoint_METR_DELTAS_SPEM] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasSpemProxy;
    monitorPointsSetterMap[monitorPoint_METR_DELTAS_SPEM] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasSpemProxy;

    monitorPointsMap[monitorPoint_METR_DELTAS_TILT] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasTiltProxy;
    monitorPointsSetterMap[monitorPoint_METR_DELTAS_TILT] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasTiltProxy;

    monitorPointsMap[monitorPoint_METR_DELTAS_TILTTEMP] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasTilttempProxy;
    monitorPointsSetterMap[monitorPoint_METR_DELTAS_TILTTEMP] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasTilttempProxy;

    monitorPointsMap[monitorPoint_METR_EQUIP_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrEquipStatusProxy;
    monitorPointsSetterMap[monitorPoint_METR_EQUIP_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrEquipStatusProxy;

    monitorPointsMap[monitorPoint_METR_MODE] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrModeProxy;
    monitorPointsSetterMap[monitorPoint_METR_MODE] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrModeProxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_19] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps19Proxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_19] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps19Proxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_1A] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1aProxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_1A] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1aProxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_1B] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1bProxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_1B] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1bProxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_1C] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1cProxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_1C] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1cProxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_1D] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1dProxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_1D] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1dProxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_1E] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1eProxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_1E] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1eProxy;

    monitorPointsMap[monitorPoint_METR_TEMPS_1F] = &AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1fProxy;
    monitorPointsSetterMap[monitorPoint_METR_TEMPS_1F] = &AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1fProxy;

    monitorPointsMap[monitorPoint_PT_MODEL_COEFF_07] = &AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff07Proxy;
    monitorPointsSetterMap[monitorPoint_PT_MODEL_COEFF_07] = &AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff07Proxy;

    monitorPointsMap[monitorPoint_PT_MODEL_COEFF_08] = &AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff08Proxy;
    monitorPointsSetterMap[monitorPoint_PT_MODEL_COEFF_08] = &AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff08Proxy;

    monitorPointsMap[monitorPoint_PT_MODEL_COEFF_09] = &AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff09Proxy;
    monitorPointsSetterMap[monitorPoint_PT_MODEL_COEFF_09] = &AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff09Proxy;

    monitorPointsMap[monitorPoint_SUBREF_ROTATION] = &AMB::MountVertexLLamaHWSimBase::getMonitorSubrefRotationProxy;
    monitorPointsSetterMap[monitorPoint_SUBREF_ROTATION] = &AMB::MountVertexLLamaHWSimBase::setMonitorSubrefRotationProxy;

    monitorPointsMap[monitorPoint_SUBREF_DELTA_ROT] = &AMB::MountVertexLLamaHWSimBase::getMonitorSubrefDeltaRotProxy;
    monitorPointsSetterMap[monitorPoint_SUBREF_DELTA_ROT] = &AMB::MountVertexLLamaHWSimBase::setMonitorSubrefDeltaRotProxy;

    monitorPointsMap[monitorPoint_SUBREF_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorSubrefStatusProxy;
    monitorPointsSetterMap[monitorPoint_SUBREF_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorSubrefStatusProxy;

    monitorPointsMap[monitorPoint_OTHER_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorOtherStatusProxy;
    monitorPointsSetterMap[monitorPoint_OTHER_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorOtherStatusProxy;

    monitorPointsMap[monitorPoint_POWER_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorPowerStatusProxy;
    monitorPointsSetterMap[monitorPoint_POWER_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorPowerStatusProxy;

    monitorPointsMap[monitorPoint_UPS2_ALARMS] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2AlarmsProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_ALARMS] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2AlarmsProxy;

    monitorPointsMap[monitorPoint_UPS2_BATTERY_OUTPUT] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2BatteryOutputProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_BATTERY_OUTPUT] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2BatteryOutputProxy;

    monitorPointsMap[monitorPoint_UPS2_BATTERY_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2BatteryStatusProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_BATTERY_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2BatteryStatusProxy;

    monitorPointsMap[monitorPoint_UPS2_BYPASS_VOLTS] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2BypassVoltsProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_BYPASS_VOLTS] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2BypassVoltsProxy;

    monitorPointsMap[monitorPoint_UPS2_FREQS] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2FreqsProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_FREQS] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2FreqsProxy;

    monitorPointsMap[monitorPoint_UPS1_INVERTER_SW] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps1InverterSwProxy;
    monitorPointsSetterMap[monitorPoint_UPS1_INVERTER_SW] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps1InverterSwProxy;

    monitorPointsMap[monitorPoint_UPS2_INVERTER_SW] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2InverterSwProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_INVERTER_SW] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2InverterSwProxy;

    monitorPointsMap[monitorPoint_UPS2_INVERTER_VOLTS] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2InverterVoltsProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_INVERTER_VOLTS] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2InverterVoltsProxy;

    monitorPointsMap[monitorPoint_UPS2_OUTPUT_CURRENT] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2OutputCurrentProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_OUTPUT_CURRENT] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2OutputCurrentProxy;

    monitorPointsMap[monitorPoint_UPS2_OUTPUT_VOLTS] = &AMB::MountVertexLLamaHWSimBase::getMonitorUps2OutputVoltsProxy;
    monitorPointsSetterMap[monitorPoint_UPS2_OUTPUT_VOLTS] = &AMB::MountVertexLLamaHWSimBase::setMonitorUps2OutputVoltsProxy;

    monitorPointsMap[monitorPoint_UPS_STATUS_1] = &AMB::MountVertexLLamaHWSimBase::getMonitorUpsStatus1Proxy;
    monitorPointsSetterMap[monitorPoint_UPS_STATUS_1] = &AMB::MountVertexLLamaHWSimBase::setMonitorUpsStatus1Proxy;

    monitorPointsMap[monitorPoint_UPS_STATUS_2] = &AMB::MountVertexLLamaHWSimBase::getMonitorUpsStatus2Proxy;
    monitorPointsSetterMap[monitorPoint_UPS_STATUS_2] = &AMB::MountVertexLLamaHWSimBase::setMonitorUpsStatus2Proxy;

    monitorPointsMap[monitorPoint_AC_STATUS] = &AMB::MountVertexLLamaHWSimBase::getMonitorAcStatusProxy;
    monitorPointsSetterMap[monitorPoint_AC_STATUS] = &AMB::MountVertexLLamaHWSimBase::setMonitorAcStatusProxy;

    monitorPointsMap[monitorPoint_SHUTTER] = &AMB::MountVertexLLamaHWSimBase::getMonitorShutterProxy;
    monitorPointsSetterMap[monitorPoint_SHUTTER] = &AMB::MountVertexLLamaHWSimBase::setMonitorShutterProxy;

}

// Monitor and Control Points getters
// ----------------------------------------------------------------------------
std::vector< CAN::byte_t > AMB::MountVertexLLamaHWSimBase::monitor(
    AMB::rca_t rca) const
{

    // Specific points
    std::map< const AMB::rca_t, std::vector< CAN::byte_t > (
        AMB::MountVertexLLamaHWSimBase::*)() const >::const_iterator iter(
            monitorPointsMap.find(rca - baseAddress_m));
    if(iter != monitorPointsMap.end())
    {
        return (this->*(*iter).second)();
    }
    else
    {
        // Others

        return MountVertexHWSimImpl::monitor(rca);

    }
}

std::vector< CAN::byte_t > AMB::MountVertexLLamaHWSimBase::controlGetter(
    AMB::rca_t rca) const
{
    // Specific points
    std::map< const AMB::rca_t, std::vector< CAN::byte_t > (
        AMB::MountVertexLLamaHWSimBase::*)() const >::const_iterator iter(
            controlPointsGetterMap.find(rca - baseAddress_m));
    if(iter != controlPointsGetterMap.end())
    {
        return (this->*(*iter).second)();
    }
    else
    {
        // Others

        return MountVertexHWSimImpl::controlGetter(rca);

    }
}

// Control and Monitor Points setters
// ----------------------------------------------------------------------------
void AMB::MountVertexLLamaHWSimBase::control(AMB::rca_t rca,
    const std::vector< CAN::byte_t >& data)
{

    // Specific points
    std::map< const AMB::rca_t, void (AMB::MountVertexLLamaHWSimBase::*)(
        const std::vector< CAN::byte_t >& data) >::const_iterator iter(
            controlPointsMap.find(rca - baseAddress_m));
    if(iter != controlPointsMap.end())
    {
        (this->*(*iter).second)(data);
    }
    else
    {
        // Others

        MountVertexHWSimImpl::control(rca, data);

    }
}

void AMB::MountVertexLLamaHWSimBase::monitorSetter(AMB::rca_t rca,
    const std::vector< CAN::byte_t >& data)
{
    // Specific points
    std::map< const AMB::rca_t, void (AMB::MountVertexLLamaHWSimBase::*)(
    const std::vector< CAN::byte_t >& data) >::const_iterator iter(
        monitorPointsSetterMap.find(rca - baseAddress_m));
    if(iter != monitorPointsSetterMap.end())
    {
        (this->*(*iter).second)(data);
    }
    else
    {
        // Others

        MountVertexHWSimImpl::monitorSetter(rca, data);

    }
}

// Specific Monitor get helpers
// ----------------------------------------------------------------------------

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorCanErrorProxy() const
{
    return getMonitorCanError();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorCanError() const
{
    return *(state_m.find(monitorPoint_CAN_ERROR)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSystemIdProxy() const
{
    return getMonitorSystemId();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSystemId() const
{
    return *(state_m.find(monitorPoint_SYSTEM_ID)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorNumTransProxy() const
{
    return getMonitorNumTrans();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorNumTrans() const
{
    return *(state_m.find(monitorPoint_NUM_TRANS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSwRevLevelProxy() const
{
    return getMonitorSwRevLevel();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSwRevLevel() const
{
    return *(state_m.find(monitorPoint_SW_REV_LEVEL)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorStowPinProxy() const
{
    return getMonitorStowPin();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorStowPin() const
{
    return *(state_m.find(monitorPoint_STOW_PIN)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSystemStatusProxy() const
{
    return getMonitorSystemStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSystemStatus() const
{
    return *(state_m.find(monitorPoint_SYSTEM_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorAzEncStatusProxy() const
{
    return getMonitorAzEncStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorAzEncStatus() const
{
    return *(state_m.find(monitorPoint_AZ_ENC_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorElEncStatusProxy() const
{
    return getMonitorElEncStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorElEncStatus() const
{
    return *(state_m.find(monitorPoint_EL_ENC_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorElStatusProxy() const
{
    return getMonitorElStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorElStatus() const
{
    return *(state_m.find(monitorPoint_EL_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasDispProxy() const
{
    return getMonitorMetrDeltasDisp();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasDisp() const
{
    return *(state_m.find(monitorPoint_METR_DELTAS_DISP)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasSpemProxy() const
{
    return getMonitorMetrDeltasSpem();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasSpem() const
{
    return *(state_m.find(monitorPoint_METR_DELTAS_SPEM)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasTiltProxy() const
{
    return getMonitorMetrDeltasTilt();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasTilt() const
{
    return *(state_m.find(monitorPoint_METR_DELTAS_TILT)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasTilttempProxy() const
{
    return getMonitorMetrDeltasTilttemp();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrDeltasTilttemp() const
{
    return *(state_m.find(monitorPoint_METR_DELTAS_TILTTEMP)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrEquipStatusProxy() const
{
    return getMonitorMetrEquipStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrEquipStatus() const
{
    return *(state_m.find(monitorPoint_METR_EQUIP_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrModeProxy() const
{
    return getMonitorMetrMode();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrMode() const
{
    return *(state_m.find(monitorPoint_METR_MODE)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps19Proxy() const
{
    return getMonitorMetrTemps19();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps19() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_19)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1aProxy() const
{
    return getMonitorMetrTemps1a();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1a() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_1A)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1bProxy() const
{
    return getMonitorMetrTemps1b();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1b() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_1B)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1cProxy() const
{
    return getMonitorMetrTemps1c();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1c() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_1C)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1dProxy() const
{
    return getMonitorMetrTemps1d();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1d() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_1D)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1eProxy() const
{
    return getMonitorMetrTemps1e();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1e() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_1E)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1fProxy() const
{
    return getMonitorMetrTemps1f();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorMetrTemps1f() const
{
    return *(state_m.find(monitorPoint_METR_TEMPS_1F)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff07Proxy() const
{
    return getMonitorPtModelCoeff07();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff07() const
{
    return *(state_m.find(monitorPoint_PT_MODEL_COEFF_07)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff08Proxy() const
{
    return getMonitorPtModelCoeff08();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff08() const
{
    return *(state_m.find(monitorPoint_PT_MODEL_COEFF_08)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff09Proxy() const
{
    return getMonitorPtModelCoeff09();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPtModelCoeff09() const
{
    return *(state_m.find(monitorPoint_PT_MODEL_COEFF_09)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSubrefRotationProxy() const
{
    return getMonitorSubrefRotation();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSubrefRotation() const
{
    return *(state_m.find(monitorPoint_SUBREF_ROTATION)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSubrefDeltaRotProxy() const
{
    return getMonitorSubrefDeltaRot();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSubrefDeltaRot() const
{
    return *(state_m.find(monitorPoint_SUBREF_DELTA_ROT)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSubrefStatusProxy() const
{
    return getMonitorSubrefStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorSubrefStatus() const
{
    return *(state_m.find(monitorPoint_SUBREF_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorOtherStatusProxy() const
{
    return getMonitorOtherStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorOtherStatus() const
{
    return *(state_m.find(monitorPoint_OTHER_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPowerStatusProxy() const
{
    return getMonitorPowerStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorPowerStatus() const
{
    return *(state_m.find(monitorPoint_POWER_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2AlarmsProxy() const
{
    return getMonitorUps2Alarms();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2Alarms() const
{
    return *(state_m.find(monitorPoint_UPS2_ALARMS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2BatteryOutputProxy() const
{
    return getMonitorUps2BatteryOutput();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2BatteryOutput() const
{
    return *(state_m.find(monitorPoint_UPS2_BATTERY_OUTPUT)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2BatteryStatusProxy() const
{
    return getMonitorUps2BatteryStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2BatteryStatus() const
{
    return *(state_m.find(monitorPoint_UPS2_BATTERY_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2BypassVoltsProxy() const
{
    return getMonitorUps2BypassVolts();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2BypassVolts() const
{
    return *(state_m.find(monitorPoint_UPS2_BYPASS_VOLTS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2FreqsProxy() const
{
    return getMonitorUps2Freqs();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2Freqs() const
{
    return *(state_m.find(monitorPoint_UPS2_FREQS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps1InverterSwProxy() const
{
    return getMonitorUps1InverterSw();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps1InverterSw() const
{
    return *(state_m.find(monitorPoint_UPS1_INVERTER_SW)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2InverterSwProxy() const
{
    return getMonitorUps2InverterSw();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2InverterSw() const
{
    return *(state_m.find(monitorPoint_UPS2_INVERTER_SW)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2InverterVoltsProxy() const
{
    return getMonitorUps2InverterVolts();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2InverterVolts() const
{
    return *(state_m.find(monitorPoint_UPS2_INVERTER_VOLTS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2OutputCurrentProxy() const
{
    return getMonitorUps2OutputCurrent();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2OutputCurrent() const
{
    return *(state_m.find(monitorPoint_UPS2_OUTPUT_CURRENT)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2OutputVoltsProxy() const
{
    return getMonitorUps2OutputVolts();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUps2OutputVolts() const
{
    return *(state_m.find(monitorPoint_UPS2_OUTPUT_VOLTS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUpsStatus1Proxy() const
{
    return getMonitorUpsStatus1();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUpsStatus1() const
{
    return *(state_m.find(monitorPoint_UPS_STATUS_1)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUpsStatus2Proxy() const
{
    return getMonitorUpsStatus2();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorUpsStatus2() const
{
    return *(state_m.find(monitorPoint_UPS_STATUS_2)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorAcStatusProxy() const
{
    return getMonitorAcStatus();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorAcStatus() const
{
    return *(state_m.find(monitorPoint_AC_STATUS)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorShutterProxy() const
{
    return getMonitorShutter();
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getMonitorShutter() const
{
    return *(state_m.find(monitorPoint_SHUTTER)->second);
}

// Specific Control get helpers
// ----------------------------------------------------------------------------

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getControlSetSubrefDeltaRotProxy() const
{
    return getControlSetSubrefDeltaRot(); 
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getControlSetSubrefDeltaRot() const
{
    return *(state_m.find(controlPoint_SUBREF_DELTA_ROT)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getControlSetSubrefRotationProxy() const
{
    return getControlSetSubrefRotation(); 
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getControlSetSubrefRotation() const
{
    return *(state_m.find(controlPoint_SUBREF_ROTATION)->second);
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getControlSelftestStopProxy() const
{
    return getControlSelftestStop(); 
}

std::vector< CAN::byte_t >
    AMB::MountVertexLLamaHWSimBase::getControlSelftestStop() const
{
    return *(state_m.find(controlPoint_SELFTEST_STOP)->second);
}

// Specific Control set helpers
// ----------------------------------------------------------------------------

void AMB::MountVertexLLamaHWSimBase::setControlSetSubrefDeltaRotProxy(
    const std::vector< CAN::byte_t >& data)
{
    setControlSetSubrefDeltaRot(data);
}

void AMB::MountVertexLLamaHWSimBase::setControlSetSubrefDeltaRot(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "controlPoint_SUBREF_DELTA_ROT");
    if(state_m.find(controlPoint_SUBREF_DELTA_ROT) != state_m.end())
    {
        *(state_m.find(controlPoint_SUBREF_DELTA_ROT)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set controlPoint_SUBREF_DELTA_ROT. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setControlSetSubrefRotationProxy(
    const std::vector< CAN::byte_t >& data)
{
    setControlSetSubrefRotation(data);
}

void AMB::MountVertexLLamaHWSimBase::setControlSetSubrefRotation(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "controlPoint_SUBREF_ROTATION");
    if(state_m.find(controlPoint_SUBREF_ROTATION) != state_m.end())
    {
        *(state_m.find(controlPoint_SUBREF_ROTATION)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set controlPoint_SUBREF_ROTATION. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setControlSelftestStopProxy(
    const std::vector< CAN::byte_t >& data)
{
    setControlSelftestStop(data);
}

void AMB::MountVertexLLamaHWSimBase::setControlSelftestStop(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "controlPoint_SELFTEST_STOP");
    if(state_m.find(controlPoint_SELFTEST_STOP) != state_m.end())
    {
        *(state_m.find(controlPoint_SELFTEST_STOP)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set controlPoint_SELFTEST_STOP. Member not found.");
    }
}

// Specific Monitor set helpers
// ----------------------------------------------------------------------------

void AMB::MountVertexLLamaHWSimBase::setMonitorCanErrorProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorCanError(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorCanError(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_CAN_ERROR");
    if(state_m.find(monitorPoint_CAN_ERROR) != state_m.end())
    {
        *(state_m.find(monitorPoint_CAN_ERROR)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_CAN_ERROR. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSystemIdProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorSystemId(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSystemId(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 3U, "monitorPoint_SYSTEM_ID");
    if(state_m.find(monitorPoint_SYSTEM_ID) != state_m.end())
    {
        *(state_m.find(monitorPoint_SYSTEM_ID)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SYSTEM_ID. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorNumTransProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorNumTrans(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorNumTrans(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_NUM_TRANS");
    if(state_m.find(monitorPoint_NUM_TRANS) != state_m.end())
    {
        *(state_m.find(monitorPoint_NUM_TRANS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_NUM_TRANS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSwRevLevelProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorSwRevLevel(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSwRevLevel(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 3U, "monitorPoint_SW_REV_LEVEL");
    if(state_m.find(monitorPoint_SW_REV_LEVEL) != state_m.end())
    {
        *(state_m.find(monitorPoint_SW_REV_LEVEL)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SW_REV_LEVEL. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorStowPinProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorStowPin(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorStowPin(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 2U, "monitorPoint_STOW_PIN");
    if(state_m.find(monitorPoint_STOW_PIN) != state_m.end())
    {
        *(state_m.find(monitorPoint_STOW_PIN)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_STOW_PIN. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSystemStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorSystemStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSystemStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_SYSTEM_STATUS");
    if(state_m.find(monitorPoint_SYSTEM_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_SYSTEM_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SYSTEM_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorAzEncStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorAzEncStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorAzEncStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_AZ_ENC_STATUS");
    if(state_m.find(monitorPoint_AZ_ENC_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_AZ_ENC_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_AZ_ENC_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorElEncStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorElEncStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorElEncStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_EL_ENC_STATUS");
    if(state_m.find(monitorPoint_EL_ENC_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_EL_ENC_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_EL_ENC_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorElStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorElStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorElStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_EL_STATUS");
    if(state_m.find(monitorPoint_EL_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_EL_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_EL_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasDispProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrDeltasDisp(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasDisp(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_DELTAS_DISP");
    if(state_m.find(monitorPoint_METR_DELTAS_DISP) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_DELTAS_DISP)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_DELTAS_DISP. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasSpemProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrDeltasSpem(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasSpem(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_DELTAS_SPEM");
    if(state_m.find(monitorPoint_METR_DELTAS_SPEM) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_DELTAS_SPEM)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_DELTAS_SPEM. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasTiltProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrDeltasTilt(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasTilt(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_DELTAS_TILT");
    if(state_m.find(monitorPoint_METR_DELTAS_TILT) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_DELTAS_TILT)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_DELTAS_TILT. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasTilttempProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrDeltasTilttemp(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrDeltasTilttemp(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_DELTAS_TILTTEMP");
    if(state_m.find(monitorPoint_METR_DELTAS_TILTTEMP) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_DELTAS_TILTTEMP)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_DELTAS_TILTTEMP. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrEquipStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrEquipStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrEquipStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_METR_EQUIP_STATUS");
    if(state_m.find(monitorPoint_METR_EQUIP_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_EQUIP_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_EQUIP_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrModeProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrMode(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrMode(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_METR_MODE");
    if(state_m.find(monitorPoint_METR_MODE) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_MODE)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_MODE. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps19Proxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps19(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps19(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_19");
    if(state_m.find(monitorPoint_METR_TEMPS_19) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_19)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_19. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1aProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps1a(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1a(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_1A");
    if(state_m.find(monitorPoint_METR_TEMPS_1A) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_1A)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_1A. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1bProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps1b(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1b(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_1B");
    if(state_m.find(monitorPoint_METR_TEMPS_1B) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_1B)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_1B. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1cProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps1c(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1c(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_1C");
    if(state_m.find(monitorPoint_METR_TEMPS_1C) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_1C)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_1C. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1dProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps1d(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1d(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_1D");
    if(state_m.find(monitorPoint_METR_TEMPS_1D) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_1D)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_1D. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1eProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps1e(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1e(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_1E");
    if(state_m.find(monitorPoint_METR_TEMPS_1E) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_1E)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_1E. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1fProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorMetrTemps1f(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorMetrTemps1f(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_METR_TEMPS_1F");
    if(state_m.find(monitorPoint_METR_TEMPS_1F) != state_m.end())
    {
        *(state_m.find(monitorPoint_METR_TEMPS_1F)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_METR_TEMPS_1F. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff07Proxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorPtModelCoeff07(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff07(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_PT_MODEL_COEFF_07");
    if(state_m.find(monitorPoint_PT_MODEL_COEFF_07) != state_m.end())
    {
        *(state_m.find(monitorPoint_PT_MODEL_COEFF_07)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_PT_MODEL_COEFF_07. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff08Proxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorPtModelCoeff08(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff08(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_PT_MODEL_COEFF_08");
    if(state_m.find(monitorPoint_PT_MODEL_COEFF_08) != state_m.end())
    {
        *(state_m.find(monitorPoint_PT_MODEL_COEFF_08)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_PT_MODEL_COEFF_08. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff09Proxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorPtModelCoeff09(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPtModelCoeff09(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 8U, "monitorPoint_PT_MODEL_COEFF_09");
    if(state_m.find(monitorPoint_PT_MODEL_COEFF_09) != state_m.end())
    {
        *(state_m.find(monitorPoint_PT_MODEL_COEFF_09)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_PT_MODEL_COEFF_09. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSubrefRotationProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorSubrefRotation(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSubrefRotation(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_SUBREF_ROTATION");
    if(state_m.find(monitorPoint_SUBREF_ROTATION) != state_m.end())
    {
        *(state_m.find(monitorPoint_SUBREF_ROTATION)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SUBREF_ROTATION. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSubrefDeltaRotProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorSubrefDeltaRot(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSubrefDeltaRot(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_SUBREF_DELTA_ROT");
    if(state_m.find(monitorPoint_SUBREF_DELTA_ROT) != state_m.end())
    {
        *(state_m.find(monitorPoint_SUBREF_DELTA_ROT)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SUBREF_DELTA_ROT. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSubrefStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorSubrefStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorSubrefStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 5U, "monitorPoint_SUBREF_STATUS");
    if(state_m.find(monitorPoint_SUBREF_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_SUBREF_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SUBREF_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorOtherStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorOtherStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorOtherStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_OTHER_STATUS");
    if(state_m.find(monitorPoint_OTHER_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_OTHER_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_OTHER_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPowerStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorPowerStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorPowerStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 2U, "monitorPoint_POWER_STATUS");
    if(state_m.find(monitorPoint_POWER_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_POWER_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_POWER_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2AlarmsProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2Alarms(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2Alarms(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_UPS2_ALARMS");
    if(state_m.find(monitorPoint_UPS2_ALARMS) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_ALARMS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_ALARMS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2BatteryOutputProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2BatteryOutput(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2BatteryOutput(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_UPS2_BATTERY_OUTPUT");
    if(state_m.find(monitorPoint_UPS2_BATTERY_OUTPUT) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_BATTERY_OUTPUT)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_BATTERY_OUTPUT. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2BatteryStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2BatteryStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2BatteryStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_UPS2_BATTERY_STATUS");
    if(state_m.find(monitorPoint_UPS2_BATTERY_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_BATTERY_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_BATTERY_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2BypassVoltsProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2BypassVolts(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2BypassVolts(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_UPS2_BYPASS_VOLTS");
    if(state_m.find(monitorPoint_UPS2_BYPASS_VOLTS) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_BYPASS_VOLTS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_BYPASS_VOLTS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2FreqsProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2Freqs(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2Freqs(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 4U, "monitorPoint_UPS2_FREQS");
    if(state_m.find(monitorPoint_UPS2_FREQS) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_FREQS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_FREQS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps1InverterSwProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps1InverterSw(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps1InverterSw(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_UPS1_INVERTER_SW");
    if(state_m.find(monitorPoint_UPS1_INVERTER_SW) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS1_INVERTER_SW)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS1_INVERTER_SW. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2InverterSwProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2InverterSw(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2InverterSw(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_UPS2_INVERTER_SW");
    if(state_m.find(monitorPoint_UPS2_INVERTER_SW) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_INVERTER_SW)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_INVERTER_SW. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2InverterVoltsProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2InverterVolts(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2InverterVolts(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_UPS2_INVERTER_VOLTS");
    if(state_m.find(monitorPoint_UPS2_INVERTER_VOLTS) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_INVERTER_VOLTS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_INVERTER_VOLTS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2OutputCurrentProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2OutputCurrent(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2OutputCurrent(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_UPS2_OUTPUT_CURRENT");
    if(state_m.find(monitorPoint_UPS2_OUTPUT_CURRENT) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_OUTPUT_CURRENT)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_OUTPUT_CURRENT. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2OutputVoltsProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUps2OutputVolts(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUps2OutputVolts(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 6U, "monitorPoint_UPS2_OUTPUT_VOLTS");
    if(state_m.find(monitorPoint_UPS2_OUTPUT_VOLTS) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS2_OUTPUT_VOLTS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS2_OUTPUT_VOLTS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUpsStatus1Proxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUpsStatus1(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUpsStatus1(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_UPS_STATUS_1");
    if(state_m.find(monitorPoint_UPS_STATUS_1) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS_STATUS_1)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS_STATUS_1. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUpsStatus2Proxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorUpsStatus2(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorUpsStatus2(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_UPS_STATUS_2");
    if(state_m.find(monitorPoint_UPS_STATUS_2) != state_m.end())
    {
        *(state_m.find(monitorPoint_UPS_STATUS_2)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_UPS_STATUS_2. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorAcStatusProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorAcStatus(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorAcStatus(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_AC_STATUS");
    if(state_m.find(monitorPoint_AC_STATUS) != state_m.end())
    {
        *(state_m.find(monitorPoint_AC_STATUS)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_AC_STATUS. Member not found.");
    }
}

void AMB::MountVertexLLamaHWSimBase::setMonitorShutterProxy(
    const std::vector< CAN::byte_t >& data)
{
    setMonitorShutter(data);
}

void AMB::MountVertexLLamaHWSimBase::setMonitorShutter(
    const std::vector< CAN::byte_t >& data)
{
    checkSize(data, 1U, "monitorPoint_SHUTTER");
    if(state_m.find(monitorPoint_SHUTTER) != state_m.end())
    {
        *(state_m.find(monitorPoint_SHUTTER)->second) = data;

    }
    else
    {
        throw CAN::Error("Trying to set monitorPoint_SHUTTER. Member not found.");
    }
}
