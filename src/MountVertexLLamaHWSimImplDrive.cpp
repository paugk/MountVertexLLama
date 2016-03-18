// @(#) $Id: MountVertexLLamaHWSimImplDrive.cpp 192600 2013-07-18 17:18:34Z rmarson $
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

#include <unistd.h>
#include "MountVertexLLamaHWSimImplAxis.h"
#include "MountVertexLLamaHWSimImplDrive.h"

#undef DEBUG

using namespace std;
using namespace VERTEX;
using namespace ACUSim;
//------------------------------------------------------------------------------

MountVertexLLamaHWSimImplDrive::MountVertexLLamaHWSimImplDrive()  
  : Drive::Drive(),
    ssi_m(NULL),
    ss_counter_m(0)
{
  initialize();
}

MountVertexLLamaHWSimImplDrive::~MountVertexLLamaHWSimImplDrive()  
{
  cleanUp();
}

void MountVertexLLamaHWSimImplDrive::initialize(){
  Az = new MountVertexLLamaHWSimImplAxis();
  El = new MountVertexLLamaHWSimImplAxis();
  Drive::initialize();
}

void MountVertexLLamaHWSimImplDrive::cleanUp(){
  Drive::cleanUp();
  if (Az != NULL) delete Az;
  if (El != NULL) delete El;
}

void MountVertexLLamaHWSimImplDrive::setSharedSimWrapper(SharedSimWrapper* ssi){
  ssi_m = ssi;
}

void MountVertexLLamaHWSimImplDrive::handler()
{
  Drive::handler();
  if(ss_counter_m == static_cast<int>(SS_ANTPOS_PERIOD_/TIME_UNIT))
    {
    handlerSS();
    ss_counter_m = 0;
    }
  else
    ss_counter_m++;
}

void MountVertexLLamaHWSimImplDrive::handlerSS()
{

  std::cout << "MountVertexLLamaHWSimImplDrive::handlerSS" << std::endl;
  // set azimuth and elevation in TELCAL SharedSimulator
  if (ssi_m && ssi_m->haveSimulatorRef()) {
    double az, azvel, azacc;
    double el, elvel, elacc;
    
    Az->get_track(az, azvel, azacc);
    El->get_track(el, elvel, elacc);
    
    ssi_m->setAntPosn(az, el);
  }
}
