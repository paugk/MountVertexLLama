
/*
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
 * File MountVertexLLamaCompSimImpl.cpp
 */

#include "MountVertexLLamaCompSimImpl.h"
#include <MountVertexLLamaHWSimImpl.h>
#include <maciACSComponentDefines.h>
#include <TypeConversion.h>

using namespace maci;

/* Please use this class to implement alternative component, extending
 * the MountVertexLLamaCompSimBase class. */

MountVertexLLamaCompSimImpl::MountVertexLLamaCompSimImpl(const ACE_CString& name, ContainerServices* pCS)
	: MountVertexLLamaCompSimBase(name,pCS)
{
    const std::string fnName("MountVertexLLamaCompSimImpl::MountVertexLLamaCompSimImpl");
    AUTO_TRACE(fnName);
    std::string componentName(name.c_str());
    unsigned long long hashed_sn=AMB::Utils::getSimSerialNumber(componentName,"MountVertexLLama");
    std::ostringstream msg;
    msg<< "simSerialNumber for  " << name.c_str() << "  with assembly name " << "MountVertexLLama" << " is " << std::hex << "0x" << hashed_sn << std::endl;
    ACS_LOG(LM_SOURCE_INFO, fnName, (LM_DEBUG, msg.str().c_str()));

    std::vector< CAN::byte_t > sn;
    AMB::node_t node = 0x00;
    AMB::TypeConversion::valueToData(sn,hashed_sn, 8U);
/*	const char* __METHOD__ = "MountVertexLLamaCompSimImpl::MountVertexLLamaCompSimImpl";
	ACS_TRACE(__METHOD__);

	std::vector<CAN::byte_t> sn;
	AMB::node_t node = 0x00;
        //SimSerialNumber 0x00000000ab824afd
        AMB::TypeConversion::valueToData(sn, static_cast< long long >(0x00000000ab824afd), 8U);*/

	simulationIf_m.setSimObj(new AMB::MountVertexLLamaHWSimImpl(node,sn));
}

/* --------------- [ MACI DLL support functions ] -----------------*/
MACI_DLL_SUPPORT_FUNCTIONS(MountVertexLLamaCompSimImpl)
