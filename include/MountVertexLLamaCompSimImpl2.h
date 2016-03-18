// @(#) $Id: MountVertexLLamaCompSimImpl2.h 192600 2013-07-18 17:18:34Z rmarson $
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
#ifndef MOUNTVERTEXLLAMACOMPSIMIMPL_H
#define MOUNTVERTEXLLAMACOMPSIMIMPL_H

#include "MountVertexLLamaCompSimBase.h"
namespace AMB {
    class MountVertexLLamaHWSimImpl;
}

// Please use this class to implement alternative components, extending the
// MountVertexLLamaCompSimBase class.
class MountVertexLLamaCompSimImpl : public MountVertexLLamaCompSimBase
{
  public :
	MountVertexLLamaCompSimImpl(const ACE_CString& name, 
                               maci::ContainerServices* pCS);
	~MountVertexLLamaCompSimImpl();
    // =========== ACS Lifecycle Methods ======= 

    // \exception acsErrTypeLifeCycle::LifeCycleExImpl
    virtual void initialize();

    // \exception acsErrTypeLifeCycle::LifeCycleExImpl
    virtual void cleanUp();

  private:
	AMB::MountVertexLLamaHWSimImpl* device_m;
}; // class MountVertexLLamaCompSimImpl

#endif // MOUNTVERTEXLLAMACOMPSIMIMPL_H
