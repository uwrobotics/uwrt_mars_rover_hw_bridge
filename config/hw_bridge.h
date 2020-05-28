#pragma once
#include <string>

namespace ROS_INTERFACE {
    namespace ARM {
        namespace API {
            struct __attribute__ ((__packed__)) payload_st{
                float value;
                bool velocity;
                uint8_t actuatorID;
            };
        }
        namespace ACTUATOR{
            enum actuatorID{
                TURNTABLE,
                SHOULDER,
                ELBOW,
                WRISTLEFT,
                WRISTRIGHT,
                CLAW
            };
            std::string stringifyActuatorID(actuatorID actuator);
        }
        namespace PID {
            enum parameter{
                P,
                I,
                D,
                DEADZONE,
                BIAS
            };
            std::string stringifyParam(parameter param);
            std::string stringifyVelPos(bool vel_pos);
        }
    }
}
