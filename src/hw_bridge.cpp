#include "hw_bridge.h"

#include <iomanip>
#include <sstream>

std::string HWBRIDGE::ARM::PID::str(const tuningApiPayload& payload) {
  std::string actuator;
  switch (payload.actuatorID) {
    case (HWBRIDGE::ARM::ACTUATORID::TURNTABLE):
      actuator = "TURNTABLE";
      break;
    case (HWBRIDGE::ARM::ACTUATORID::SHOULDER):
      actuator = "SHOULDER";
      break;
    case (HWBRIDGE::ARM::ACTUATORID::ELBOW):
      actuator = "ELBOW";
      break;
    case (HWBRIDGE::ARM::ACTUATORID::WRISTLEFT):
      actuator = "WRISTLEFT";
      break;
    case (HWBRIDGE::ARM::ACTUATORID::WRISTRIGHT):
      actuator = "WRISTRIGHT";
      break;
    case (HWBRIDGE::ARM::ACTUATORID::CLAW):
      actuator = "CLAW";
      break;
    default:
      return "UNDEFINED";
  }
  std::string control = payload.isVelocityPID ? "VELOCITY" : "POSITION";
  std::stringstream strm;
  strm << std::fixed << std::setprecision(4) << payload.value;
  std::string val = strm.str();
  return "{Actuator: " + actuator + ", Control: " + control + ", Value: " + val + "}";
}