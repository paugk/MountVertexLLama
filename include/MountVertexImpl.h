// @(#) $Id: MountVertexImpl.h 206078 2014-06-11 22:50:00Z rmarson $
//
// ALMA - Atacama Large Millimeter Array
// (c) European Southern Observatory, 2007 - 2008
// (c) Associated Universities Inc., 2009 - 2011, 2014
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

#ifndef MOUNTVERTEXIMPL_H
#define MOUNTVERTEXIMPL_H

#include <MountVertexBase.h>
#include <MountVertexS.h>
#include <vector>

class MountVertexImpl : public virtual POA_Control::MountVertex,
                        public MountVertexBase
{
public:
    
    MountVertexImpl(const ACE_CString& name, maci::ContainerServices* pCS);
    virtual ~MountVertexImpl();
    
    /// Set the metrology mode to a default value.
    virtual void hwInitializeAction();
    
    /// Set the metrology mode in the ACU. This just logs the metrology mode
    /// and calls the base class version.
    /// \exception ControlExceptions::CAMBErrorEx,
    /// \exception ControlExceptions::INACTErrorEx
    void SET_METR_MODE(const Control::LongSeq& world);
    
    /// Return, in each element in the vector, temperatures that can be used in
    /// the focus model computation.
    virtual std::vector<double> getSensorTemperaturesForFocusModel();

    // Override the position limits, in meters, for the subreflector
    virtual double subrefXLimit();
    virtual double subrefZLimit();

protected:
    /// See the base class for a description of this function
    virtual double timeToSlew(double dAz, double dEl, 
                              double maxAzSpeed, double maxElSpeed, 
                              double maxEl);

 private:
    // copy and assignment are not allowed
    MountVertexImpl(const MountVertexImpl&);
    MountVertexImpl& operator = (const MountVertexImpl&);

};

#endif // MOUNTVERTEXIMPL_H
