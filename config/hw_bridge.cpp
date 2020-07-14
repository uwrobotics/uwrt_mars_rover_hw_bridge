#include "hw_bridge.h"

std::string HWBRIDGE::ARM::ACTUATOR::stringifyActuatorID(HWBRIDGE::ARM::ACTUATOR::actuatorID_t actuator) {
  switch (actuator) {
    case (HWBRIDGE::ARM::ACTUATOR::TURNTABLE):
      return "TURNTABLE";
    case (HWBRIDGE::ARM::ACTUATOR::SHOULDER):
      return "SHOULDER";
    case (HWBRIDGE::ARM::ACTUATOR::ELBOW):
      return "ELBOW";
    case (HWBRIDGE::ARM::ACTUATOR::WRISTLEFT):
      return "WRISTLEFT";
    case (HWBRIDGE::ARM::ACTUATOR::WRISTRIGHT):
      return "WRISTRIGHT";
    case (HWBRIDGE::ARM::ACTUATOR::CLAW):
      return "CLAW";
    default:
      return "ERROR";
  }
}

std::string HWBRIDGE::ARM::PID::stringifyParam(HWBRIDGE::ARM::PID::parameter_t param) {
  switch (param) {
    case (HWBRIDGE::ARM::PID::P):
      return "P";
    case (HWBRIDGE::ARM::PID::I):
      return "I";
    case (HWBRIDGE::ARM::PID::D):
      return "D";
    case (HWBRIDGE::ARM::PID::DEADZONE):
      return "DEADZONE";
    case (HWBRIDGE::ARM::PID::BIAS):
      return "BIAS";
    default:
      return "ERROR";
  }
}

std::string HWBRIDGE::ARM::PID::stringifyVelPos(bool vel_pos) {
  return vel_pos ? "velocity" : "position";
}