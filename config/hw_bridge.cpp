#include "hw_bridge.h"

std::string HW_BRIDGE::ARM::ACTUATOR::stringifyActuatorID(HW_BRIDGE::ARM::ACTUATOR::actuatorID_t actuator) {
  switch (actuator) {
    case (HW_BRIDGE::ARM::ACTUATOR::TURNTABLE):
      return "TURNTABLE";
    case (HW_BRIDGE::ARM::ACTUATOR::SHOULDER):
      return "SHOULDER";
    case (HW_BRIDGE::ARM::ACTUATOR::ELBOW):
      return "ELBOW";
    case (HW_BRIDGE::ARM::ACTUATOR::WRISTLEFT):
      return "WRISTLEFT";
    case (HW_BRIDGE::ARM::ACTUATOR::WRISTRIGHT):
      return "WRISTRIGHT";
    case (HW_BRIDGE::ARM::ACTUATOR::CLAW):
      return "CLAW";
    default:
      return "ERROR";
  }
}

std::string HW_BRIDGE::ARM::PID::stringifyParam(HW_BRIDGE::ARM::PID::parameter_t param) {
  switch (param) {
    case (HW_BRIDGE::ARM::PID::P):
      return "P";
    case (HW_BRIDGE::ARM::PID::I):
      return "I";
    case (HW_BRIDGE::ARM::PID::D):
      return "D";
    case (HW_BRIDGE::ARM::PID::DEADZONE):
      return "DEADZONE";
    case (HW_BRIDGE::ARM::PID::BIAS):
      return "BIAS";
    default:
      return "ERROR";
  }
}

std::string HW_BRIDGE::ARM::PID::stringifyVelPos(bool vel_pos) {
  return vel_pos ? "velocity" : "position";
}