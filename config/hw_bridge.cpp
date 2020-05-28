#include "hw_bridge.h"

std::string ROS_INTERFACE::ARM::ACTUATOR::stringifyActuatorID(actuatorID actuator) {
    switch(actuator) {
        case(TURNTABLE): return "TURNTABLE";
        case(SHOULDER): return"SHOULDER";
        case(ELBOW): return "ELBOW";
        case(WRISTLEFT): return "WRISTLEFT";
        case(WRISTRIGHT): return "WRISTRIGHT";
        case(CLAW) : return "CLAW";
        default: return "ERROR";
    }
}

std::string ROS_INTERFACE::ARM::PID::stringifyParam(parameter param) {
    switch(param) {
        case(P): return "P";
        case(I): return "I";
        case(D): return "D";
        case(DEADZONE): return "DEADZONE";
        case(BIAS): return "BIAS";
        default: return "ERROR";
    }
}

std::string stringifyVelPos(bool vel_pos) {
    return vel_pos ? "velocity" : "position";
}