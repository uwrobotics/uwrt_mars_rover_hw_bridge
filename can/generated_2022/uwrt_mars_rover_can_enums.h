// AUTO-GENERATED FILE. DO NOT MODIFY. GENERATED BY
// scripts/generate_can_enums.py

#pragma once

namespace HWBRIDGE {

    constexpr uint32_t ROVER_CANBUS_FREQUENCY_HZ = 1000000;
    constexpr uint16_t ROVER_CANID_FILTER_MASK =
            0x7E0; // Use bits 5:10 for addressing, bits 0:4 for message type

    typedef double CANSignalValue_t; // Generalize all signal values as double

    typedef struct {
        uint8_t raw[8];
    } CANMsgData_t;

    enum class CANBUSID {
        CANBUS1,
        CANBUS2,
    };

    enum class CANFILTER {
        COMMON_FILTER = 0x720,
        NO_MESSAGES = 0x7E0,

    };

    enum class CANID {
        // Roboteq CAN IDs
        TEMP = 0x0,

        // Rover boards CAN IDs
        ODRIVE_HEARTBEAT_MESSAGE_AXIS0 = 0x1,
        ODRIVE_ESTOP_MESSAGE_AXIS0 = 0x2,
        ODRIVE_GET_MOTOR_ERROR_AXIS0 = 0x3,
        ODRIVE_GET_ENCODER_ERROR_AXIS0 = 0x4,
        ODRIVE_GET_SENSORLESS_ERROR_AXIS0 = 0x5,
        ODRIVE_SET_AXIS_NODE_ID_AXIS0 = 0x6,
        ODRIVE_SET_AXIS_REQUESTED_STATE_AXIS0 = 0x7,
        ODRIVE_GET_ENCODER_ESTIMATES_AXIS0 = 0x9,
        ODRIVE_GET_ENCODER_COUNT_AXIS0 = 0xA,
        ODRIVE_SET_CONTROLLER_MODES_AXIS0 = 0xB,
        ODRIVE_SET_INPUT_POS_AXIS0 = 0xC,
        ODRIVE_SET_INPUT_VEL_AXIS0 = 0xD,
        ODRIVE_SET_INPUT_TORQUE_AXIS0 = 0xE,
        ODRIVE_SET_LIMITS_AXIS0 = 0xF,
        ODRIVE_START_ANTICOGGING_AXIS0 = 0x10,
        ODRIVE_SET_TRAJ_VEL_LIMIT_AXIS0 = 0x11,
        ODRIVE_SET_TRAJ_ACCEL_LIMIT_AXIS0 = 0x12,
        ODRIVE_SET_TRAJ_INERTIA_AXIS0 = 0x13,
        ODRIVE_GET_IQ_AXIS0 = 0x14,
        ODRIVE_GET_SENSORLESS_ESTIMATES_AXIS0 = 0x15,
        ODRIVE_REBOOT_ODRIVE_AXIS0 = 0x16,
        ODRIVE_GET_VBUS_VOLTAGE_AXIS0 = 0x17,
        ODRIVE_CLEAR_ERRORS_AXIS0 = 0x18,
        ODRIVE_SET_LINEAR_COUNT_AXIS0 = 0x19,
        ODRIVE_SET_POSITION_GAIN_AXIS0 = 0x1A,
        ODRIVE_SET_VEL_GAIN_AXIS0 = 0x1B,
        ODRIVE_HEARTBEAT_MESSAGE_AXIS1 = 0x21,
        ODRIVE_ESTOP_MESSAGE_AXIS1 = 0x22,
        ODRIVE_GET_MOTOR_ERROR_AXIS1 = 0x23,
        ODRIVE_GET_ENCODER_ERROR_AXIS1 = 0x24,
        ODRIVE_GET_SENSORLESS_ERROR_AXIS1 = 0x25,
        ODRIVE_SET_AXIS_NODE_ID_AXIS1 = 0x26,
        ODRIVE_SET_AXIS_REQUESTED_STATE_AXIS1 = 0x27,
        ODRIVE_GET_ENCODER_ESTIMATES_AXIS1 = 0x29,
        ODRIVE_GET_ENCODER_COUNT_AXIS1 = 0x2A,
        ODRIVE_SET_CONTROLLER_MODES_AXIS1 = 0x2B,
        ODRIVE_SET_INPUT_POS_AXIS1 = 0x2C,
        ODRIVE_SET_INPUT_VEL_AXIS1 = 0x2D,
        ODRIVE_SET_INPUT_TORQUE_AXIS1 = 0x2E,
        ODRIVE_SET_LIMITS_AXIS1 = 0x2F,
        ODRIVE_START_ANTICOGGING_AXIS1 = 0x30,
        ODRIVE_SET_TRAJ_VEL_LIMIT_AXIS1 = 0x31,
        ODRIVE_SET_TRAJ_ACCEL_LIMIT_AXIS1 = 0x32,
        ODRIVE_SET_TRAJ_INERTIA_AXIS1 = 0x33,
        ODRIVE_GET_IQ_AXIS1 = 0x34,
        ODRIVE_GET_SENSORLESS_ESTIMATES_AXIS1 = 0x35,
        ODRIVE_REBOOT_ODRIVE_AXIS1 = 0x36,
        ODRIVE_GET_VBUS_VOLTAGE_AXIS1 = 0x37,
        ODRIVE_CLEAR_ERRORS_AXIS1 = 0x38,
        ODRIVE_SET_LINEAR_COUNT_AXIS1 = 0x39,
        ODRIVE_SET_POSITION_GAIN_AXIS1 = 0x3A,
        ODRIVE_SET_VEL_GAIN_AXIS1 = 0x3B,

    };

    enum class CANSIGNAL {
        ODRIVE_AXIS_CAN_NODE_ID,
        ODRIVE_AXIS_CAN_NODE_ID,
        ODRIVE_AXIS_CURRENT_STATE,
        ODRIVE_AXIS_CURRENT_STATE,
        ODRIVE_AXIS_ERROR,
        ODRIVE_AXIS_ERROR,
        ODRIVE_AXIS_REQUESTED_STATE,
        ODRIVE_AXIS_REQUESTED_STATE,
        ODRIVE_CONTROLLER_STATUS,
        ODRIVE_CONTROLLER_STATUS,
        ODRIVE_CONTROL_MODE,
        ODRIVE_CONTROL_MODE,
        ODRIVE_CURRENT_LIMIT,
        ODRIVE_CURRENT_LIMIT,
        ODRIVE_ENCODER_COUNTIN_CPR,
        ODRIVE_ENCODER_COUNTIN_CPR,
        ODRIVE_ENCODER_ERROR,
        ODRIVE_ENCODER_ERROR,
        ODRIVE_ENCODER_POS_ESTIMATE,
        ODRIVE_ENCODER_POS_ESTIMATE,
        ODRIVE_ENCODER_SHADOW_COUNT,
        ODRIVE_ENCODER_SHADOW_COUNT,
        ODRIVE_ENCODER_VEL_ESTIMATE,
        ODRIVE_ENCODER_VEL_ESTIMATE,
        ODRIVE_INPUT_MODE,
        ODRIVE_INPUT_MODE,
        ODRIVE_INPUT_POS,
        ODRIVE_INPUT_POS,
        ODRIVE_INPUT_TORQUE,
        ODRIVE_INPUT_TORQUE,
        ODRIVE_INPUT_VEL,
        ODRIVE_INPUT_VEL,
        ODRIVE_IQ_MEASURED,
        ODRIVE_IQ_MEASURED,
        ODRIVE_IQ_SETPOINT,
        ODRIVE_IQ_SETPOINT,
        ODRIVE_MOTOR_ERROR,
        ODRIVE_MOTOR_ERROR,
        ODRIVE_POSITION,
        ODRIVE_POSITION,
        ODRIVE_POS_GAIN,
        ODRIVE_POS_GAIN,
        ODRIVE_SENSORLESS_ERROR,
        ODRIVE_SENSORLESS_ERROR,
        ODRIVE_SENSORLESS_POS_ESTIMATE,
        ODRIVE_SENSORLESS_POS_ESTIMATE,
        ODRIVE_SENSORLESS_VEL_ESTIMATE,
        ODRIVE_SENSORLESS_VEL_ESTIMATE,
        ODRIVE_TORQUE_FF,
        ODRIVE_TORQUE_FF,
        ODRIVE_TORQUE_FF,
        ODRIVE_TORQUE_FF,
        ODRIVE_TRAJ_ACCEL_LIMIT,
        ODRIVE_TRAJ_ACCEL_LIMIT,
        ODRIVE_TRAJ_DECEL_LIMIT,
        ODRIVE_TRAJ_DECEL_LIMIT,
        ODRIVE_TRAJ_INERTIA,
        ODRIVE_TRAJ_INERTIA,
        ODRIVE_TRAJ_VEL_LIMIT,
        ODRIVE_TRAJ_VEL_LIMIT,
        ODRIVE_VBUS_VOLTAGE,
        ODRIVE_VBUS_VOLTAGE,
        ODRIVE_VELOCITY_LIMIT,
        ODRIVE_VELOCITY_LIMIT,
        ODRIVE_VEL_FF,
        ODRIVE_VEL_FF,
        ODRIVE_VEL_GAIN,
        ODRIVE_VEL_GAIN,
        ODRIVE_VEL_INTEGRATOR_GAIN,
        ODRIVE_VEL_INTEGRATOR_GAIN,

    };

    enum class ODRIVE_AXIS_CAN_NODE_ID_VALUES {
        ERROR_NONE = 0,

    };

    enum class ODRIVE_AXIS_CURRENT_STATE_VALUES {
        AXIS_STATE_UNDEFINED = 0,
        AXIS_STATE_IDLE = 1,
        AXIS_STATE_STARTUP_SEQUENCE = 2,
        AXIS_STATE_FULL_CALIBRATION_SEQUENCE = 3,
        AXIS_STATE_MOTOR_CALIBRATION = 4,
        AXIS_STATE_ENCODER_INDEX_SEARCH = 6,
        AXIS_STATE_ENCODER_OFFSET_CALIBRATION = 7,
        AXIS_STATE_CLOSED_LOOP_CONTROL = 8,
        AXIS_STATE_LOCKIN_SPIN = 9,
        AXIS_STATE_ENCODER_DIR_FIND = 10,
        AXIS_STATE_HOMING = 11,
        AXIS_STATE_ENCODER_HALL_POLARITY_CALIBRATION = 12,
        AXIS_STATE_ENCODER_HALL_PHASE_CALIBRATION = 13,

    };

    enum class ODRIVE_AXIS_ERROR_VALUES {
        ERROR_NONE = 0,
        ERROR_INVALID_STATE = 1,
        ERROR_WATCHDOG_TIMER_EXPIRED = 2048,
        ERROR_MIN_ENDSTOP_PRESSED = 4096,
        ERROR_MAX_ENDSTOP_PRESSED = 8192,
        ERROR_ESTOP_REQUESTED = 16384,
        ERROR_HOMING_WITHOUT_ENDSTOP = 131072,
        ERROR_OVER_TEMP = 262144,
        ERROR_UNKNOWN_POSITION = 524288,

    };

    enum class ODRIVE_AXIS_REQUESTED_STATE_VALUES {
        AXIS_STATE_UNDEFINED = 0,
        AXIS_STATE_IDLE = 1,
        AXIS_STATE_STARTUP_SEQUENCE = 2,
        AXIS_STATE_FULL_CALIBRATION_SEQUENCE = 3,
        AXIS_STATE_MOTOR_CALIBRATION = 4,
        AXIS_STATE_ENCODER_INDEX_SEARCH = 6,
        AXIS_STATE_ENCODER_OFFSET_CALIBRATION = 7,
        AXIS_STATE_CLOSED_LOOP_CONTROL = 8,
        AXIS_STATE_LOCKIN_SPIN = 9,
        AXIS_STATE_ENCODER_DIR_FIND = 10,
        AXIS_STATE_HOMING = 11,
        AXIS_STATE_ENCODER_HALL_POLARITY_CALIBRATION = 12,
        AXIS_STATE_ENCODER_HALL_PHASE_CALIBRATION = 13,

    };

    enum class ODRIVE_CONTROLLER_STATUS_VALUES {
        CONTROL_MODE_VOLTAGE_CONTROL = 0,
        CONTROL_MODE_TORQUE_CONTROL = 1,
        CONTROL_MODE_VELOCITY_CONTROL = 2,
        CONTROL_MODE_POSITION_CONTROL = 3,

    };

    enum class ODRIVE_CONTROL_MODE_VALUES {
        CONTROL_MODE_VOLTAGE_CONTROL = 0,
        CONTROL_MODE_TORQUE_CONTROL = 1,
        CONTROL_MODE_VELOCITY_CONTROL = 2,
        CONTROL_MODE_POSITION_CONTROL = 3,

    };

    enum class ODRIVE_ENCODER_ERROR_VALUES {
        ERROR_NONE = 0,
        ERROR_UNSTABLE_GAIN = 1,
        ERROR_CPR_POLEPAIRS_MISMATCH = 2,
        ERROR_NO_RESPONSE = 4,
        ERROR_UNSUPPORTED_ENCODER_MODE = 8,
        ERROR_ILLEGAL_HALL_STATE = 16,
        ERROR_INDEX_NOT_FOUND_YET = 32,
        ERROR_ABS_SPI_TIMEOUT = 64,
        ERROR_ABS_SPI_COM_FAIL = 128,
        ERROR_ABS_SPI_NOT_READY = 256,
        ERROR_HALL_NOT_CALIBRATED_YET = 512,

    };

    enum class ODRIVE_INPUT_MODE_VALUES {
        INPUT_MODE_INACTIVE = 0,
        INPUT_MODE_PASSTHROUGH = 1,
        INPUT_MODE_VEL_RAMP = 2,
        INPUT_MODE_POS_FILTER = 3,
        INPUT_MODE_MIX_CHANNELS = 4,
        INPUT_MODE_TRAP_TRAJ = 5,
        INPUT_MODE_TORQUE_RAMP = 6,
        INPUT_MODE_MIRROR = 7,
        INPUT_MODE_Tuning = 8,

    };

    enum class ODRIVE_MOTOR_ERROR_VALUES {
        ERROR_NONE = 0,
        ERROR_PHASE_RESISTANCE_OUT_OF_RANGE = 1,
        ERROR_PHASE_INDUCTANCE_OUT_OF_RANGE = 2,
        ERROR_DRV_FAULT = 8,
        ERROR_CONTROL_DEADLINE_MISSED = 16,
        ERROR_MODULATION_MAGNITUDE = 128,
        ERROR_CURRENT_SENSE_SATURATION = 1024,
        ERROR_CURRENT_LIMIT_VIOLATION = 4096,
        ERROR_MODULATION_IS_NAN = 65536,
        ERROR_MOTOR_THERMISTOR_OVER_TEMP = 131072,
        ERROR_FET_THERMISTOR_OVER_TEMP = 262144,
        ERROR_TIMER_UPDATE_MISSED = 524288,
        ERROR_CURRENT_MEASUREMENT_UNAVAILABLE = 1048576,
        ERROR_CONTROLLER_FAILED = 2097152,
        ERROR_I_BUS_OUT_OF_RANGE = 4194304,
        ERROR_BRAKE_RESISTOR_DISARMED = 8388608,
        ERROR_SYSTEM_LEVEL = 16777216,
        ERROR_BAD_TIMING = 33554432,
        ERROR_UNKNOWN_PHASE_ESTIMATE = 67108864,
        ERROR_UNKNOWN_PHASE_VEL = 134217728,
        ERROR_UNKNOWN_TORQUE = 268435456,
        ERROR_UNKNOWN_CURRENT_COMMAND = 536870912,
        ERROR_UNKNOWN_CURRENT_MEASUREMENT = 1073741824,
        ERROR_UNKNOWN_VBUS_VOLTAGE = 2147483648,
        ERROR_UNKNOWN_VOLTAGE_COMMAND = 4294967296,
        ERROR_UNKNOWN_GAINS = 8589934592,
        ERROR_CONTROLLER_INITIALIZING = 17179869184,
        ERROR_UNBALANCED_PHASES = 34359738368,

    };

    enum class ODRIVE_SENSORLESS_ERROR_VALUES {
        ERROR_NONE = 0,
        ERROR_UNSTABLE_GAIN = 1,
        ERROR_UNKNOWN_CURRENT_MEASUREMENT = 2,

    };

} // namespace HWBRIDGE
