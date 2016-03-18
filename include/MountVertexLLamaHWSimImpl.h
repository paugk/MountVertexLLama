// @(#) $Id: MountVertexLLamaHWSimImpl.h 199113 2013-12-18 19:13:57Z rmarson $
//
// ALMA - Atacama Large Millimeter Array
// (c) Copyright by ESO, 2008
// (c) Associated Universities Inc., 2009 - 2011, 2013
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

#ifndef MountVertexLLamaHWSimImpl_H
#define MountVertexLLamaHWSimImpl_H

#ifndef __cplusplus
#error This is a C++ include file and cannot be used from plain C
#endif

#include "MountVertexLLamaHWSimBase.h"
#include "MountVertexLLamaHWSimImplDrive.h"
#include <SharedSimWrapper.h>
#include <SharedSimulatorC.h>


namespace AMB{
  class MountVertexLLamaHWSimImpl : public MountVertexLLamaHWSimBase
    {
      public :
	MountVertexLLamaHWSimImpl(node_t node, const std::vector<CAN::byte_t> &serialNumber, int antenna=0, SHARED_SIMULATOR::SharedSimulator_var ss=SHARED_SIMULATOR::SharedSimulator::_nil());
      ~MountVertexLLamaHWSimImpl();
      void start();
      void stop();
      SHARED_SIMULATOR::SharedSimulator_var getSharedSimulatorReference() { return ss_m;};
    protected:
      virtual void setControlSetAls(const std::vector<CAN::byte_t>& data);
      virtual std::vector<CAN::byte_t> getMonitorAcuModeRsp() const;
      virtual void setControlAcuModeCmd(const std::vector<CAN::byte_t>& data);
      virtual void setMonitorAcuModeRsp(const std::vector<CAN::byte_t>& data);
      virtual std::vector<CAN::byte_t> getMonitorAzPosnRsp() const;
      virtual std::vector<CAN::byte_t> getMonitorElPosnRsp() const;
      virtual std::vector<CAN::byte_t> getMonitorAzEnc() const;
      virtual std::vector<CAN::byte_t> getMonitorElEnc() const;
      virtual void setControlAzTrajCmd(const std::vector<CAN::byte_t>& data);
      virtual void setControlElTrajCmd(const std::vector<CAN::byte_t>& data);
      virtual std::vector<CAN::byte_t> getMonitorAzBrake() const;
      virtual std::vector<CAN::byte_t> getMonitorElBrake() const;
      virtual void setControlSetAzBrake(const std::vector<CAN::byte_t>& data);
      virtual void setControlSetElBrake(const std::vector<CAN::byte_t>& data);
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff0() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff1() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff2() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff3() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff4() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff5() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff6() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff7() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff8() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeff9() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeffA() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeffB() const;
      virtual std::vector<CAN::byte_t> getMonitorAzServoCoeffC() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff0() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff1() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff2() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff3() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff4() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff5() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff6() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff7() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff8() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeff9() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeffA() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeffB() const;
      virtual std::vector<CAN::byte_t> getMonitorElServoCoeffC() const;
      virtual void setControlSetAzServoCoeff0(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff1(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff2(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff3(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff4(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff5(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff6(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff7(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff8(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeff9(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeffA(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeffB(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoCoeffC(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetAzServoDefault(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff0(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff1(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff2(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff3(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff4(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff5(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff6(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff7(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff8(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeff9(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeffA(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeffB(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoCoeffC(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetElServoDefault(const std::vector<CAN::byte_t> &data);
      virtual void setControlSetStowPin(const std::vector<CAN::byte_t>& data);
      virtual void setControlSetMetrMode(const std::vector<CAN::byte_t>& data);
      virtual std::vector<CAN::byte_t> getMonitorStowPin() const;
	
      virtual void setControlSetMetrCoeff0(const std::vector< CAN::byte_t >& data);
      virtual void setControlSetMetrCoeff1(const std::vector< CAN::byte_t >& data);

      VERTEX::MountVertexLLamaHWSimImplDrive drive_m;

      SHARED_SIMULATOR::SharedSimulator_var ss_m;
      SharedSimWrapper* ssi_m;
    }; // class MountVertexLLamaHWSimImpl
} // namespace AMB

#endif // MountVertexLLamaHWSimImpl_H
