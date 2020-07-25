#include "hw_bridge.h"
#include <iomanip>
#include <sstream>

std::string HWBRIDGE::ARM::PID::tuningApiPayload::str() {
  std::string actuator;
  switch (actuatorID) {
    case (HWBRIDGE::ARM::ACTUATOR::TURNTABLE):
      actuator = "TURNTABLE";
      break;
    case (HWBRIDGE::ARM::ACTUATOR::SHOULDER):
      actuator = "SHOULDER";
      break;
    case (HWBRIDGE::ARM::ACTUATOR::ELBOW):
      actuator = "ELBOW";
      break;
    case (HWBRIDGE::ARM::ACTUATOR::WRISTLEFT):
      actuator = "WRISTLEFT";
      break;
    case (HWBRIDGE::ARM::ACTUATOR::WRISTRIGHT):
      actuator = "WRISTRIGHT";
      break;
    case (HWBRIDGE::ARM::ACTUATOR::CLAW):
      actuator = "CLAW";
      break;
    default:
      return "UNDEFINED";
  }
  std::string control = velocity ? "VELOCITY" : "POSITION";
  std::stringstream strm;
  strm << std::fixed << std::setprecision(4) << value;
  std::string val = strm.str();
  return "{Value: " + val + ", Actuator: " + actuator + ", Control: " + control + "}";
}