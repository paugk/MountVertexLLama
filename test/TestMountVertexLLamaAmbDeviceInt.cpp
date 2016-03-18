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
 * $Id: TestAmbDeviceInt.xpt 199109 2013-12-18 18:37:52Z rmarson $
 *
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cerrno>
#include <ambDefs.h>
#include <cppunit/extensions/HelperMacros.h>
#include <BareAmbDeviceInt.h>
#include <MountVertexLLamaHWSimImpl.h>

static unsigned int node_m(0x999999U);

/**
 * A test case for the MountVertexLLama device communication,
 * using the AmbDeviceInt class
 *
 */
class MountVertexLLamaAmbDeviceIntTestCase: public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(MountVertexLLamaAmbDeviceIntTestCase);
    CPPUNIT_TEST(test_simulation);
    CPPUNIT_TEST_SUITE_END();

    public:
    void setUp();

    protected:

    void test_simulation();

    BareAMBDeviceInt deviceIf;
    BareAMBDeviceInt::ICDPoint point;
};

CPPUNIT_TEST_SUITE_REGISTRATION(MountVertexLLamaAmbDeviceIntTestCase);

void MountVertexLLamaAmbDeviceIntTestCase::setUp()
{
    int channel(0), nodeId(0);

    std::ios::fmtflags oldFlags(std::cout.flags());
    std::cout.setf(std::ios::hex, std::ios::basefield);

    if(node_m != 0x999999U)
    {
        nodeId = node_m;
        std::cout << "Using Node Address 0x"
            << nodeId
            << ".\n";
    }
    else
    {

        nodeId = 0x0;
        std::cout << "No Node Address provided. Using default 0x"
            << nodeId
            << ".\n";

    }

    std::cout.setf(oldFlags);

    if(deviceIf.initialize(channel, nodeId) == false)
    {
        exit(-ENODEV);
    }
}

void MountVertexLLamaAmbDeviceIntTestCase::test_simulation()
{
    /// Testing specific monitor points

    /// Testing specific control points

    /// Testing error cases
    point.rca = 0x99999U;
    point.dataLength = 1U;
    point.data.Char[0] = 1U;
    point.status = AMBERR_PENDING;
    CPPUNIT_ASSERT_NO_THROW(deviceIf.sendControl(point));
    CPPUNIT_ASSERT_EQUAL(AMBERR_ADDRERR, point.status);

    point.rca = 0x99999U;
    point.status = AMBERR_PENDING;
    CPPUNIT_ASSERT_NO_THROW(deviceIf.sendMonitor(point));
    CPPUNIT_ASSERT_EQUAL(AMBERR_ADDRERR, point.status);
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
    // Receive the argument Node ID
    if(argc == 2)
    {
        node_m = atoi(argv[1]);
    }
    else
    {
        node_m = 0x999999U;
    }

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
