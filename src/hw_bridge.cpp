#include "hw_bridge.h"

#include <iomanip>
#include <sstream>

const std::string HWBRIDGE::ARM::PID::str(const tuningApiPayload& payload) {
  std::string actuator;
  switch (payload.actuatorID) {
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
  std::string control = payload.velocity ? "VELOCITY" : "POSITION";
  std::stringstream strm;
  strm << std::fixed << std::setprecision(4) << payload.value;
  std::string val = strm.str();
  return "{Value: " + val + ", Actuator: " + actuator + ", Control: " + control + "}";
}