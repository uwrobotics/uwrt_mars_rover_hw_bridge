// AUTO-GENERATED FILE. DO NOT MODIFY

#include "uwrt_mars_rover_can_wrapper.h"

using namespace HWBRIDGE;

// --- Message packer function prototypes ---
static bool arm_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool arm_set_motion_data_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool arm_set_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool arm_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool arm_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool science_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool science_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool science_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool gimbal_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool gimbal_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool gimbal_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool pdb_set_led_matrix_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool pdb_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool pdb_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap);
static bool common_switch_can_bus_packer(uint8_t* raw, const CANMsgMap* msgMap);

// -- Message unpacker function prototypes ---
static bool arm_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_motion_data_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool science_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool science_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool science_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool gimbal_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool gimbal_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool gimbal_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool pdb_set_led_matrix_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool pdb_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool pdb_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool common_switch_can_bus_unpacker(uint8_t* raw, CANMsgMap* msgMap);

bool HWBRIDGE::packCANMsg(uint8_t* raw, CANID msgID, const CANMsgMap* msgMap) {
  switch (msgID) {
    case ARM_SET_CONTROL_MODE:
      return arm_set_control_mode_packer(raw, msgMap);
    case ARM_SET_MOTION_DATA:
      return arm_set_motion_data_packer(raw, msgMap);
    case ARM_SET_PID_PARAMS:
      return arm_set_pid_params_packer(raw, msgMap);
    case ARM_REPORT_FAULTS:
      return arm_report_faults_packer(raw, msgMap);
    case ARM_REPORT_ACK:
      return arm_report_ack_packer(raw, msgMap);
    case SCIENCE_SET_CONTROL_MODE:
      return science_set_control_mode_packer(raw, msgMap);
    case SCIENCE_REPORT_FAULTS:
      return science_report_faults_packer(raw, msgMap);
    case SCIENCE_REPORT_ACK:
      return science_report_ack_packer(raw, msgMap);
    case GIMBAL_SET_CONTROL_MODE:
      return gimbal_set_control_mode_packer(raw, msgMap);
    case GIMBAL_REPORT_FAULTS:
      return gimbal_report_faults_packer(raw, msgMap);
    case GIMBAL_REPORT_ACK:
      return gimbal_report_ack_packer(raw, msgMap);
    case PDB_SET_LED_MATRIX:
      return pdb_set_led_matrix_packer(raw, msgMap);
    case PDB_REPORT_FAULTS:
      return pdb_report_faults_packer(raw, msgMap);
    case PDB_REPORT_ACK:
      return pdb_report_ack_packer(raw, msgMap);
    case COMMON_SWITCH_CAN_BUS:
      return common_switch_can_bus_packer(raw, msgMap);

    default:
      return false;
  }
}

bool HWBRIDGE::unpackCANMsg(uint8_t* raw, CANID msgID, CANMsgMap* msgMap) {
  switch (msgID) {
    case ARM_SET_CONTROL_MODE:
      return arm_set_control_mode_unpacker(raw, msgMap);
    case ARM_SET_MOTION_DATA:
      return arm_set_motion_data_unpacker(raw, msgMap);
    case ARM_SET_PID_PARAMS:
      return arm_set_pid_params_unpacker(raw, msgMap);
    case ARM_REPORT_FAULTS:
      return arm_report_faults_unpacker(raw, msgMap);
    case ARM_REPORT_ACK:
      return arm_report_ack_unpacker(raw, msgMap);
    case SCIENCE_SET_CONTROL_MODE:
      return science_set_control_mode_unpacker(raw, msgMap);
    case SCIENCE_REPORT_FAULTS:
      return science_report_faults_unpacker(raw, msgMap);
    case SCIENCE_REPORT_ACK:
      return science_report_ack_unpacker(raw, msgMap);
    case GIMBAL_SET_CONTROL_MODE:
      return gimbal_set_control_mode_unpacker(raw, msgMap);
    case GIMBAL_REPORT_FAULTS:
      return gimbal_report_faults_unpacker(raw, msgMap);
    case GIMBAL_REPORT_ACK:
      return gimbal_report_ack_unpacker(raw, msgMap);
    case PDB_SET_LED_MATRIX:
      return pdb_set_led_matrix_unpacker(raw, msgMap);
    case PDB_REPORT_FAULTS:
      return pdb_report_faults_unpacker(raw, msgMap);
    case PDB_REPORT_ACK:
      return pdb_report_ack_unpacker(raw, msgMap);
    case COMMON_SWITCH_CAN_BUS:
      return common_switch_can_bus_unpacker(raw, msgMap);

    default:
      return false;
  }
}

// ARM_setControlMode message packer
bool arm_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = ARM_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_arm_set_control_mode_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case ARM_TURNTABLE_CONTROL_MODE:
          msgStruct.arm_turntable_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_is_in_range(
              msgStruct.arm_turntable_control_mode);
          break;

        case ARM_SHOULDER_CONTROL_MODE:
          msgStruct.arm_shoulder_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_is_in_range(
              msgStruct.arm_shoulder_control_mode);
          break;

        case ARM_ELBOW_CONTROL_MODE:
          msgStruct.arm_elbow_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_is_in_range(
              msgStruct.arm_elbow_control_mode);
          break;

        case ARM_LEFT_WRIST_CONTROL_MODE:
          msgStruct.arm_left_wrist_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_is_in_range(
              msgStruct.arm_left_wrist_control_mode);
          break;

        case ARM_RIGHT_WRIST_CONTROL_MODE:
          msgStruct.arm_right_wrist_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_is_in_range(
              msgStruct.arm_right_wrist_control_mode);
          break;

        case ARM_CLAW_CONTROL_MODE:
          msgStruct.arm_claw_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_is_in_range(
              msgStruct.arm_claw_control_mode);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_control_mode_pack(raw, &msgStruct,
                                                              UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_LENGTH);
  }
  return success;
}

// ARM_setControlMode message unpacker
bool arm_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = ARM_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_arm_set_control_mode_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_control_mode_unpack(&msgStruct, raw,
                                                             UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case ARM_TURNTABLE_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_decode(
                                     msgStruct.arm_turntable_control_mode));
          break;

        case ARM_SHOULDER_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_decode(
                                     msgStruct.arm_shoulder_control_mode));
          break;

        case ARM_ELBOW_CONTROL_MODE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_decode(msgStruct.arm_elbow_control_mode));
          break;

        case ARM_LEFT_WRIST_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_decode(
                                     msgStruct.arm_left_wrist_control_mode));
          break;

        case ARM_RIGHT_WRIST_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_decode(
                                     msgStruct.arm_right_wrist_control_mode));
          break;

        case ARM_CLAW_CONTROL_MODE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_decode(msgStruct.arm_claw_control_mode));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setMotionData message packer
bool arm_set_motion_data_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = ARM_SET_MOTION_DATA;
  struct uwrt_mars_rover_can_arm_set_motion_data_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case ARM_TURNTABLE_MOTION_DATA:
          msgStruct.arm_turntable_motion_data =
              uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_is_in_range(
              msgStruct.arm_turntable_motion_data);
          break;

        case ARM_SHOULDER_MOTION_DATA:
          msgStruct.arm_shoulder_motion_data =
              uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_is_in_range(
              msgStruct.arm_shoulder_motion_data);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_motion_data_pack(raw, &msgStruct,
                                                             UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_LENGTH);
  }
  return success;
}

// ARM_setMotionData message unpacker
bool arm_set_motion_data_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = ARM_SET_MOTION_DATA;
  struct uwrt_mars_rover_can_arm_set_motion_data_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_motion_data_unpack(&msgStruct, raw,
                                                            UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case ARM_TURNTABLE_MOTION_DATA:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_decode(
                                     msgStruct.arm_turntable_motion_data));
          break;

        case ARM_SHOULDER_MOTION_DATA:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_decode(
                                     msgStruct.arm_shoulder_motion_data));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setPIDParams message packer
bool arm_set_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = ARM_SET_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case ARM_JOINT_ID:
          msgStruct.arm_joint_id = uwrt_mars_rover_can_arm_set_pid_params_arm_joint_id_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_pid_params_arm_joint_id_is_in_range(msgStruct.arm_joint_id);
          break;

        case ARM_PID_TUNING_MODE:
          msgStruct.arm_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_tuning_mode_encode(signalValue);
          success &=
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_tuning_mode_is_in_range(msgStruct.arm_pid_tuning_mode);
          break;

        case ARM_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_proportional_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_pid_params_arm_pid_proportional_gain_is_in_range(
              msgStruct.arm_pid_proportional_gain);
          break;

        case ARM_PID_INTEGRAL_GAIN:
          msgStruct.arm_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_integral_gain_encode(signalValue);
          success &=
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_integral_gain_is_in_range(msgStruct.arm_pid_integral_gain);
          break;

        case ARM_PID_DERIVATIVE_GAIN:
          msgStruct.arm_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_derivative_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_pid_params_arm_pid_derivative_gain_is_in_range(
              msgStruct.arm_pid_derivative_gain);
          break;

        case ARM_PID_DEADZONE:
          msgStruct.arm_pid_deadzone = uwrt_mars_rover_can_arm_set_pid_params_arm_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_pid_params_arm_pid_deadzone_is_in_range(msgStruct.arm_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &=
        (uwrt_mars_rover_can_arm_set_pid_params_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_PID_PARAMS_LENGTH) ==
         UWRT_MARS_ROVER_CAN_ARM_SET_PID_PARAMS_LENGTH);
  }
  return success;
}

// ARM_setPIDParams message unpacker
bool arm_set_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = ARM_SET_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_pid_params_unpack(&msgStruct, raw,
                                                           UWRT_MARS_ROVER_CAN_ARM_SET_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case ARM_JOINT_ID:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_pid_params_arm_joint_id_decode(msgStruct.arm_joint_id));
          break;

        case ARM_PID_TUNING_MODE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_tuning_mode_decode(msgStruct.arm_pid_tuning_mode));
          break;

        case ARM_PID_PROPORTIONAL_GAIN:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_set_pid_params_arm_pid_proportional_gain_decode(
                                     msgStruct.arm_pid_proportional_gain));
          break;

        case ARM_PID_INTEGRAL_GAIN:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_integral_gain_decode(msgStruct.arm_pid_integral_gain));
          break;

        case ARM_PID_DERIVATIVE_GAIN:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_derivative_gain_decode(msgStruct.arm_pid_derivative_gain));
          break;

        case ARM_PID_DEADZONE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_pid_params_arm_pid_deadzone_decode(msgStruct.arm_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_reportFaults message packer
bool arm_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = ARM_REPORT_FAULTS;
  struct uwrt_mars_rover_can_arm_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case ARM_TURNTABLE_ENCODER_STATE:
          msgStruct.arm_turntable_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_is_in_range(
              msgStruct.arm_turntable_encoder_state);
          break;

        case ARM_TURNTABLE_CURRENT_SENSOR_STATE:
          msgStruct.arm_turntable_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_is_in_range(
              msgStruct.arm_turntable_current_sensor_state);
          break;

        case ARM_SHOULDER_ENCODER_STATE:
          msgStruct.arm_shoulder_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_is_in_range(
              msgStruct.arm_shoulder_encoder_state);
          break;

        case ARM_SHOULDER_CURRENT_SENSOR_STATE:
          msgStruct.arm_shoulder_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_is_in_range(
              msgStruct.arm_shoulder_current_sensor_state);
          break;

        case ARM_ELBOW_ENCODER_STATE:
          msgStruct.arm_elbow_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_is_in_range(
              msgStruct.arm_elbow_encoder_state);
          break;

        case ARM_ELBOW_CURRENT_SENSOR_STATE:
          msgStruct.arm_elbow_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_is_in_range(
              msgStruct.arm_elbow_current_sensor_state);
          break;

        case ARM_LEFT_WRIST_ENCODER_STATE:
          msgStruct.arm_left_wrist_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_is_in_range(
              msgStruct.arm_left_wrist_encoder_state);
          break;

        case ARM_LEFT_WRIST_CURRENT_SENSOR_STATE:
          msgStruct.arm_left_wrist_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_is_in_range(
              msgStruct.arm_left_wrist_current_sensor_state);
          break;

        case ARM_RIGHT_WRIST_ENCODER_STATE:
          msgStruct.arm_right_wrist_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_is_in_range(
              msgStruct.arm_right_wrist_encoder_state);
          break;

        case ARM_RIGHT_WRIST_CURRENT_SENSOR_STATE:
          msgStruct.arm_right_wrist_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_is_in_range(
              msgStruct.arm_right_wrist_current_sensor_state);
          break;

        case ARM_CLAW_ENCODER_STATE:
          msgStruct.arm_claw_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_is_in_range(
              msgStruct.arm_claw_encoder_state);
          break;

        case ARM_CLAW_CURRENT_SENSOR_STATE:
          msgStruct.arm_claw_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_claw_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_claw_current_sensor_state_is_in_range(
              msgStruct.arm_claw_current_sensor_state);
          break;

        default:
          success = false;
          break;
      }
    }
    success &=
        (uwrt_mars_rover_can_arm_report_faults_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_REPORT_FAULTS_LENGTH) ==
         UWRT_MARS_ROVER_CAN_ARM_REPORT_FAULTS_LENGTH);
  }
  return success;
}

// ARM_reportFaults message unpacker
bool arm_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = ARM_REPORT_FAULTS;
  struct uwrt_mars_rover_can_arm_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_arm_report_faults_unpack(&msgStruct, raw,
                                                          UWRT_MARS_ROVER_CAN_ARM_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case ARM_TURNTABLE_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_decode(
                                     msgStruct.arm_turntable_encoder_state));
          break;

        case ARM_TURNTABLE_CURRENT_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_decode(
                                     msgStruct.arm_turntable_current_sensor_state));
          break;

        case ARM_SHOULDER_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_decode(
                                     msgStruct.arm_shoulder_encoder_state));
          break;

        case ARM_SHOULDER_CURRENT_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_decode(
                                     msgStruct.arm_shoulder_current_sensor_state));
          break;

        case ARM_ELBOW_ENCODER_STATE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_decode(msgStruct.arm_elbow_encoder_state));
          break;

        case ARM_ELBOW_CURRENT_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_decode(
                                     msgStruct.arm_elbow_current_sensor_state));
          break;

        case ARM_LEFT_WRIST_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_decode(
                                     msgStruct.arm_left_wrist_encoder_state));
          break;

        case ARM_LEFT_WRIST_CURRENT_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_decode(
                                     msgStruct.arm_left_wrist_current_sensor_state));
          break;

        case ARM_RIGHT_WRIST_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_decode(
                                     msgStruct.arm_right_wrist_encoder_state));
          break;

        case ARM_RIGHT_WRIST_CURRENT_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_decode(
                                     msgStruct.arm_right_wrist_current_sensor_state));
          break;

        case ARM_CLAW_ENCODER_STATE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_decode(msgStruct.arm_claw_encoder_state));
          break;

        case ARM_CLAW_CURRENT_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_faults_arm_claw_current_sensor_state_decode(
                                     msgStruct.arm_claw_current_sensor_state));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_reportACK message packer
bool arm_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = ARM_REPORT_ACK;
  struct uwrt_mars_rover_can_arm_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case ARM_ACK:
          msgStruct.arm_ack = uwrt_mars_rover_can_arm_report_ack_arm_ack_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_ack_arm_ack_is_in_range(msgStruct.arm_ack);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_report_ack_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_REPORT_ACK_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_REPORT_ACK_LENGTH);
  }
  return success;
}

// ARM_reportACK message unpacker
bool arm_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = ARM_REPORT_ACK;
  struct uwrt_mars_rover_can_arm_report_ack_t msgStruct;

  success =
      (uwrt_mars_rover_can_arm_report_ack_unpack(&msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case ARM_ACK:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_arm_report_ack_arm_ack_decode(msgStruct.arm_ack));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// SCIENCE_setControlMode message packer
bool science_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = SCIENCE_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_science_set_control_mode_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case SCIENCE_GENEVA_CONTROL_MODE:
          msgStruct.science_geneva_control_mode =
              uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_is_in_range(
              msgStruct.science_geneva_control_mode);
          break;

        case SCIENCE_ELEVATOR_CONTROL_MODE:
          msgStruct.science_elevator_control_mode =
              uwrt_mars_rover_can_science_set_control_mode_science_elevator_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_science_set_control_mode_science_elevator_control_mode_is_in_range(
              msgStruct.science_elevator_control_mode);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_science_set_control_mode_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_SCIENCE_SET_CONTROL_MODE_LENGTH) ==
                UWRT_MARS_ROVER_CAN_SCIENCE_SET_CONTROL_MODE_LENGTH);
  }
  return success;
}

// SCIENCE_setControlMode message unpacker
bool science_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = SCIENCE_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_science_set_control_mode_t msgStruct;

  success = (uwrt_mars_rover_can_science_set_control_mode_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_SCIENCE_SET_CONTROL_MODE_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case SCIENCE_GENEVA_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_decode(
                                     msgStruct.science_geneva_control_mode));
          break;

        case SCIENCE_ELEVATOR_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_science_set_control_mode_science_elevator_control_mode_decode(
                                     msgStruct.science_elevator_control_mode));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// SCIENCE_reportFaults message packer
bool science_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = SCIENCE_REPORT_FAULTS;
  struct uwrt_mars_rover_can_science_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case SCIENCE_GENEVA_ENCODER_STATE:
          msgStruct.science_geneva_encoder_state =
              uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_is_in_range(
              msgStruct.science_geneva_encoder_state);
          break;

        case SCIENCE_ELEVATOR_ENCODER_STATE:
          msgStruct.science_elevator_encoder_state =
              uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_is_in_range(
              msgStruct.science_elevator_encoder_state);
          break;

        case SCIENCE_MOISTURE_SENSOR_STATE:
          msgStruct.science_moisture_sensor_state =
              uwrt_mars_rover_can_science_report_faults_science_moisture_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_science_report_faults_science_moisture_sensor_state_is_in_range(
              msgStruct.science_moisture_sensor_state);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_science_report_faults_pack(raw, &msgStruct,
                                                               UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_FAULTS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_FAULTS_LENGTH);
  }
  return success;
}

// SCIENCE_reportFaults message unpacker
bool science_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = SCIENCE_REPORT_FAULTS;
  struct uwrt_mars_rover_can_science_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_science_report_faults_unpack(&msgStruct, raw,
                                                              UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case SCIENCE_GENEVA_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_decode(
                                     msgStruct.science_geneva_encoder_state));
          break;

        case SCIENCE_ELEVATOR_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_decode(
                                     msgStruct.science_elevator_encoder_state));
          break;

        case SCIENCE_MOISTURE_SENSOR_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_science_report_faults_science_moisture_sensor_state_decode(
                                     msgStruct.science_moisture_sensor_state));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// SCIENCE_reportACK message packer
bool science_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = SCIENCE_REPORT_ACK;
  struct uwrt_mars_rover_can_science_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case SCIENCE_ACK:
          msgStruct.science_ack = uwrt_mars_rover_can_science_report_ack_science_ack_encode(signalValue);
          success &= uwrt_mars_rover_can_science_report_ack_science_ack_is_in_range(msgStruct.science_ack);
          break;

        default:
          success = false;
          break;
      }
    }
    success &=
        (uwrt_mars_rover_can_science_report_ack_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_ACK_LENGTH) ==
         UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_ACK_LENGTH);
  }
  return success;
}

// SCIENCE_reportACK message unpacker
bool science_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = SCIENCE_REPORT_ACK;
  struct uwrt_mars_rover_can_science_report_ack_t msgStruct;

  success = (uwrt_mars_rover_can_science_report_ack_unpack(&msgStruct, raw,
                                                           UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case SCIENCE_ACK:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_science_report_ack_science_ack_decode(msgStruct.science_ack));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// GIMBAL_setControlMode message packer
bool gimbal_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = GIMBAL_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_gimbal_set_control_mode_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case GIMBAL_PAN_CONTROL_MODE:
          msgStruct.gimbal_pan_control_mode =
              uwrt_mars_rover_can_gimbal_set_control_mode_gimbal_pan_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_gimbal_set_control_mode_gimbal_pan_control_mode_is_in_range(
              msgStruct.gimbal_pan_control_mode);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_gimbal_set_control_mode_pack(raw, &msgStruct,
                                                                 UWRT_MARS_ROVER_CAN_GIMBAL_SET_CONTROL_MODE_LENGTH) ==
                UWRT_MARS_ROVER_CAN_GIMBAL_SET_CONTROL_MODE_LENGTH);
  }
  return success;
}

// GIMBAL_setControlMode message unpacker
bool gimbal_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = GIMBAL_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_gimbal_set_control_mode_t msgStruct;

  success = (uwrt_mars_rover_can_gimbal_set_control_mode_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_GIMBAL_SET_CONTROL_MODE_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case GIMBAL_PAN_CONTROL_MODE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_gimbal_set_control_mode_gimbal_pan_control_mode_decode(
                                     msgStruct.gimbal_pan_control_mode));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// GIMBAL_reportFaults message packer
bool gimbal_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = GIMBAL_REPORT_FAULTS;
  struct uwrt_mars_rover_can_gimbal_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case GIMBAL_PAN_ENCODER_STATE:
          msgStruct.gimbal_pan_encoder_state =
              uwrt_mars_rover_can_gimbal_report_faults_gimbal_pan_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_gimbal_report_faults_gimbal_pan_encoder_state_is_in_range(
              msgStruct.gimbal_pan_encoder_state);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_gimbal_report_faults_pack(raw, &msgStruct,
                                                              UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_FAULTS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_FAULTS_LENGTH);
  }
  return success;
}

// GIMBAL_reportFaults message unpacker
bool gimbal_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = GIMBAL_REPORT_FAULTS;
  struct uwrt_mars_rover_can_gimbal_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_gimbal_report_faults_unpack(&msgStruct, raw,
                                                             UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case GIMBAL_PAN_ENCODER_STATE:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_gimbal_report_faults_gimbal_pan_encoder_state_decode(
                                     msgStruct.gimbal_pan_encoder_state));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// GIMBAL_reportACK message packer
bool gimbal_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = GIMBAL_REPORT_ACK;
  struct uwrt_mars_rover_can_gimbal_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case GIMBAL_ACK:
          msgStruct.gimbal_ack = uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_encode(signalValue);
          success &= uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_is_in_range(msgStruct.gimbal_ack);
          break;

        default:
          success = false;
          break;
      }
    }
    success &=
        (uwrt_mars_rover_can_gimbal_report_ack_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_ACK_LENGTH) ==
         UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_ACK_LENGTH);
  }
  return success;
}

// GIMBAL_reportACK message unpacker
bool gimbal_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = GIMBAL_REPORT_ACK;
  struct uwrt_mars_rover_can_gimbal_report_ack_t msgStruct;

  success = (uwrt_mars_rover_can_gimbal_report_ack_unpack(&msgStruct, raw,
                                                          UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case GIMBAL_ACK:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_decode(msgStruct.gimbal_ack));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// PDB_setLEDMatrix message packer
bool pdb_set_led_matrix_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = PDB_SET_LED_MATRIX;
  struct uwrt_mars_rover_can_pdb_set_led_matrix_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case PDB_LED_MATRIX_STATE:
          msgStruct.pdb_led_matrix_state =
              uwrt_mars_rover_can_pdb_set_led_matrix_pdb_led_matrix_state_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_set_led_matrix_pdb_led_matrix_state_is_in_range(msgStruct.pdb_led_matrix_state);
          break;

        default:
          success = false;
          break;
      }
    }
    success &=
        (uwrt_mars_rover_can_pdb_set_led_matrix_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_PDB_SET_LED_MATRIX_LENGTH) ==
         UWRT_MARS_ROVER_CAN_PDB_SET_LED_MATRIX_LENGTH);
  }
  return success;
}

// PDB_setLEDMatrix message unpacker
bool pdb_set_led_matrix_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = PDB_SET_LED_MATRIX;
  struct uwrt_mars_rover_can_pdb_set_led_matrix_t msgStruct;

  success = (uwrt_mars_rover_can_pdb_set_led_matrix_unpack(&msgStruct, raw,
                                                           UWRT_MARS_ROVER_CAN_PDB_SET_LED_MATRIX_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case PDB_LED_MATRIX_STATE:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_set_led_matrix_pdb_led_matrix_state_decode(msgStruct.pdb_led_matrix_state));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// PDB_reportFaults message packer
bool pdb_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = PDB_REPORT_FAULTS;
  struct uwrt_mars_rover_can_pdb_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case PDB_JETSON_STATUS:
          msgStruct.pdb_jetson_status = uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_is_in_range(msgStruct.pdb_jetson_status);
          break;

        case PDB_ARM_POWER_STATUS:
          msgStruct.pdb_arm_power_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_is_in_range(msgStruct.pdb_arm_power_status);
          break;

        case PDB_SCIENCE_POWER_STATUS:
          msgStruct.pdb_science_power_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_is_in_range(
              msgStruct.pdb_science_power_status);
          break;

        case PDB_GIMBAL_POWER_STATUS:
          msgStruct.pdb_gimbal_power_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_is_in_range(
              msgStruct.pdb_gimbal_power_status);
          break;

        case PDB_VBAT_RAIL_STATUS:
          msgStruct.pdb_vbat_rail_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_is_in_range(msgStruct.pdb_vbat_rail_status);
          break;

        case PDB_17_V_RAIL_STATUS:
          msgStruct.pdb_17_v_rail_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_is_in_range(msgStruct.pdb_17_v_rail_status);
          break;

        case PDB_5_V_RAIL_STATUS:
          msgStruct.pdb_5_v_rail_status = uwrt_mars_rover_can_pdb_report_faults_pdb_5_v_rail_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_5_v_rail_status_is_in_range(msgStruct.pdb_5_v_rail_status);
          break;

        default:
          success = false;
          break;
      }
    }
    success &=
        (uwrt_mars_rover_can_pdb_report_faults_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_PDB_REPORT_FAULTS_LENGTH) ==
         UWRT_MARS_ROVER_CAN_PDB_REPORT_FAULTS_LENGTH);
  }
  return success;
}

// PDB_reportFaults message unpacker
bool pdb_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = PDB_REPORT_FAULTS;
  struct uwrt_mars_rover_can_pdb_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_pdb_report_faults_unpack(&msgStruct, raw,
                                                          UWRT_MARS_ROVER_CAN_PDB_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case PDB_JETSON_STATUS:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_decode(msgStruct.pdb_jetson_status));
          break;

        case PDB_ARM_POWER_STATUS:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_decode(msgStruct.pdb_arm_power_status));
          break;

        case PDB_SCIENCE_POWER_STATUS:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_decode(
                                     msgStruct.pdb_science_power_status));
          break;

        case PDB_GIMBAL_POWER_STATUS:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_decode(msgStruct.pdb_gimbal_power_status));
          break;

        case PDB_VBAT_RAIL_STATUS:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_decode(msgStruct.pdb_vbat_rail_status));
          break;

        case PDB_17_V_RAIL_STATUS:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_decode(msgStruct.pdb_17_v_rail_status));
          break;

        case PDB_5_V_RAIL_STATUS:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_5_v_rail_status_decode(msgStruct.pdb_5_v_rail_status));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// PDB_reportACK message packer
bool pdb_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = PDB_REPORT_ACK;
  struct uwrt_mars_rover_can_pdb_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case PDB_ACK:
          msgStruct.pdb_ack = uwrt_mars_rover_can_pdb_report_ack_pdb_ack_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_ack_pdb_ack_is_in_range(msgStruct.pdb_ack);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_pdb_report_ack_pack(raw, &msgStruct, UWRT_MARS_ROVER_CAN_PDB_REPORT_ACK_LENGTH) ==
                UWRT_MARS_ROVER_CAN_PDB_REPORT_ACK_LENGTH);
  }
  return success;
}

// PDB_reportACK message unpacker
bool pdb_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = PDB_REPORT_ACK;
  struct uwrt_mars_rover_can_pdb_report_ack_t msgStruct;

  success =
      (uwrt_mars_rover_can_pdb_report_ack_unpack(&msgStruct, raw, UWRT_MARS_ROVER_CAN_PDB_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case PDB_ACK:
          msgMap->setSignalValue(msgID, signalName,
                                 uwrt_mars_rover_can_pdb_report_ack_pdb_ack_decode(msgStruct.pdb_ack));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// COMMON_switchCANBus message packer
bool common_switch_can_bus_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success = true;
  CANID msgID  = COMMON_SWITCH_CAN_BUS;
  struct uwrt_mars_rover_can_common_switch_can_bus_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case COMMON_CAN_BUS_ID:
          msgStruct.common_can_bus_id = uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_encode(signalValue);
          success &=
              uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_is_in_range(msgStruct.common_can_bus_id);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_common_switch_can_bus_pack(raw, &msgStruct,
                                                               UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_LENGTH);
  }
  return success;
}

// COMMON_switchCANBus message unpacker
bool common_switch_can_bus_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = COMMON_SWITCH_CAN_BUS;
  struct uwrt_mars_rover_can_common_switch_can_bus_t msgStruct;

  success = (uwrt_mars_rover_can_common_switch_can_bus_unpack(&msgStruct, raw,
                                                              UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case COMMON_CAN_BUS_ID:
          msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_decode(msgStruct.common_can_bus_id));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}
