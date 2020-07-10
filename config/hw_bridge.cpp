#include "hw_bridge.h"

std::string ARM::ACTUATOR::stringifyActuatorID(ARM::ACTUATOR::actuatorID_t actuator) {
  switch (actuator) {
    case (ARM::ACTUATOR::TURNTABLE):
      return "TURNTABLE";
    case (ARM::ACTUATOR::SHOULDER):
      return "SHOULDER";
    case (ARM::ACTUATOR::ELBOW):
      return "ELBOW";
    case (ARM::ACTUATOR::WRISTLEFT):
      return "WRISTLEFT";
    case (ARM::ACTUATOR::WRISTRIGHT):
      return "WRISTRIGHT";
    case (ARM::ACTUATOR::CLAW):
      return "CLAW";
    default:
      return "ERROR";
  }
}

std::string ARM::PID::stringifyParam(ARM::PID::parameter_t param) {
  switch (param) {
    case (ARM::PID::P):
      return "P";
    case (ARM::PID::I):
      return "I";
    case (ARM::PID::D):
      return "D";
    case (ARM::PID::DEADZONE):
      return "DEADZONE";
    case (ARM::PID::BIAS):
      return "BIAS";
    default:
      return "ERROR";
  }
}

std::string ARM::PID::stringifyVelPos(bool vel_pos) {
  return vel_pos ? "velocity" : "position";
}