// @(#) $Id: MountVertexLLamaCompSimImplSS.cpp 192600 2013-07-18 17:18:34Z rmarson $
//
// ALMA - Atacama Large Millimeter Array
// (c) Associated Universities Inc., 2008 - 2009
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
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
//
#include "MountVertexLLamaCompSimImplSS.h"
#include <maciACSComponentDefines.h>
#include <SharedSimAntNameMapping.h>
#include <SimulatedSerialNumber.h>

MountVertexLLamaCompSimImpl::MountVertexLLamaCompSimImpl(const ACE_CString& name,
                                               maci::ContainerServices* pCS)
  : MountVertexLLamaCompSimBase(name,pCS)
{
	const char* __METHOD__ = "MountVertexLLamaCompSimImpl::MountVertexLLamaCompSimImpl";
	compName_m = CORBA::String_var(acscomponent::ACSComponentImpl::name()).in();
	ACS_TRACE(__METHOD__);
}

MountVertexLLamaCompSimImpl::~MountVertexLLamaCompSimImpl()
{
	if(device_m) delete device_m;
}

void MountVertexLLamaCompSimImpl::initialize() {

  MountVertexLLamaCompSimBase::initialize();
  /*std::vector<CAN::byte_t> sn(8,0x00);
  AMB::node_t node = 0x00;	*/
  const std::string fnName("MountVertexLLamaCompSimImpl::initialize");
  AUTO_TRACE(fnName);
  std::string componentName(compName_m);
  unsigned long long hashed_sn=AMB::Utils::getSimSerialNumber(componentName,"MountVertexLLama");
  std::ostringstream msg;
  msg<< "simSerialNumber for  " << compName_m << "  with assembly name " << "MountVertexLLama" << " is " << std::hex << "0x" << hashed_sn << std::endl;
  ACS_LOG(LM_SOURCE_INFO, fnName, (LM_DEBUG, msg.str().c_str()));

  std::vector< CAN::byte_t > sn;
  AMB::node_t node = 0x00;
  AMB::TypeConversion::valueToData(sn,hashed_sn, 8U);

  // Antenna name conversion for shared simulator.
  SharedSimAntNameMapping ss_antID = SharedSimAntNameMapping();

  try{
    device_m = new AMB::MountVertexLLamaHWSimImpl(node,
					     sn,
					     ss_antID.getAntennaID(compName_m),
					     getContainerServices()->getDefaultComponent<SHARED_SIMULATOR::SharedSimulator>("IDL:alma/SHARED_SIMULATOR/SharedSimulator:1.0"));
  }
  catch(maciErrType::CannotGetComponentExImpl &_ex)
    {
      device_m = new AMB::MountVertexLLamaHWSimImpl(node,sn);
    }
  simulationIf_m.setSimObj(device_m);
  device_m->start();
}

void MountVertexLLamaCompSimImpl::cleanUp() {
  const char* __METHOD__="MountVertexLLamaCompSimImpl::cleanUp";

  device_m->stop();
  if (!CORBA::is_nil(device_m->getSharedSimulatorReference()))
    {
      try {
          getContainerServices()->releaseComponent(CORBA::String_var(
              device_m->getSharedSimulatorReference()->name()).in());
      }
      catch (maciErrType::CannotReleaseComponentExImpl& ex)
	{
	  getLogger()->log(Logging::BaseLog::LM_INFO,
			   "Could not release SS component",
			   __FILE__, __LINE__, __METHOD__);

	}
    }
  MountVertexLLamaCompSimBase::cleanUp();
}

/* --------------- [ MACI DLL support functions ] -----------------*/
MACI_DLL_SUPPORT_FUNCTIONS(MountVertexLLamaCompSimImpl)
