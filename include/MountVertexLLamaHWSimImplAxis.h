// @(#) $Id: MountVertexLLamaHWSimImplAxis.h 192600 2013-07-18 17:18:34Z rmarson $
//
// Copyright (C) 2001
// Associated Universities, Inc. Washington DC, USA.
//
// Produced for the ALMA project
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Library General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option) any
// later version.
//
// This library is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU Library General Public License for more
// details.
//
// You should have received a copy of the GNU Library General Public License
// along with this library; if not, write to the Free Software Foundation, Inc.,
// 675 Massachusetts Ave, Cambridge, MA 02139, USA.  Correspondence concerning
// ALMA should be addressed as follows:
//
// Internet email: alma-sw-admin@nrao.edu

#ifndef MountVertexLLamaHWSimImplAxis_H
#define MountVertexLLamaHWSimImplAxis_H 

#include "AMBSimACUbase.h"
#include "Axis.h"

/*
 * MountVertexLLamaHWSimImplAxis Class - track an axis motion
 */
namespace VERTEX 
{
  class MountVertexLLamaHWSimImplAxis : public ACUSim::Axis {
  public:
    MountVertexLLamaHWSimImplAxis();
  };
}; /* namespace */
#endif /* MountVertexLLamaHWSimImplAxis_H */
