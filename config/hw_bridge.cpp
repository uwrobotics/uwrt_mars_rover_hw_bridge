#include "hw_bridge.h"

std::string HW_BRIDGE::ARM::ACTUATOR::stringifyActuatorID(actuatorID_t actuator) {
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

std::string HW_BRIDGE::ARM::PID::stringifyParam(parameter_t param) {
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