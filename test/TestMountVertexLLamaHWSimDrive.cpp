/*******************************************************************************
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
 * File TestMountVertexLLamaHWSimDrive.cpp
*/

#include <cppunit/extensions/HelperMacros.h>
#include <TypeConversion.h>
#include "MountVertexLLamaHWSimImplDrive.h"

/*
 * A test case for the MountVertexLLamaHWSimDrive class
 *
 */
using namespace VERTEX;
class MountVertexLLamaHWSimDriveTestCase : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( MountVertexLLamaHWSimDriveTestCase );
	CPPUNIT_TEST( test_simulation );
	CPPUNIT_TEST_SUITE_END();

  public:
	void setUp();
	void tearDown();

  protected:
	void test_simulation();
	MountVertexLLamaHWSimImplDrive drive_m;
};

CPPUNIT_TEST_SUITE_REGISTRATION( MountVertexLLamaHWSimDriveTestCase );

void MountVertexLLamaHWSimDriveTestCase::setUp()
{
#if 0
	AMB::node_t node = 0x00;
	std::vector<CAN::byte_t> sn(8,0x00);

	sim_m = new AMB::MountVertexLLamaHWSimBase(node, sn);
#endif
}

void MountVertexLLamaHWSimDriveTestCase::tearDown()
{
#if 0
	delete sim_m;
#endif
}

void MountVertexLLamaHWSimDriveTestCase::test_simulation()
{
	double position, velocity;
	drive_m.getAzPsn(position, velocity);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, position, 0.00001);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, velocity, 0.00001);
	drive_m.getElPsn(position, velocity);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, position, 0.00001);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, velocity, 0.00001);
}

/*
 * Main function running the tests
 */
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>

int main( int argc, char* argv[] )
{
	// Create the event manager and test controller
	CPPUNIT_NS::TestResult controller;

	// Add a listener that colllects test result
	CPPUNIT_NS::TestResultCollector result;
	controller.addListener( &result );

	// Add a listener that print dots as test run.
	CPPUNIT_NS::BriefTestProgressListener progress;
	controller.addListener( &progress );

	// Add the top suite to the test runner
	CPPUNIT_NS::TestRunner runner;
	runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
	runner.run( controller );

	// Print test in a compiler compatible format.
	CPPUNIT_NS::CompilerOutputter outputter( &result, std::cerr );
	outputter.write();

	return result.wasSuccessful() ? 0 : 1;
}
