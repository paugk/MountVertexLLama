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
 *
 * File TestMountVertexLLamaHWSim.cpp
*/

#include <cppunit/extensions/HelperMacros.h>
#include <TypeConversion.h>
#include "MountVertexLLamaHWSimImpl.h"

/*
 * A test case for the MountVertexLLamaHWSimImpl class
 *
 */
class MountVertexLLamaHWSimImplTestCase : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( MountVertexLLamaHWSimImplTestCase );
	CPPUNIT_TEST( test_simulation );
	CPPUNIT_TEST_SUITE_END();

  public:
	void setUp();
	void tearDown();

  protected:
	void test_simulation();
	std::vector<CAN::byte_t> createVector(int size);

	AMB::Device* sim_m;
};

CPPUNIT_TEST_SUITE_REGISTRATION( MountVertexLLamaHWSimImplTestCase );

void MountVertexLLamaHWSimImplTestCase::setUp()
{
	AMB::node_t node = 0x00;
	std::vector<CAN::byte_t> sn(8,0x00);

	sim_m = new AMB::MountVertexLLamaHWSimImpl(node, sn);
}

void MountVertexLLamaHWSimImplTestCase::tearDown()
{
	delete sim_m;
}

void MountVertexLLamaHWSimImplTestCase::test_simulation()
{
	std::vector<CAN::byte_t> received, original;
	unsigned short i, size;
	long long raw;

         const unsigned long baseAddress = 0;

	///  monitorPoint_AZ_POSN_RSP
	CPPUNIT_ASSERT_EQUAL(static_cast<AMB::rca_t>(0x0012), AMB::MountHWSimBase::monitorPoint_AZ_POSN_RSP);
	size = 8;

	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_AZ_POSN_RSP + baseAddress));

	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());

	raw = 0LL;

	original.clear();

	original.resize(8,0);
	{
	union {
	  unsigned long long raw;
	  long pos[2];
	} data;
	double deg0, deg1;
	AMB::TypeConversion::dataToValue(received, data.raw);
	std::cout.setf(std::ios::dec);

	AMB::MountHWSimImpl::PositionTransformations transformation;
	transformation.bitsToDegrees(deg0, data.pos[0]);
	transformation.bitsToDegrees(deg1, data.pos[1]);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, deg0, 0.00001);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, deg1, 0.00001);
       
	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::monitorPoint_AZ_POSN_RSP + baseAddress, createVector(size)));
	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_AZ_POSN_RSP + baseAddress));
	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());
	}

	///  monitorPoint_EL_POSN_RSP
	CPPUNIT_ASSERT_EQUAL(static_cast<AMB::rca_t>(0x0002), AMB::MountHWSimBase::monitorPoint_EL_POSN_RSP);
	size = 8;

	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_EL_POSN_RSP + baseAddress));

	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());

	raw = 0LL;

	original.clear();

	original.resize(8,0);
	{
	union {
	  unsigned long long raw;
	  long pos[2];
	} data;
	double deg0, deg1;
	AMB::TypeConversion::dataToValue(received, data.raw);
	std::cout.setf(std::ios::dec);

	AMB::MountHWSimImpl::PositionTransformations transformation;
	transformation.bitsToDegrees(deg0, data.pos[0]);
	transformation.bitsToDegrees(deg1, data.pos[1]);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, deg0, 0.00001);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, deg1, 0.00001);
	}
	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::monitorPoint_EL_POSN_RSP + baseAddress, createVector(size)));
	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_EL_POSN_RSP + baseAddress));
	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());

	///  monitorPoint_AZ_ENC
	CPPUNIT_ASSERT_EQUAL(static_cast<AMB::rca_t>(0x0017), AMB::MountHWSimBase::monitorPoint_AZ_ENC);
	size = 4;

	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_AZ_ENC + baseAddress));

	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());
	{
	long value;
	double deg0;
	AMB::TypeConversion::dataToValue(received, value);
	std::cout.setf(std::ios::dec);
	{
	AMB::MountHWSimImpl::PositionTransformations transformation;
	transformation.bitsToDegrees(deg0, value);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, deg0, 0.00001);
	}
	}
	raw = 0LL;
	
	original.clear();


	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::monitorPoint_AZ_ENC + baseAddress, createVector(size)));
	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_AZ_ENC + baseAddress));
	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());


	///  monitorPoint_EL_ENC
	CPPUNIT_ASSERT_EQUAL(static_cast<AMB::rca_t>(0x0007), AMB::MountHWSimBase::monitorPoint_EL_ENC);
	size = 4;

	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_EL_ENC + baseAddress));

	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());
	{
	long value;
	double deg0;
	AMB::TypeConversion::dataToValue(received, value);
	std::cout.setf(std::ios::dec);
	{
	AMB::MountHWSimImpl::PositionTransformations transformation;
	transformation.bitsToDegrees(deg0, value);
	CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, deg0, 0.00001);
	}
	}

	raw = 0LL;

	original.clear();

	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::monitorPoint_EL_ENC + baseAddress, createVector(size)));
	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::monitorPoint_EL_ENC + baseAddress));
	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());

	///  controlPoint_AZ_TRAJ_CMD
	CPPUNIT_ASSERT_EQUAL(static_cast<AMB::rca_t>(0x1012), AMB::MountHWSimBase::controlPoint_AZ_TRAJ_CMD);
	size = 8;
	CPPUNIT_ASSERT_NO_THROW(sim_m->monitor(AMB::MountHWSimBase::controlPoint_AZ_TRAJ_CMD + baseAddress));

	double position, velocity;
	position = 20.0; 
	velocity = 0.0;
	
	long rawPos, rawVel;
	AMB::MountHWSimImpl::PositionTransformations transformation;
	transformation.degreesToBits(position, rawPos);
	transformation.degreesToBits(velocity, rawVel);
	
	std::vector<CAN::byte_t> pos;
	std::vector<CAN::byte_t> vel;
	std::vector<CAN::byte_t> data;
	AMB::TypeConversion::valueToData(pos, rawPos);
	AMB::TypeConversion::valueToData(vel, rawVel);
	
	const unsigned short longSize = sizeof(long);
	for(unsigned short index=0; index <longSize; index++)
	  {
	    data.push_back(pos[index]);
	  }
	for(unsigned short index=0; index <longSize; index++)
	  {
	    data.push_back(vel[index]);
	  }
	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::controlPoint_AZ_TRAJ_CMD + baseAddress, data));       
#if 0
	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::controlPoint_AZ_TRAJ_CMD + baseAddress, createVector(size)));
	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::controlPoint_AZ_TRAJ_CMD + baseAddress));
	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());
	for (i=0; i<size; i++)
		CPPUNIT_ASSERT_EQUAL(static_cast<CAN::byte_t>(i+1), received[i]);

	///  controlPoint_EL_TRAJ_CMD
	CPPUNIT_ASSERT_EQUAL(static_cast<AMB::rca_t>(0x1002), AMB::MountHWSimBase::controlPoint_EL_TRAJ_CMD);
	size = 8;
	CPPUNIT_ASSERT_NO_THROW(sim_m->monitor(AMB::MountHWSimBase::controlPoint_EL_TRAJ_CMD + baseAddress));
	CPPUNIT_ASSERT_NO_THROW(sim_m->control(AMB::MountHWSimBase::controlPoint_EL_TRAJ_CMD + baseAddress, createVector(size)));
	received.clear();
	CPPUNIT_ASSERT_NO_THROW(received = sim_m->monitor(AMB::MountHWSimBase::controlPoint_EL_TRAJ_CMD + baseAddress));
	CPPUNIT_ASSERT_EQUAL(static_cast<size_t>(size), received.size());
	for (i=0; i<size; i++)
		CPPUNIT_ASSERT_EQUAL(static_cast<CAN::byte_t>(i+1), received[i]);

#endif
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImplTestCase::createVector(int size)
{
	std::vector<CAN::byte_t> data;
	int count;

	for (count=1; count<=size; count++)
		data.push_back(static_cast<CAN::byte_t>(count));

	return data;
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
