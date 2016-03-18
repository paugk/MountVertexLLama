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
 * $Id: TestHWSimImpl.xpt 199109 2013-12-18 18:37:52Z rmarson $
 *
 */

#include <limits>
#include <vector>
#include <ambDefs.h>
#include <cppunit/extensions/HelperMacros.h>
#include <TypeConversion.h>
#include <MountVertexLLamaHWSimBase.h>

/**
 * A test case for the MountVertexLLamaHWSimBase class
 *
 */
class MountVertexLLamaHWSimImplTestCase: public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(MountVertexLLamaHWSimImplTestCase);
    CPPUNIT_TEST(test_simulation);
    CPPUNIT_TEST_SUITE_END();

    public:
    void setUp();
    void tearDown();

    protected:
    void test_simulation();
    std::vector< CAN::byte_t > createVector(const AmbDataLength_t size);

    ///  testMonitorPoint_CAN_ERROR
    void testMonitorPoint_CAN_ERROR();

    ///  testMonitorPoint_SYSTEM_ID
    void testMonitorPoint_SYSTEM_ID();

    ///  testMonitorPoint_NUM_TRANS
    void testMonitorPoint_NUM_TRANS();

    ///  testMonitorPoint_SW_REV_LEVEL
    void testMonitorPoint_SW_REV_LEVEL();

    ///  testMonitorPoint_STOW_PIN
    void testMonitorPoint_STOW_PIN();

    ///  testMonitorPoint_SYSTEM_STATUS
    void testMonitorPoint_SYSTEM_STATUS();

    ///  testMonitorPoint_AZ_ENC_STATUS
    void testMonitorPoint_AZ_ENC_STATUS();

    ///  testMonitorPoint_EL_ENC_STATUS
    void testMonitorPoint_EL_ENC_STATUS();

    ///  testMonitorPoint_EL_STATUS
    void testMonitorPoint_EL_STATUS();

    ///  testMonitorPoint_METR_DELTAS_DISP
    void testMonitorPoint_METR_DELTAS_DISP();

    ///  testMonitorPoint_METR_DELTAS_SPEM
    void testMonitorPoint_METR_DELTAS_SPEM();

    ///  testMonitorPoint_METR_DELTAS_TILT
    void testMonitorPoint_METR_DELTAS_TILT();

    ///  testMonitorPoint_METR_DELTAS_TILTTEMP
    void testMonitorPoint_METR_DELTAS_TILTTEMP();

    ///  testMonitorPoint_METR_EQUIP_STATUS
    void testMonitorPoint_METR_EQUIP_STATUS();

    ///  testMonitorPoint_METR_MODE
    void testMonitorPoint_METR_MODE();

    ///  testMonitorPoint_METR_TEMPS_19
    void testMonitorPoint_METR_TEMPS_19();

    ///  testMonitorPoint_METR_TEMPS_1A
    void testMonitorPoint_METR_TEMPS_1A();

    ///  testMonitorPoint_METR_TEMPS_1B
    void testMonitorPoint_METR_TEMPS_1B();

    ///  testMonitorPoint_METR_TEMPS_1C
    void testMonitorPoint_METR_TEMPS_1C();

    ///  testMonitorPoint_METR_TEMPS_1D
    void testMonitorPoint_METR_TEMPS_1D();

    ///  testMonitorPoint_METR_TEMPS_1E
    void testMonitorPoint_METR_TEMPS_1E();

    ///  testMonitorPoint_METR_TEMPS_1F
    void testMonitorPoint_METR_TEMPS_1F();

    ///  testMonitorPoint_PT_MODEL_COEFF_07
    void testMonitorPoint_PT_MODEL_COEFF_07();

    ///  testMonitorPoint_PT_MODEL_COEFF_08
    void testMonitorPoint_PT_MODEL_COEFF_08();

    ///  testMonitorPoint_PT_MODEL_COEFF_09
    void testMonitorPoint_PT_MODEL_COEFF_09();

    ///  testMonitorPoint_SUBREF_ROTATION
    void testMonitorPoint_SUBREF_ROTATION();

    ///  testMonitorPoint_SUBREF_DELTA_ROT
    void testMonitorPoint_SUBREF_DELTA_ROT();

    ///  testMonitorPoint_SUBREF_STATUS
    void testMonitorPoint_SUBREF_STATUS();

    ///  testMonitorPoint_OTHER_STATUS
    void testMonitorPoint_OTHER_STATUS();

    ///  testMonitorPoint_POWER_STATUS
    void testMonitorPoint_POWER_STATUS();

    ///  testMonitorPoint_UPS2_ALARMS
    void testMonitorPoint_UPS2_ALARMS();

    ///  testMonitorPoint_UPS2_BATTERY_OUTPUT
    void testMonitorPoint_UPS2_BATTERY_OUTPUT();

    ///  testMonitorPoint_UPS2_BATTERY_STATUS
    void testMonitorPoint_UPS2_BATTERY_STATUS();

    ///  testMonitorPoint_UPS2_BYPASS_VOLTS
    void testMonitorPoint_UPS2_BYPASS_VOLTS();

    ///  testMonitorPoint_UPS2_FREQS
    void testMonitorPoint_UPS2_FREQS();

    ///  testMonitorPoint_UPS1_INVERTER_SW
    void testMonitorPoint_UPS1_INVERTER_SW();

    ///  testMonitorPoint_UPS2_INVERTER_SW
    void testMonitorPoint_UPS2_INVERTER_SW();

    ///  testMonitorPoint_UPS2_INVERTER_VOLTS
    void testMonitorPoint_UPS2_INVERTER_VOLTS();

    ///  testMonitorPoint_UPS2_OUTPUT_CURRENT
    void testMonitorPoint_UPS2_OUTPUT_CURRENT();

    ///  testMonitorPoint_UPS2_OUTPUT_VOLTS
    void testMonitorPoint_UPS2_OUTPUT_VOLTS();

    ///  testMonitorPoint_UPS_STATUS_1
    void testMonitorPoint_UPS_STATUS_1();

    ///  testMonitorPoint_UPS_STATUS_2
    void testMonitorPoint_UPS_STATUS_2();

    ///  testMonitorPoint_AC_STATUS
    void testMonitorPoint_AC_STATUS();

    ///  testMonitorPoint_SHUTTER
    void testMonitorPoint_SHUTTER();

    ///  testControlPoint_SUBREF_DELTA_ROT
    void testControlPoint_SUBREF_DELTA_ROT();

    ///  testControlPoint_SUBREF_ROTATION
    void testControlPoint_SUBREF_ROTATION();

    ///  testControlPoint_SELFTEST_STOP
    void testControlPoint_SELFTEST_STOP();

    //AMB::Device* sim_m;
    AMB::MountVertexLLamaHWSimBase* sim_m;
};

CPPUNIT_TEST_SUITE_REGISTRATION(MountVertexLLamaHWSimImplTestCase);

///  testMonitorPoint_CAN_ERROR
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_CAN_ERROR()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x07001U), AMB::MountVertexLLamaHWSimBase::monitorPoint_CAN_ERROR);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_CAN_ERROR + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_CAN_ERROR + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_CAN_ERROR + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SYSTEM_ID
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SYSTEM_ID()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(3U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x70004U), AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_ID);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_ID + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_ID + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_ID + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_NUM_TRANS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_NUM_TRANS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x70002U), AMB::MountVertexLLamaHWSimBase::monitorPoint_NUM_TRANS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_NUM_TRANS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_NUM_TRANS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_NUM_TRANS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SW_REV_LEVEL
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SW_REV_LEVEL()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(3U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x70000U), AMB::MountVertexLLamaHWSimBase::monitorPoint_SW_REV_LEVEL);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SW_REV_LEVEL + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SW_REV_LEVEL + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SW_REV_LEVEL + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_STOW_PIN
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_STOW_PIN()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(2U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0024U), AMB::MountVertexLLamaHWSimBase::monitorPoint_STOW_PIN);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_STOW_PIN + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_STOW_PIN + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_STOW_PIN + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SYSTEM_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SYSTEM_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0023U), AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SYSTEM_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_AZ_ENC_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_AZ_ENC_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0018U), AMB::MountVertexLLamaHWSimBase::monitorPoint_AZ_ENC_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_AZ_ENC_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_AZ_ENC_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_AZ_ENC_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_EL_ENC_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_EL_ENC_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0008U), AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_ENC_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_ENC_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_ENC_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_ENC_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_EL_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_EL_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x000bU), AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_EL_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_DELTAS_DISP
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_DELTAS_DISP()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x7010U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_DISP);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_DISP + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_DISP + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_DISP + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_DELTAS_SPEM
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_DELTAS_SPEM()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x7011U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_SPEM);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_SPEM + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_SPEM + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_SPEM + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_DELTAS_TILT
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_DELTAS_TILT()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x7012U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILT);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILT + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_DELTAS_TILTTEMP
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_DELTAS_TILTTEMP()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x7013U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILTTEMP);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILTTEMP + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILTTEMP + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_DELTAS_TILTTEMP + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_EQUIP_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_EQUIP_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0032U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_EQUIP_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_EQUIP_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_EQUIP_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_EQUIP_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_MODE
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_MODE()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0031U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_MODE);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_MODE + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_MODE + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_MODE + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_19
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_19()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4019U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_19);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_19 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_19 + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_19 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_1A
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_1A()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4020U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1A);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1A + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1A + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1A + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_1B
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_1B()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4021U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1B);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1B + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1B + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1B + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_1C
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_1C()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4022U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1C);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1C + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1C + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1C + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_1D
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_1D()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4023U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1D);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1D + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1D + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1D + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_1E
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_1E()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4024U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1E);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1E + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1E + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1E + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_METR_TEMPS_1F
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_METR_TEMPS_1F()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x4025U), AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1F);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1F + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1F + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_METR_TEMPS_1F + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_PT_MODEL_COEFF_07
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_PT_MODEL_COEFF_07()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x3047U), AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_07);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_07 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_07 + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_07 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_PT_MODEL_COEFF_08
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_PT_MODEL_COEFF_08()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x3048U), AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_08);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_08 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_08 + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_08 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_PT_MODEL_COEFF_09
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_PT_MODEL_COEFF_09()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(8U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x3049U), AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_09);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_09 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_09 + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_PT_MODEL_COEFF_09 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SUBREF_ROTATION
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SUBREF_ROTATION()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x002aU), AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_ROTATION);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_ROTATION + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_ROTATION + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_ROTATION + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SUBREF_DELTA_ROT
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SUBREF_DELTA_ROT()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0026U), AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_DELTA_ROT);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_DELTA_ROT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_DELTA_ROT + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_DELTA_ROT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SUBREF_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SUBREF_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(5U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0029U), AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SUBREF_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_OTHER_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_OTHER_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x8003aU), AMB::MountVertexLLamaHWSimBase::monitorPoint_OTHER_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_OTHER_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_OTHER_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_OTHER_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_POWER_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_POWER_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(2U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0030U), AMB::MountVertexLLamaHWSimBase::monitorPoint_POWER_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_POWER_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_POWER_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_POWER_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_ALARMS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_ALARMS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x004cU), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_ALARMS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_ALARMS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_ALARMS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_ALARMS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_BATTERY_OUTPUT
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_BATTERY_OUTPUT()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0048U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_OUTPUT);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_OUTPUT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_OUTPUT + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_OUTPUT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_BATTERY_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_BATTERY_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0049U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BATTERY_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_BYPASS_VOLTS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_BYPASS_VOLTS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x004aU), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BYPASS_VOLTS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BYPASS_VOLTS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BYPASS_VOLTS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_BYPASS_VOLTS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_FREQS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_FREQS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(4U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x004bU), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_FREQS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_FREQS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_FREQS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_FREQS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS1_INVERTER_SW
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS1_INVERTER_SW()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x80035U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS1_INVERTER_SW);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS1_INVERTER_SW + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS1_INVERTER_SW + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS1_INVERTER_SW + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_INVERTER_SW
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_INVERTER_SW()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x80045U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_SW);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_SW + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_SW + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_SW + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_INVERTER_VOLTS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_INVERTER_VOLTS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x004dU), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_VOLTS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_VOLTS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_VOLTS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_INVERTER_VOLTS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_OUTPUT_CURRENT
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_OUTPUT_CURRENT()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0046U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_CURRENT);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_CURRENT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_CURRENT + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_CURRENT + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS2_OUTPUT_VOLTS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS2_OUTPUT_VOLTS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x0045U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_VOLTS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_VOLTS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_VOLTS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS2_OUTPUT_VOLTS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS_STATUS_1
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS_STATUS_1()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x80039U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_1);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_1 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_1 + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_1 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_UPS_STATUS_2
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_UPS_STATUS_2()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x80049U), AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_2);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_2 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_2 + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_UPS_STATUS_2 + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_AC_STATUS
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_AC_STATUS()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x002cU), AMB::MountVertexLLamaHWSimBase::monitorPoint_AC_STATUS);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_AC_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_AC_STATUS + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_AC_STATUS + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testMonitorPoint_SHUTTER
void MountVertexLLamaHWSimImplTestCase::testMonitorPoint_SHUTTER()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x002eU), AMB::MountVertexLLamaHWSimBase::monitorPoint_SHUTTER);

    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SHUTTER + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    CPPUNIT_ASSERT_NO_THROW(sim_m->monitorSetter(AMB::MountVertexLLamaHWSimBase::monitorPoint_SHUTTER + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountVertexLLamaHWSimBase::monitorPoint_SHUTTER + baseAddress_m));

    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());

    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

/// Testing specific control points

///  testControlPoint_SUBREF_DELTA_ROT
void MountVertexLLamaHWSimImplTestCase::testControlPoint_SUBREF_DELTA_ROT()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x1026U), AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_DELTA_ROT);
    CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_DELTA_ROT + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->controlGetter(AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_DELTA_ROT + baseAddress_m));
    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());
    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testControlPoint_SUBREF_ROTATION
void MountVertexLLamaHWSimImplTestCase::testControlPoint_SUBREF_ROTATION()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(6U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x1028U), AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_ROTATION);
    CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_ROTATION + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->controlGetter(AMB::MountVertexLLamaHWSimBase::controlPoint_SUBREF_ROTATION + baseAddress_m));
    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());
    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

///  testControlPoint_SELFTEST_STOP
void MountVertexLLamaHWSimImplTestCase::testControlPoint_SELFTEST_STOP()
{
    std::vector< CAN::byte_t > received, original;
    const AmbDataLength_t size(1U);

    const unsigned long baseAddress_m(0UL);

    CPPUNIT_ASSERT_EQUAL(static_cast< AMB::rca_t >(0x1032U), AMB::MountVertexLLamaHWSimBase::controlPoint_SELFTEST_STOP);
    CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountVertexLLamaHWSimBase::controlPoint_SELFTEST_STOP + baseAddress_m, createVector(size)));
    received.clear();
    CPPUNIT_ASSERT_NO_THROW(received = sim_m->controlGetter(AMB::MountVertexLLamaHWSimBase::controlPoint_SELFTEST_STOP + baseAddress_m));
    CPPUNIT_ASSERT_EQUAL(static_cast< std::size_t >(size), received.size());
    for(AmbDataLength_t i(0U); i < size; ++i)
    {
        CPPUNIT_ASSERT_EQUAL(static_cast< CAN::byte_t >(i + 1U), received[i]);
    }
}

void MountVertexLLamaHWSimImplTestCase::setUp()
{
    AMB::node_t node(0x0U);
    std::vector< CAN::byte_t > sn(8U, 0x0U);

    sim_m = new AMB::MountVertexLLamaHWSimBase(node, sn);
}

void MountVertexLLamaHWSimImplTestCase::tearDown()
{
    delete sim_m;
    sim_m = 0;
}

void MountVertexLLamaHWSimImplTestCase::test_simulation()
{
    /// Testing specific monitor points

    testMonitorPoint_NUM_TRANS();

    testMonitorPoint_AZ_ENC_STATUS();

    testMonitorPoint_EL_ENC_STATUS();

    testMonitorPoint_PT_MODEL_COEFF_07();

    testMonitorPoint_PT_MODEL_COEFF_08();

    testMonitorPoint_PT_MODEL_COEFF_09();

    testMonitorPoint_OTHER_STATUS();

    testMonitorPoint_UPS1_INVERTER_SW();

    testMonitorPoint_UPS2_INVERTER_SW();

    testMonitorPoint_UPS_STATUS_1();

    testMonitorPoint_UPS_STATUS_2();

    testMonitorPoint_AC_STATUS();

    testMonitorPoint_SHUTTER();

    /// Testing specific control points

    testControlPoint_SUBREF_DELTA_ROT();

    testControlPoint_SUBREF_ROTATION();

    testControlPoint_SELFTEST_STOP();

    /// Testing error cases
    CPPUNIT_ASSERT_THROW(sim_m->control(static_cast< AMB::rca_t >(0x99999U), createVector(8U)), CAN::Error);
    CPPUNIT_ASSERT_THROW(sim_m->monitor(static_cast< AMB::rca_t >(0x99999U)), CAN::Error);
}

std::vector< CAN::byte_t > MountVertexLLamaHWSimImplTestCase::createVector(const AmbDataLength_t size)
{
    std::vector< CAN::byte_t > data;

    for(AmbDataLength_t count(1U); count <= size; ++count)
    {
        data.push_back(static_cast< CAN::byte_t >(count));
    }

    return data;
}

/**
 * Main function running the tests
 */
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>

int main(int argc, char* argv[])
{
    // Create the event manager and test controller
    CPPUNIT_NS::TestResult controller;

    // Add a listener that colllects test result
    CPPUNIT_NS::TestResultCollector result;
    controller.addListener(&result);

    // Add a listener that print dots as test run.
    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener(&progress);

    // Add the top suite to the test runner
    CPPUNIT_NS::TestRunner runner;
    runner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    runner.run(controller);

    // Print test in a compiler compatible format.
    CPPUNIT_NS::CompilerOutputter outputter(&result, std::cerr);
    outputter.write();

    return result.wasSuccessful() ? 0 : 1;
}
