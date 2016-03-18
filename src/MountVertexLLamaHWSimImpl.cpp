// @(#) $Id: MountVertexLLamaHWSimImpl.cpp 199113 2013-12-18 19:13:57Z rmarson $
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

#include "MountVertexLLamaHWSimImpl.h"
using namespace AMB;
//using namespace VERTEX;

MountVertexLLamaHWSimImpl::MountVertexLLamaHWSimImpl(node_t node, 
					   const std::vector<CAN::byte_t> &serialNumber,
					   int antenna,
					   SHARED_SIMULATOR::SharedSimulator_var ss)
    : MountVertexLLamaHWSimBase::MountVertexLLamaHWSimBase(node, serialNumber),
      ssi_m(NULL)
{
    ss_m = ss;
    if(!CORBA::is_nil(ss.in()))
        ssi_m = new SharedSimWrapper(antenna, ss_m);
    drive_m.setSharedSimWrapper(ssi_m);
}

MountVertexLLamaHWSimImpl::~MountVertexLLamaHWSimImpl() {
    if (!ssi_m) delete ssi_m;
}

void MountVertexLLamaHWSimImpl::start() {
    drive_m.start();
}

void MountVertexLLamaHWSimImpl::stop() {
    drive_m.stop();
}

void MountVertexLLamaHWSimImpl::setControlSetAls(const std::vector<CAN::byte_t>& data)  {
    const char* __METHOD__ = "MountVertexLLamaHWSimImpl::MountVertexLLamaHWSimImpl";
    ACS_TRACE(__METHOD__);
    MountVertexLLamaHWSimBase::setControlSetAls(data);
  
    std::vector<CAN::byte_t> data_tmp;
    std::vector<CAN::byte_t> status; 
    std::vector<CAN::byte_t> currentStatus; 
    currentStatus = getMonitorAlsStatus();
  
    unsigned char val;
    char byte0 = currentStatus[0];
    char byte1 = currentStatus[1];
  
    data_tmp = data;
  
    /* 
     * update state for monitorPoint_ALS_STATUS
     */
    val = AMB::dataToChar(data_tmp);
  
    bool az = static_cast<bool>(val & 0x1);
    bool el = static_cast<bool>((val & 0x2)>>1);
  
    if(az)
        byte0 = 0x10;
    if(el)
        byte1 = 0x10;
  
    status.push_back(byte0);
    status.push_back(byte1);
    setMonitorAlsStatus(status);	
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAcuModeRsp() const {

    std::vector<char> mode = drive_m.getACUMode();
    (state_m.find(monitorPoint_ACU_MODE_RSP)->second)->clear();
    for(unsigned short index=0; index<static_cast<unsigned short>(mode.size()); index++)
        (state_m.find(monitorPoint_ACU_MODE_RSP)->second)->push_back(static_cast<CAN::byte_t>(mode[index]));
    return MountVertexLLamaHWSimBase::getMonitorAcuModeRsp();
}

void MountVertexLLamaHWSimImpl::setControlAcuModeCmd(const std::vector<CAN::byte_t>& data)
{

    MountVertexLLamaHWSimBase::setControlAcuModeCmd(data);
    drive_m.setACUMode(static_cast<unsigned char>(data[0]));
}

void MountVertexLLamaHWSimImpl::setMonitorAcuModeRsp(const std::vector<CAN::byte_t>& data)
{
    MountVertexLLamaHWSimBase::setMonitorAcuModeRsp(data);
    std::vector<unsigned char> mode;
    for(unsigned short index=0; index<static_cast<unsigned short>(data.size()); index++)
        mode.push_back(static_cast<unsigned char>(data[index]));
    drive_m.setACUMode(mode[0]);
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzPosnRsp() const {
    double pos, vel;
    drive_m.getAzPsn(pos,vel);
    const long raw = azTransf_m.degreesToTurns(pos);
    unsigned long long position = static_cast<unsigned long long>(raw);
    position += (position << 32);
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, position);
    associate(monitorPoint_AZ_POSN_RSP, data);
    return MountVertexLLamaHWSimBase::getMonitorAzPosnRsp();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElPosnRsp() const {
    double pos, vel;
    drive_m.getElPsn(pos,vel);
    const long raw = elTransf_m.degreesToTurns(pos);
    unsigned long long position = static_cast<unsigned long long>(raw);
    position += (position << 32);
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, position);
    associate(monitorPoint_EL_POSN_RSP, data);
    return MountVertexLLamaHWSimBase::getMonitorElPosnRsp();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzEnc() const {
    double pos, vel;
    drive_m.getAzPsn(pos,vel);
    unsigned long raw = azTransf_m.degreesToEncoder(pos);
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_ENC, data);
    return MountVertexLLamaHWSimBase::getMonitorAzEnc();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElEnc() const {
    double pos, vel;
    drive_m.getElPsn(pos,vel);
    const long raw = elTransf_m.degreesToEncoder(pos);
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_ENC, data);
    return MountVertexLLamaHWSimBase::getMonitorElEnc();
}

void MountVertexLLamaHWSimImpl::setControlAzTrajCmd(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlAzTrajCmd(data);
    std::vector<CAN::byte_t> pos;
    std::vector<CAN::byte_t> vel;
    
    const unsigned short longSize = sizeof(long);
    for (unsigned short index=0; index <longSize; index++) {
        pos.push_back(data[index]);
        vel.push_back(data[index+longSize]);
    }
    long rawPos, rawVel;
    AMB::TypeConversion::dataToValue(pos, rawPos);
    AMB::TypeConversion::dataToValue(vel, rawVel);
    const double position = azTransf_m.turnsToDegrees(rawPos);
    const double velocity = azTransf_m.turnsToDegrees(rawVel);
    drive_m.setAzPsn(position, velocity);
}

void MountVertexLLamaHWSimImpl::setControlElTrajCmd(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlElTrajCmd(data);
    std::vector<CAN::byte_t> pos;
    std::vector<CAN::byte_t> vel;

    const unsigned short longSize = sizeof(long);
    for(unsigned short index=0; index <longSize; index++) {
        pos.push_back(data[index]);
        vel.push_back(data[index+longSize]);
    }
    long rawPos, rawVel;
    AMB::TypeConversion::dataToValue(pos, rawPos);
    AMB::TypeConversion::dataToValue(vel, rawVel);
    const double position = elTransf_m.turnsToDegrees(rawPos);
    const double velocity = elTransf_m.turnsToDegrees(rawVel);
    drive_m.setElPsn(position, velocity);
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzBrake() const {
    CAN::byte_t raw = static_cast<CAN::byte_t>(drive_m.Az->get_brake());
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_BRAKE, data);
    return MountVertexLLamaHWSimBase::getMonitorAzBrake();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElBrake() const {
    CAN::byte_t raw = static_cast<CAN::byte_t>(drive_m.El->get_brake());
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_BRAKE, data);
    return MountVertexLLamaHWSimBase::getMonitorElBrake();
}

void MountVertexLLamaHWSimImpl::setControlSetAzBrake(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzBrake(data);
    unsigned char raw;
    AMB::TypeConversion::dataToValue(data, raw);
    drive_m.Az->set_brake(static_cast<AZEL_Brake_t>(raw));
}

void MountVertexLLamaHWSimImpl::setControlSetElBrake(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElBrake(data);
    unsigned char raw;
    AMB::TypeConversion::dataToValue(data, raw);
    drive_m.El->set_brake(static_cast<AZEL_Brake_t>(raw));
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff0() const {
    double raw = drive_m.Az->servo_coefficients[0];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_0, data); 
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff0();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff1() const {
    double raw = drive_m.Az->servo_coefficients[1];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_1, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff1();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff2() const {
    double raw = drive_m.Az->servo_coefficients[2];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_2, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff2();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff3() const {
    double raw = drive_m.Az->servo_coefficients[3];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_3, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff3();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff4() const {
    double raw = drive_m.Az->servo_coefficients[4];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_4, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff4();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff5() const {
    double raw = drive_m.Az->servo_coefficients[5];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_5, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff5();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff6() const {
    double raw = drive_m.Az->servo_coefficients[6];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_6, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff6();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff7() const {
    double raw = drive_m.Az->servo_coefficients[7];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_7, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff7();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff8() const {
    double raw = drive_m.Az->servo_coefficients[8];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_8, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff8();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeff9() const {
    double raw = drive_m.Az->servo_coefficients[9];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_9, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeff9();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeffA() const {
    double raw = drive_m.Az->servo_coefficients[10];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_A,data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeffA();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeffB() const {
    double raw = drive_m.Az->servo_coefficients[11];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_B, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeffB();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorAzServoCoeffC() const {
    double raw = drive_m.Az->servo_coefficients[12];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_AZ_SERVO_COEFF_C, data);
    return MountVertexLLamaHWSimBase::getMonitorAzServoCoeffC();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff0() const {
    double raw = drive_m.El->servo_coefficients[0];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_0, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff0();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff1() const {
    double raw = drive_m.El->servo_coefficients[1];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_1, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff1();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff2() const {
    double raw = drive_m.El->servo_coefficients[2];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_2, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff2();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff3() const {
    double raw = drive_m.El->servo_coefficients[3];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_3, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff3();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff4() const {
    double raw = drive_m.El->servo_coefficients[4];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_4, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff4();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff5() const {
    double raw = drive_m.El->servo_coefficients[5];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_5, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff5();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff6() const {
    double raw = drive_m.El->servo_coefficients[6];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_6, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff6();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff7() const {
    double raw = drive_m.El->servo_coefficients[7];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_7, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff7();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff8() const {
    double raw = drive_m.El->servo_coefficients[8];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_8, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff8();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeff9() const {
    double raw = drive_m.El->servo_coefficients[9];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_9, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeff9();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeffA() const {
    double raw = drive_m.El->servo_coefficients[10];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_A, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeffA();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeffB() const {
    double raw = drive_m.El->servo_coefficients[11];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_B, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeffB();
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorElServoCoeffC() const {
    double raw = drive_m.El->servo_coefficients[12];
    std::vector<CAN::byte_t> data;
    AMB::TypeConversion::valueToData(data, raw);
    associate(monitorPoint_EL_SERVO_COEFF_C, data);
    return MountVertexLLamaHWSimBase::getMonitorElServoCoeffC();
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff0(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff0(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[0] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff1(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff1(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[1] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff2(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff2(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[2] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff3(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff3(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[3] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff4(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff4(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[4] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff5(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff5(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[5] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff6(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff6(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[6] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff7(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff7(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[7] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff8(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff8(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[8] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeff9(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeff9(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[9] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeffA(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeffA(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[10] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeffB(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeffB(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[11] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoCoeffC(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoCoeffC(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.Az->servo_coefficients[12] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff0(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff0(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[0] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff1(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff1(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[1] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff2(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff2(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[2] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff3(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff3(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[3] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff4(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff4(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[4] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff5(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff5(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[5] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff6(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff6(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[6] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff7(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff7(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[7] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff8(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff8(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[8] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeff9(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeff9(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[9] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeffA(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeffA(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[10] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeffB(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeffB(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[11] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetElServoCoeffC(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoCoeffC(data);
    double value;
    AMB::TypeConversion::dataToValue(data,value);
    drive_m.El->servo_coefficients[12] = value;
}

void MountVertexLLamaHWSimImpl::setControlSetAzServoDefault(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetAzServoDefault(data);
    drive_m.Az->set_servo_defaults();
}

void MountVertexLLamaHWSimImpl::setControlSetElServoDefault(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetElServoDefault(data);
    drive_m.El->set_servo_defaults();
}

void MountVertexLLamaHWSimImpl::setControlSetStowPin(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetStowPin(data);  
    CAN::byte_t azStowPin = data[0];
    CAN::byte_t elStowPin = data[1];

    drive_m.Az->set_stow_pin(static_cast<Stow_Pin_t>(azStowPin));
    drive_m.El->set_stow_pin(static_cast<Stow_Pin_t>(elStowPin));
}

void MountVertexLLamaHWSimImpl::setControlSetMetrMode(const std::vector<CAN::byte_t>& data) {
    MountVertexLLamaHWSimBase::setControlSetMetrMode(data);
    associate(monitorPoint_METR_MODE, data);
}

std::vector<CAN::byte_t> MountVertexLLamaHWSimImpl::getMonitorStowPin() const {
    std::vector<CAN::byte_t> data;
    CAN::byte_t azStowPin = static_cast<CAN::byte_t>(drive_m.Az->get_stow_pin());
    CAN::byte_t elStowPin = static_cast<CAN::byte_t>(drive_m.El->get_stow_pin());
    data.push_back(azStowPin);
    data.push_back(elStowPin);
    associate(monitorPoint_STOW_PIN, data);
    return MountVertexLLamaHWSimBase::getMonitorStowPin();
}

void AMB::MountVertexLLamaHWSimImpl::setControlSetMetrCoeff0(
                                                        const std::vector< CAN::byte_t >& data) {
    AMB::MountVertexLLamaHWSimBase::setControlSetMetrCoeff0(data);
    associate(monitorPoint_METR_COEFF_0, data);
}

void AMB::MountVertexLLamaHWSimImpl::setControlSetMetrCoeff1(
                                                        const std::vector< CAN::byte_t >& data) {
    AMB::MountVertexLLamaHWSimBase::setControlSetMetrCoeff0(data);
    associate(monitorPoint_METR_COEFF_1, data);
}
