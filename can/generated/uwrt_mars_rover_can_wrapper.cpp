// AUTO-GENERATED FILE. DO NOT MODIFY

#include "uwrt_mars_rover_can_wrapper.h"

using namespace HWBRIDGE;

// --- Message packer function prototypes ---
static bool arm_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_joint_position_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_joint_angular_velocity_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_joint_current_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_turntable_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_shoulder_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_elbow_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_left_wrist_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_right_wrist_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_set_claw_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_report_joint_position_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_report_joint_angular_velocity_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_report_joint_current_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool arm_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool science_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool science_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool science_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool gimbal_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool gimbal_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool gimbal_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool pdb_set_led_matrix_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool pdb_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool pdb_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool common_switch_can_bus_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool common_test_message1_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);
static bool common_test_message2_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len);

// -- Message unpacker function prototypes ---
static bool arm_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_joint_position_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_joint_angular_velocity_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_joint_current_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_turntable_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_shoulder_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_elbow_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_left_wrist_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_right_wrist_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_set_claw_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_report_joint_position_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_report_joint_angular_velocity_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool arm_report_joint_current_unpacker(uint8_t* raw, CANMsgMap* msgMap);
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
static bool common_test_message1_unpacker(uint8_t* raw, CANMsgMap* msgMap);
static bool common_test_message2_unpacker(uint8_t* raw, CANMsgMap* msgMap);

bool HWBRIDGE::packCANMsg(uint8_t* raw, CANID msgID, const CANMsgMap* msgMap, size_t& len) {
  switch (msgID) {
    case CANID::ARM_SET_CONTROL_MODE:
      return arm_set_control_mode_packer(raw, msgMap, len);
    case CANID::ARM_SET_JOINT_POSITION:
      return arm_set_joint_position_packer(raw, msgMap, len);
    case CANID::ARM_SET_JOINT_ANGULAR_VELOCITY:
      return arm_set_joint_angular_velocity_packer(raw, msgMap, len);
    case CANID::ARM_SET_JOINT_CURRENT:
      return arm_set_joint_current_packer(raw, msgMap, len);
    case CANID::ARM_SET_TURNTABLE_PID_PARAMS:
      return arm_set_turntable_pid_params_packer(raw, msgMap, len);
    case CANID::ARM_SET_SHOULDER_PID_PARAMS:
      return arm_set_shoulder_pid_params_packer(raw, msgMap, len);
    case CANID::ARM_SET_ELBOW_PID_PARAMS:
      return arm_set_elbow_pid_params_packer(raw, msgMap, len);
    case CANID::ARM_SET_LEFT_WRIST_PID_PARAMS:
      return arm_set_left_wrist_pid_params_packer(raw, msgMap, len);
    case CANID::ARM_SET_RIGHT_WRIST_PID_PARAMS:
      return arm_set_right_wrist_pid_params_packer(raw, msgMap, len);
    case CANID::ARM_SET_CLAW_PID_PARAMS:
      return arm_set_claw_pid_params_packer(raw, msgMap, len);
    case CANID::ARM_REPORT_JOINT_POSITION:
      return arm_report_joint_position_packer(raw, msgMap, len);
    case CANID::ARM_REPORT_JOINT_ANGULAR_VELOCITY:
      return arm_report_joint_angular_velocity_packer(raw, msgMap, len);
    case CANID::ARM_REPORT_JOINT_CURRENT:
      return arm_report_joint_current_packer(raw, msgMap, len);
    case CANID::ARM_REPORT_FAULTS:
      return arm_report_faults_packer(raw, msgMap, len);
    case CANID::ARM_REPORT_ACK:
      return arm_report_ack_packer(raw, msgMap, len);
    case CANID::SCIENCE_SET_CONTROL_MODE:
      return science_set_control_mode_packer(raw, msgMap, len);
    case CANID::SCIENCE_REPORT_FAULTS:
      return science_report_faults_packer(raw, msgMap, len);
    case CANID::SCIENCE_REPORT_ACK:
      return science_report_ack_packer(raw, msgMap, len);
    case CANID::GIMBAL_SET_CONTROL_MODE:
      return gimbal_set_control_mode_packer(raw, msgMap, len);
    case CANID::GIMBAL_REPORT_FAULTS:
      return gimbal_report_faults_packer(raw, msgMap, len);
    case CANID::GIMBAL_REPORT_ACK:
      return gimbal_report_ack_packer(raw, msgMap, len);
    case CANID::PDB_SET_LED_MATRIX:
      return pdb_set_led_matrix_packer(raw, msgMap, len);
    case CANID::PDB_REPORT_FAULTS:
      return pdb_report_faults_packer(raw, msgMap, len);
    case CANID::PDB_REPORT_ACK:
      return pdb_report_ack_packer(raw, msgMap, len);
    case CANID::COMMON_SWITCH_CAN_BUS:
      return common_switch_can_bus_packer(raw, msgMap, len);
    case CANID::COMMON_TEST_MESSAGE1:
      return common_test_message1_packer(raw, msgMap, len);
    case CANID::COMMON_TEST_MESSAGE2:
      return common_test_message2_packer(raw, msgMap, len);

    default:
      return false;
  }
}

bool HWBRIDGE::unpackCANMsg(uint8_t* raw, CANID msgID, CANMsgMap* msgMap) {
  switch (msgID) {
    case CANID::ARM_SET_CONTROL_MODE:
      return arm_set_control_mode_unpacker(raw, msgMap);
    case CANID::ARM_SET_JOINT_POSITION:
      return arm_set_joint_position_unpacker(raw, msgMap);
    case CANID::ARM_SET_JOINT_ANGULAR_VELOCITY:
      return arm_set_joint_angular_velocity_unpacker(raw, msgMap);
    case CANID::ARM_SET_JOINT_CURRENT:
      return arm_set_joint_current_unpacker(raw, msgMap);
    case CANID::ARM_SET_TURNTABLE_PID_PARAMS:
      return arm_set_turntable_pid_params_unpacker(raw, msgMap);
    case CANID::ARM_SET_SHOULDER_PID_PARAMS:
      return arm_set_shoulder_pid_params_unpacker(raw, msgMap);
    case CANID::ARM_SET_ELBOW_PID_PARAMS:
      return arm_set_elbow_pid_params_unpacker(raw, msgMap);
    case CANID::ARM_SET_LEFT_WRIST_PID_PARAMS:
      return arm_set_left_wrist_pid_params_unpacker(raw, msgMap);
    case CANID::ARM_SET_RIGHT_WRIST_PID_PARAMS:
      return arm_set_right_wrist_pid_params_unpacker(raw, msgMap);
    case CANID::ARM_SET_CLAW_PID_PARAMS:
      return arm_set_claw_pid_params_unpacker(raw, msgMap);
    case CANID::ARM_REPORT_JOINT_POSITION:
      return arm_report_joint_position_unpacker(raw, msgMap);
    case CANID::ARM_REPORT_JOINT_ANGULAR_VELOCITY:
      return arm_report_joint_angular_velocity_unpacker(raw, msgMap);
    case CANID::ARM_REPORT_JOINT_CURRENT:
      return arm_report_joint_current_unpacker(raw, msgMap);
    case CANID::ARM_REPORT_FAULTS:
      return arm_report_faults_unpacker(raw, msgMap);
    case CANID::ARM_REPORT_ACK:
      return arm_report_ack_unpacker(raw, msgMap);
    case CANID::SCIENCE_SET_CONTROL_MODE:
      return science_set_control_mode_unpacker(raw, msgMap);
    case CANID::SCIENCE_REPORT_FAULTS:
      return science_report_faults_unpacker(raw, msgMap);
    case CANID::SCIENCE_REPORT_ACK:
      return science_report_ack_unpacker(raw, msgMap);
    case CANID::GIMBAL_SET_CONTROL_MODE:
      return gimbal_set_control_mode_unpacker(raw, msgMap);
    case CANID::GIMBAL_REPORT_FAULTS:
      return gimbal_report_faults_unpacker(raw, msgMap);
    case CANID::GIMBAL_REPORT_ACK:
      return gimbal_report_ack_unpacker(raw, msgMap);
    case CANID::PDB_SET_LED_MATRIX:
      return pdb_set_led_matrix_unpacker(raw, msgMap);
    case CANID::PDB_REPORT_FAULTS:
      return pdb_report_faults_unpacker(raw, msgMap);
    case CANID::PDB_REPORT_ACK:
      return pdb_report_ack_unpacker(raw, msgMap);
    case CANID::COMMON_SWITCH_CAN_BUS:
      return common_switch_can_bus_unpacker(raw, msgMap);
    case CANID::COMMON_TEST_MESSAGE1:
      return common_test_message1_unpacker(raw, msgMap);
    case CANID::COMMON_TEST_MESSAGE2:
      return common_test_message2_unpacker(raw, msgMap);

    default:
      return false;
  }
}

// ARM_setControlMode message packer
bool arm_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_arm_set_control_mode_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_CONTROL_MODE:
          msgStruct.arm_turntable_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_is_in_range(
              msgStruct.arm_turntable_control_mode);
          break;

        case CANSIGNAL::ARM_SHOULDER_CONTROL_MODE:
          msgStruct.arm_shoulder_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_is_in_range(
              msgStruct.arm_shoulder_control_mode);
          break;

        case CANSIGNAL::ARM_ELBOW_CONTROL_MODE:
          msgStruct.arm_elbow_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_is_in_range(
              msgStruct.arm_elbow_control_mode);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_CONTROL_MODE:
          msgStruct.arm_left_wrist_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_is_in_range(
              msgStruct.arm_left_wrist_control_mode);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_CONTROL_MODE:
          msgStruct.arm_right_wrist_control_mode =
              uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_is_in_range(
              msgStruct.arm_right_wrist_control_mode);
          break;

        case CANSIGNAL::ARM_CLAW_CONTROL_MODE:
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
    len = UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_LENGTH;
  }
  return success;
}

// ARM_setControlMode message unpacker
bool arm_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_arm_set_control_mode_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_control_mode_unpack(&msgStruct, raw,
                                                             UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_CONTROL_MODE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_decode(
                                                msgStruct.arm_turntable_control_mode));
          break;

        case CANSIGNAL::ARM_SHOULDER_CONTROL_MODE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_decode(
                                                msgStruct.arm_shoulder_control_mode));
          break;

        case CANSIGNAL::ARM_ELBOW_CONTROL_MODE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_decode(msgStruct.arm_elbow_control_mode));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_CONTROL_MODE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_decode(
                                                msgStruct.arm_left_wrist_control_mode));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_CONTROL_MODE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_decode(
                                         msgStruct.arm_right_wrist_control_mode));
          break;

        case CANSIGNAL::ARM_CLAW_CONTROL_MODE:
          success &= msgMap->setSignalValue(
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

// ARM_setJointPosition message packer
bool arm_set_joint_position_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_JOINT_POSITION;
  struct uwrt_mars_rover_can_arm_set_joint_position_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_SET_POSITION:
          msgStruct.arm_turntable_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_turntable_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_turntable_set_position_is_in_range(
              msgStruct.arm_turntable_set_position);
          break;

        case CANSIGNAL::ARM_SHOULDER_SET_POSITION:
          msgStruct.arm_shoulder_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_shoulder_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_shoulder_set_position_is_in_range(
              msgStruct.arm_shoulder_set_position);
          break;

        case CANSIGNAL::ARM_ELBOW_SET_POSITION:
          msgStruct.arm_elbow_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_elbow_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_elbow_set_position_is_in_range(
              msgStruct.arm_elbow_set_position);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_SET_POSITION:
          msgStruct.arm_left_wrist_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_left_wrist_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_left_wrist_set_position_is_in_range(
              msgStruct.arm_left_wrist_set_position);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_SET_POSITION:
          msgStruct.arm_right_wrist_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_right_wrist_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_right_wrist_set_position_is_in_range(
              msgStruct.arm_right_wrist_set_position);
          break;

        case CANSIGNAL::ARM_CLAW_SET_POSITION:
          msgStruct.arm_claw_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_claw_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_claw_set_position_is_in_range(
              msgStruct.arm_claw_set_position);
          break;

        case CANSIGNAL::ARM_TOOL_TIP_SET_POSITION:
          msgStruct.arm_tool_tip_set_position =
              uwrt_mars_rover_can_arm_set_joint_position_arm_tool_tip_set_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_position_arm_tool_tip_set_position_is_in_range(
              msgStruct.arm_tool_tip_set_position);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_joint_position_pack(raw, &msgStruct,
                                                                UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_POSITION_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_POSITION_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_POSITION_LENGTH;
  }
  return success;
}

// ARM_setJointPosition message unpacker
bool arm_set_joint_position_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_JOINT_POSITION;
  struct uwrt_mars_rover_can_arm_set_joint_position_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_joint_position_unpack(&msgStruct, raw,
                                                               UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_POSITION_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_SET_POSITION:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_joint_position_arm_turntable_set_position_decode(
                                         msgStruct.arm_turntable_set_position));
          break;

        case CANSIGNAL::ARM_SHOULDER_SET_POSITION:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_position_arm_shoulder_set_position_decode(
                                                msgStruct.arm_shoulder_set_position));
          break;

        case CANSIGNAL::ARM_ELBOW_SET_POSITION:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_position_arm_elbow_set_position_decode(
                                                msgStruct.arm_elbow_set_position));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_SET_POSITION:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_joint_position_arm_left_wrist_set_position_decode(
                                         msgStruct.arm_left_wrist_set_position));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_SET_POSITION:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_joint_position_arm_right_wrist_set_position_decode(
                                         msgStruct.arm_right_wrist_set_position));
          break;

        case CANSIGNAL::ARM_CLAW_SET_POSITION:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_position_arm_claw_set_position_decode(msgStruct.arm_claw_set_position));
          break;

        case CANSIGNAL::ARM_TOOL_TIP_SET_POSITION:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_position_arm_tool_tip_set_position_decode(
                                                msgStruct.arm_tool_tip_set_position));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setJointAngularVelocity message packer
bool arm_set_joint_angular_velocity_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_JOINT_ANGULAR_VELOCITY;
  struct uwrt_mars_rover_can_arm_set_joint_angular_velocity_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_SET_TURNTABLE_ANGULAR_VELOCITY:
          msgStruct.arm_set_turntable_angular_velocity =
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_turntable_angular_velocity_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_turntable_angular_velocity_is_in_range(
              msgStruct.arm_set_turntable_angular_velocity);
          break;

        case CANSIGNAL::ARM_SET_SHOULDER_ANGULAR_VELOCITY:
          msgStruct.arm_set_shoulder_angular_velocity =
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_shoulder_angular_velocity_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_shoulder_angular_velocity_is_in_range(
              msgStruct.arm_set_shoulder_angular_velocity);
          break;

        case CANSIGNAL::ARM_SET_ELBOW_ANGULAR_VELOCITY:
          msgStruct.arm_set_elbow_angular_velocity =
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_elbow_angular_velocity_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_elbow_angular_velocity_is_in_range(
              msgStruct.arm_set_elbow_angular_velocity);
          break;

        case CANSIGNAL::ARM_SETLEFT_WRIST_ANGULAR_VELOCITY:
          msgStruct.arm_setleft_wrist_angular_velocity =
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setleft_wrist_angular_velocity_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setleft_wrist_angular_velocity_is_in_range(
              msgStruct.arm_setleft_wrist_angular_velocity);
          break;

        case CANSIGNAL::ARM_SETRIGHT_WRIST_ANGULAR_VELOCITY:
          msgStruct.arm_setright_wrist_angular_velocity =
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setright_wrist_angular_velocity_encode(
                  signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setright_wrist_angular_velocity_is_in_range(
              msgStruct.arm_setright_wrist_angular_velocity);
          break;

        case CANSIGNAL::ARM_SETCLAW_ANGULAR_VELOCITY:
          msgStruct.arm_setclaw_angular_velocity =
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setclaw_angular_velocity_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setclaw_angular_velocity_is_in_range(
              msgStruct.arm_setclaw_angular_velocity);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_joint_angular_velocity_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_ANGULAR_VELOCITY_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_ANGULAR_VELOCITY_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_ANGULAR_VELOCITY_LENGTH;
  }
  return success;
}

// ARM_setJointAngularVelocity message unpacker
bool arm_set_joint_angular_velocity_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_JOINT_ANGULAR_VELOCITY;
  struct uwrt_mars_rover_can_arm_set_joint_angular_velocity_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_joint_angular_velocity_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_ANGULAR_VELOCITY_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_SET_TURNTABLE_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_turntable_angular_velocity_decode(
                  msgStruct.arm_set_turntable_angular_velocity));
          break;

        case CANSIGNAL::ARM_SET_SHOULDER_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_shoulder_angular_velocity_decode(
                  msgStruct.arm_set_shoulder_angular_velocity));
          break;

        case CANSIGNAL::ARM_SET_ELBOW_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_set_elbow_angular_velocity_decode(
                  msgStruct.arm_set_elbow_angular_velocity));
          break;

        case CANSIGNAL::ARM_SETLEFT_WRIST_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setleft_wrist_angular_velocity_decode(
                  msgStruct.arm_setleft_wrist_angular_velocity));
          break;

        case CANSIGNAL::ARM_SETRIGHT_WRIST_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setright_wrist_angular_velocity_decode(
                  msgStruct.arm_setright_wrist_angular_velocity));
          break;

        case CANSIGNAL::ARM_SETCLAW_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_angular_velocity_arm_setclaw_angular_velocity_decode(
                  msgStruct.arm_setclaw_angular_velocity));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setJointCurrent message packer
bool arm_set_joint_current_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_JOINT_CURRENT;
  struct uwrt_mars_rover_can_arm_set_joint_current_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_SET_TURNTABLE_CURRENT:
          msgStruct.arm_set_turntable_current =
              uwrt_mars_rover_can_arm_set_joint_current_arm_set_turntable_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_current_arm_set_turntable_current_is_in_range(
              msgStruct.arm_set_turntable_current);
          break;

        case CANSIGNAL::ARM_SET_SHOULDER_CURRENT:
          msgStruct.arm_set_shoulder_current =
              uwrt_mars_rover_can_arm_set_joint_current_arm_set_shoulder_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_current_arm_set_shoulder_current_is_in_range(
              msgStruct.arm_set_shoulder_current);
          break;

        case CANSIGNAL::ARM_SET_ELBOW_CURRENT:
          msgStruct.arm_set_elbow_current =
              uwrt_mars_rover_can_arm_set_joint_current_arm_set_elbow_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_current_arm_set_elbow_current_is_in_range(
              msgStruct.arm_set_elbow_current);
          break;

        case CANSIGNAL::ARM_SETLEFT_WRIST_CURRENT:
          msgStruct.arm_setleft_wrist_current =
              uwrt_mars_rover_can_arm_set_joint_current_arm_setleft_wrist_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_current_arm_setleft_wrist_current_is_in_range(
              msgStruct.arm_setleft_wrist_current);
          break;

        case CANSIGNAL::ARM_SETRIGHT_WRIST_CURRENT:
          msgStruct.arm_setright_wrist_current =
              uwrt_mars_rover_can_arm_set_joint_current_arm_setright_wrist_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_joint_current_arm_setright_wrist_current_is_in_range(
              msgStruct.arm_setright_wrist_current);
          break;

        case CANSIGNAL::ARM_SETCLAW_CURRENT:
          msgStruct.arm_setclaw_current =
              uwrt_mars_rover_can_arm_set_joint_current_arm_setclaw_current_encode(signalValue);
          success &=
              uwrt_mars_rover_can_arm_set_joint_current_arm_setclaw_current_is_in_range(msgStruct.arm_setclaw_current);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_joint_current_pack(raw, &msgStruct,
                                                               UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_CURRENT_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_CURRENT_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_CURRENT_LENGTH;
  }
  return success;
}

// ARM_setJointCurrent message unpacker
bool arm_set_joint_current_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_JOINT_CURRENT;
  struct uwrt_mars_rover_can_arm_set_joint_current_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_joint_current_unpack(&msgStruct, raw,
                                                              UWRT_MARS_ROVER_CAN_ARM_SET_JOINT_CURRENT_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_SET_TURNTABLE_CURRENT:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_current_arm_set_turntable_current_decode(
                                                msgStruct.arm_set_turntable_current));
          break;

        case CANSIGNAL::ARM_SET_SHOULDER_CURRENT:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_current_arm_set_shoulder_current_decode(
                                                msgStruct.arm_set_shoulder_current));
          break;

        case CANSIGNAL::ARM_SET_ELBOW_CURRENT:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_current_arm_set_elbow_current_decode(msgStruct.arm_set_elbow_current));
          break;

        case CANSIGNAL::ARM_SETLEFT_WRIST_CURRENT:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_current_arm_setleft_wrist_current_decode(
                                                msgStruct.arm_setleft_wrist_current));
          break;

        case CANSIGNAL::ARM_SETRIGHT_WRIST_CURRENT:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_joint_current_arm_setright_wrist_current_decode(
                                                msgStruct.arm_setright_wrist_current));
          break;

        case CANSIGNAL::ARM_SETCLAW_CURRENT:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_joint_current_arm_setclaw_current_decode(msgStruct.arm_setclaw_current));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setTurntablePIDParams message packer
bool arm_set_turntable_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_TURNTABLE_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_turntable_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_PID_TUNING_MODE:
          msgStruct.arm_turntable_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_tuning_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_tuning_mode_is_in_range(
              msgStruct.arm_turntable_pid_tuning_mode);
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_turntable_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_proportional_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_proportional_gain_is_in_range(
              msgStruct.arm_turntable_pid_proportional_gain);
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_INTEGRAL_GAIN:
          msgStruct.arm_turntable_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_integral_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_integral_gain_is_in_range(
              msgStruct.arm_turntable_pid_integral_gain);
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_DERIVATIVE_GAIN:
          msgStruct.arm_turntable_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_derivative_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_derivative_gain_is_in_range(
              msgStruct.arm_turntable_pid_derivative_gain);
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_DEADZONE:
          msgStruct.arm_turntable_pid_deadzone =
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_deadzone_is_in_range(
              msgStruct.arm_turntable_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_turntable_pid_params_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_LENGTH;
  }
  return success;
}

// ARM_setTurntablePIDParams message unpacker
bool arm_set_turntable_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_TURNTABLE_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_turntable_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_turntable_pid_params_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_PID_TUNING_MODE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_tuning_mode_decode(
                  msgStruct.arm_turntable_pid_tuning_mode));
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_PROPORTIONAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_proportional_gain_decode(
                  msgStruct.arm_turntable_pid_proportional_gain));
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_INTEGRAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_integral_gain_decode(
                  msgStruct.arm_turntable_pid_integral_gain));
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_DERIVATIVE_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_derivative_gain_decode(
                  msgStruct.arm_turntable_pid_derivative_gain));
          break;

        case CANSIGNAL::ARM_TURNTABLE_PID_DEADZONE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_deadzone_decode(
                                         msgStruct.arm_turntable_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setShoulderPIDParams message packer
bool arm_set_shoulder_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_SHOULDER_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_shoulder_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_SHOULDER_PID_TUNING_MODE:
          msgStruct.arm_shoulder_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_tuning_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_tuning_mode_is_in_range(
              msgStruct.arm_shoulder_pid_tuning_mode);
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_shoulder_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_proportional_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_proportional_gain_is_in_range(
              msgStruct.arm_shoulder_pid_proportional_gain);
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_INTEGRAL_GAIN:
          msgStruct.arm_shoulder_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_integral_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_integral_gain_is_in_range(
              msgStruct.arm_shoulder_pid_integral_gain);
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_DERIVATIVE_GAIN:
          msgStruct.arm_shoulder_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_derivative_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_derivative_gain_is_in_range(
              msgStruct.arm_shoulder_pid_derivative_gain);
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_DEADZONE:
          msgStruct.arm_shoulder_pid_deadzone =
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_deadzone_is_in_range(
              msgStruct.arm_shoulder_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_shoulder_pid_params_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_SHOULDER_PID_PARAMS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_SHOULDER_PID_PARAMS_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_SHOULDER_PID_PARAMS_LENGTH;
  }
  return success;
}

// ARM_setShoulderPIDParams message unpacker
bool arm_set_shoulder_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_SHOULDER_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_shoulder_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_shoulder_pid_params_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_SHOULDER_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_SHOULDER_PID_TUNING_MODE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_tuning_mode_decode(
                  msgStruct.arm_shoulder_pid_tuning_mode));
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_PROPORTIONAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_proportional_gain_decode(
                  msgStruct.arm_shoulder_pid_proportional_gain));
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_INTEGRAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_integral_gain_decode(
                  msgStruct.arm_shoulder_pid_integral_gain));
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_DERIVATIVE_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_derivative_gain_decode(
                  msgStruct.arm_shoulder_pid_derivative_gain));
          break;

        case CANSIGNAL::ARM_SHOULDER_PID_DEADZONE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_shoulder_pid_params_arm_shoulder_pid_deadzone_decode(
                                         msgStruct.arm_shoulder_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setElbowPIDParams message packer
bool arm_set_elbow_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_ELBOW_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_elbow_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_ELBOW_PID_TUNING_MODE:
          msgStruct.arm_elbow_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_tuning_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_tuning_mode_is_in_range(
              msgStruct.arm_elbow_pid_tuning_mode);
          break;

        case CANSIGNAL::ARM_ELBOW_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_elbow_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_proportional_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_proportional_gain_is_in_range(
              msgStruct.arm_elbow_pid_proportional_gain);
          break;

        case CANSIGNAL::ARM_ELBOW_PID_INTEGRAL_GAIN:
          msgStruct.arm_elbow_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_integral_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_integral_gain_is_in_range(
              msgStruct.arm_elbow_pid_integral_gain);
          break;

        case CANSIGNAL::ARM_ELBOW_PID_DERIVATIVE_GAIN:
          msgStruct.arm_elbow_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_derivative_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_derivative_gain_is_in_range(
              msgStruct.arm_elbow_pid_derivative_gain);
          break;

        case CANSIGNAL::ARM_ELBOW_PID_DEADZONE:
          msgStruct.arm_elbow_pid_deadzone =
              uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_deadzone_is_in_range(
              msgStruct.arm_elbow_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_elbow_pid_params_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_ELBOW_PID_PARAMS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_ELBOW_PID_PARAMS_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_ELBOW_PID_PARAMS_LENGTH;
  }
  return success;
}

// ARM_setElbowPIDParams message unpacker
bool arm_set_elbow_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_ELBOW_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_elbow_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_elbow_pid_params_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_ELBOW_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_ELBOW_PID_TUNING_MODE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_tuning_mode_decode(
                                         msgStruct.arm_elbow_pid_tuning_mode));
          break;

        case CANSIGNAL::ARM_ELBOW_PID_PROPORTIONAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_proportional_gain_decode(
                  msgStruct.arm_elbow_pid_proportional_gain));
          break;

        case CANSIGNAL::ARM_ELBOW_PID_INTEGRAL_GAIN:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_integral_gain_decode(
                                         msgStruct.arm_elbow_pid_integral_gain));
          break;

        case CANSIGNAL::ARM_ELBOW_PID_DERIVATIVE_GAIN:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_derivative_gain_decode(
                                         msgStruct.arm_elbow_pid_derivative_gain));
          break;

        case CANSIGNAL::ARM_ELBOW_PID_DEADZONE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_elbow_pid_params_arm_elbow_pid_deadzone_decode(
                                                msgStruct.arm_elbow_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setLeftWristPIDParams message packer
bool arm_set_left_wrist_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_LEFT_WRIST_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_left_wrist_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_LEFT_WRIST_PID_TUNING_MODE:
          msgStruct.arm_left_wrist_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_tuning_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_tuning_mode_is_in_range(
              msgStruct.arm_left_wrist_pid_tuning_mode);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_left_wrist_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_proportional_gain_encode(
                  signalValue);
          success &= uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_proportional_gain_is_in_range(
              msgStruct.arm_left_wrist_pid_proportional_gain);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_INTEGRAL_GAIN:
          msgStruct.arm_left_wrist_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_integral_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_integral_gain_is_in_range(
              msgStruct.arm_left_wrist_pid_integral_gain);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_DERIVATIVE_GAIN:
          msgStruct.arm_left_wrist_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_derivative_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_derivative_gain_is_in_range(
              msgStruct.arm_left_wrist_pid_derivative_gain);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_DEADZONE:
          msgStruct.arm_left_wrist_pid_deadzone =
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_deadzone_is_in_range(
              msgStruct.arm_left_wrist_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_left_wrist_pid_params_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_LEFT_WRIST_PID_PARAMS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_LEFT_WRIST_PID_PARAMS_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_LEFT_WRIST_PID_PARAMS_LENGTH;
  }
  return success;
}

// ARM_setLeftWristPIDParams message unpacker
bool arm_set_left_wrist_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_LEFT_WRIST_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_left_wrist_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_left_wrist_pid_params_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_LEFT_WRIST_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_LEFT_WRIST_PID_TUNING_MODE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_tuning_mode_decode(
                  msgStruct.arm_left_wrist_pid_tuning_mode));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_PROPORTIONAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_proportional_gain_decode(
                  msgStruct.arm_left_wrist_pid_proportional_gain));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_INTEGRAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_integral_gain_decode(
                  msgStruct.arm_left_wrist_pid_integral_gain));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_DERIVATIVE_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_derivative_gain_decode(
                  msgStruct.arm_left_wrist_pid_derivative_gain));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_PID_DEADZONE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_left_wrist_pid_params_arm_left_wrist_pid_deadzone_decode(
                  msgStruct.arm_left_wrist_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setRightWristPIDParams message packer
bool arm_set_right_wrist_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_RIGHT_WRIST_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_right_wrist_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_RIGHT_WRIST_PID_TUNING_MODE:
          msgStruct.arm_right_wrist_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_tuning_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_tuning_mode_is_in_range(
              msgStruct.arm_right_wrist_pid_tuning_mode);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_right_wrist_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_proportional_gain_encode(
                  signalValue);
          success &=
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_proportional_gain_is_in_range(
                  msgStruct.arm_right_wrist_pid_proportional_gain);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_INTEGRAL_GAIN:
          msgStruct.arm_right_wrist_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_integral_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_integral_gain_is_in_range(
              msgStruct.arm_right_wrist_pid_integral_gain);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_DERIVATIVE_GAIN:
          msgStruct.arm_right_wrist_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_derivative_gain_encode(
                  signalValue);
          success &= uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_derivative_gain_is_in_range(
              msgStruct.arm_right_wrist_pid_derivative_gain);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_DEADZONE:
          msgStruct.arm_right_wrist_pid_deadzone =
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_deadzone_is_in_range(
              msgStruct.arm_right_wrist_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_right_wrist_pid_params_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_SET_RIGHT_WRIST_PID_PARAMS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_RIGHT_WRIST_PID_PARAMS_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_RIGHT_WRIST_PID_PARAMS_LENGTH;
  }
  return success;
}

// ARM_setRightWristPIDParams message unpacker
bool arm_set_right_wrist_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_RIGHT_WRIST_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_right_wrist_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_right_wrist_pid_params_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_RIGHT_WRIST_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_RIGHT_WRIST_PID_TUNING_MODE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_tuning_mode_decode(
                  msgStruct.arm_right_wrist_pid_tuning_mode));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_PROPORTIONAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_proportional_gain_decode(
                  msgStruct.arm_right_wrist_pid_proportional_gain));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_INTEGRAL_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_integral_gain_decode(
                  msgStruct.arm_right_wrist_pid_integral_gain));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_DERIVATIVE_GAIN:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_derivative_gain_decode(
                  msgStruct.arm_right_wrist_pid_derivative_gain));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_PID_DEADZONE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_set_right_wrist_pid_params_arm_right_wrist_pid_deadzone_decode(
                  msgStruct.arm_right_wrist_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_setClawPIDParams message packer
bool arm_set_claw_pid_params_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_SET_CLAW_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_claw_pid_params_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_CLAW_PID_TUNING_MODE:
          msgStruct.arm_claw_pid_tuning_mode =
              uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_tuning_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_tuning_mode_is_in_range(
              msgStruct.arm_claw_pid_tuning_mode);
          break;

        case CANSIGNAL::ARM_CLAW_PID_PROPORTIONAL_GAIN:
          msgStruct.arm_claw_pid_proportional_gain =
              uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_proportional_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_proportional_gain_is_in_range(
              msgStruct.arm_claw_pid_proportional_gain);
          break;

        case CANSIGNAL::ARM_CLAW_PID_INTEGRAL_GAIN:
          msgStruct.arm_claw_pid_integral_gain =
              uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_integral_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_integral_gain_is_in_range(
              msgStruct.arm_claw_pid_integral_gain);
          break;

        case CANSIGNAL::ARM_CLAW_PID_DERIVATIVE_GAIN:
          msgStruct.arm_claw_pid_derivative_gain =
              uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_derivative_gain_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_derivative_gain_is_in_range(
              msgStruct.arm_claw_pid_derivative_gain);
          break;

        case CANSIGNAL::ARM_CLAW_PID_DEADZONE:
          msgStruct.arm_claw_pid_deadzone =
              uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_deadzone_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_deadzone_is_in_range(
              msgStruct.arm_claw_pid_deadzone);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_set_claw_pid_params_pack(raw, &msgStruct,
                                                                 UWRT_MARS_ROVER_CAN_ARM_SET_CLAW_PID_PARAMS_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_SET_CLAW_PID_PARAMS_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_SET_CLAW_PID_PARAMS_LENGTH;
  }
  return success;
}

// ARM_setClawPIDParams message unpacker
bool arm_set_claw_pid_params_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_SET_CLAW_PID_PARAMS;
  struct uwrt_mars_rover_can_arm_set_claw_pid_params_t msgStruct;

  success = (uwrt_mars_rover_can_arm_set_claw_pid_params_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_SET_CLAW_PID_PARAMS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_CLAW_PID_TUNING_MODE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_tuning_mode_decode(
                                                msgStruct.arm_claw_pid_tuning_mode));
          break;

        case CANSIGNAL::ARM_CLAW_PID_PROPORTIONAL_GAIN:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_proportional_gain_decode(
                                         msgStruct.arm_claw_pid_proportional_gain));
          break;

        case CANSIGNAL::ARM_CLAW_PID_INTEGRAL_GAIN:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_integral_gain_decode(
                                         msgStruct.arm_claw_pid_integral_gain));
          break;

        case CANSIGNAL::ARM_CLAW_PID_DERIVATIVE_GAIN:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_derivative_gain_decode(
                                         msgStruct.arm_claw_pid_derivative_gain));
          break;

        case CANSIGNAL::ARM_CLAW_PID_DEADZONE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_set_claw_pid_params_arm_claw_pid_deadzone_decode(
                                                msgStruct.arm_claw_pid_deadzone));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_reportJointPosition message packer
bool arm_report_joint_position_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_REPORT_JOINT_POSITION;
  struct uwrt_mars_rover_can_arm_report_joint_position_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_REPORT_TURNTABLE_POSITION:
          msgStruct.arm_report_turntable_position =
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_turntable_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_position_arm_report_turntable_position_is_in_range(
              msgStruct.arm_report_turntable_position);
          break;

        case CANSIGNAL::ARM_REPORT_SHOULDER_POSITION:
          msgStruct.arm_report_shoulder_position =
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_shoulder_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_position_arm_report_shoulder_position_is_in_range(
              msgStruct.arm_report_shoulder_position);
          break;

        case CANSIGNAL::ARM_REPORT_ELBOW_POSITION:
          msgStruct.arm_report_elbow_position =
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_elbow_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_position_arm_report_elbow_position_is_in_range(
              msgStruct.arm_report_elbow_position);
          break;

        case CANSIGNAL::ARM_REPORT_LEFT_WRIST_POSITION:
          msgStruct.arm_report_left_wrist_position =
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_left_wrist_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_position_arm_report_left_wrist_position_is_in_range(
              msgStruct.arm_report_left_wrist_position);
          break;

        case CANSIGNAL::ARM_REPORT_RIGHT_WRIST_POSITION:
          msgStruct.arm_report_right_wrist_position =
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_right_wrist_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_position_arm_report_right_wrist_position_is_in_range(
              msgStruct.arm_report_right_wrist_position);
          break;

        case CANSIGNAL::ARM_REPORT_CLAW_WRIST_POSITION:
          msgStruct.arm_report_claw_wrist_position =
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_claw_wrist_position_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_position_arm_report_claw_wrist_position_is_in_range(
              msgStruct.arm_report_claw_wrist_position);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_report_joint_position_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_POSITION_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_POSITION_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_POSITION_LENGTH;
  }
  return success;
}

// ARM_reportJointPosition message unpacker
bool arm_report_joint_position_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_REPORT_JOINT_POSITION;
  struct uwrt_mars_rover_can_arm_report_joint_position_t msgStruct;

  success = (uwrt_mars_rover_can_arm_report_joint_position_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_POSITION_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_REPORT_TURNTABLE_POSITION:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_position_arm_report_turntable_position_decode(
                                         msgStruct.arm_report_turntable_position));
          break;

        case CANSIGNAL::ARM_REPORT_SHOULDER_POSITION:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_position_arm_report_shoulder_position_decode(
                                         msgStruct.arm_report_shoulder_position));
          break;

        case CANSIGNAL::ARM_REPORT_ELBOW_POSITION:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_position_arm_report_elbow_position_decode(
                                         msgStruct.arm_report_elbow_position));
          break;

        case CANSIGNAL::ARM_REPORT_LEFT_WRIST_POSITION:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_left_wrist_position_decode(
                  msgStruct.arm_report_left_wrist_position));
          break;

        case CANSIGNAL::ARM_REPORT_RIGHT_WRIST_POSITION:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_right_wrist_position_decode(
                  msgStruct.arm_report_right_wrist_position));
          break;

        case CANSIGNAL::ARM_REPORT_CLAW_WRIST_POSITION:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_position_arm_report_claw_wrist_position_decode(
                  msgStruct.arm_report_claw_wrist_position));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_reportJointAngularVelocity message packer
bool arm_report_joint_angular_velocity_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_REPORT_JOINT_ANGULAR_VELOCITY;
  struct uwrt_mars_rover_can_arm_report_joint_angular_velocity_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_REPORT_TURNTABLE_ANGULAR_VELOCITY:
          msgStruct.arm_report_turntable_angular_velocity =
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_turntable_angular_velocity_encode(
                  signalValue);
          success &=
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_turntable_angular_velocity_is_in_range(
                  msgStruct.arm_report_turntable_angular_velocity);
          break;

        case CANSIGNAL::ARM_REPORT_SHOULDER_ANGULAR_VELOCITY:
          msgStruct.arm_report_shoulder_angular_velocity =
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_shoulder_angular_velocity_encode(
                  signalValue);
          success &=
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_shoulder_angular_velocity_is_in_range(
                  msgStruct.arm_report_shoulder_angular_velocity);
          break;

        case CANSIGNAL::ARM_REPORT_ELBOW_ANGULAR_VELOCITY:
          msgStruct.arm_report_elbow_angular_velocity =
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_elbow_angular_velocity_encode(
                  signalValue);
          success &=
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_elbow_angular_velocity_is_in_range(
                  msgStruct.arm_report_elbow_angular_velocity);
          break;

        case CANSIGNAL::ARM_REPORT_LEFT_WRIST_ANGULAR_VELOCITY:
          msgStruct.arm_report_left_wrist_angular_velocity =
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_left_wrist_angular_velocity_encode(
                  signalValue);
          success &=
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_left_wrist_angular_velocity_is_in_range(
                  msgStruct.arm_report_left_wrist_angular_velocity);
          break;

        case CANSIGNAL::ARM_REPORT_RIGHT_WRIST_ANGULAR_VELOCITY:
          msgStruct.arm_report_right_wrist_angular_velocity =
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_right_wrist_angular_velocity_encode(
                  signalValue);
          success &=
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_right_wrist_angular_velocity_is_in_range(
                  msgStruct.arm_report_right_wrist_angular_velocity);
          break;

        case CANSIGNAL::ARM_REPORT_CLAW_ANGULAR_VELOCITY:
          msgStruct.arm_report_claw_angular_velocity =
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_claw_angular_velocity_encode(
                  signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_claw_angular_velocity_is_in_range(
              msgStruct.arm_report_claw_angular_velocity);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_report_joint_angular_velocity_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_ANGULAR_VELOCITY_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_ANGULAR_VELOCITY_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_ANGULAR_VELOCITY_LENGTH;
  }
  return success;
}

// ARM_reportJointAngularVelocity message unpacker
bool arm_report_joint_angular_velocity_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_REPORT_JOINT_ANGULAR_VELOCITY;
  struct uwrt_mars_rover_can_arm_report_joint_angular_velocity_t msgStruct;

  success = (uwrt_mars_rover_can_arm_report_joint_angular_velocity_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_ANGULAR_VELOCITY_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_REPORT_TURNTABLE_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_turntable_angular_velocity_decode(
                  msgStruct.arm_report_turntable_angular_velocity));
          break;

        case CANSIGNAL::ARM_REPORT_SHOULDER_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_shoulder_angular_velocity_decode(
                  msgStruct.arm_report_shoulder_angular_velocity));
          break;

        case CANSIGNAL::ARM_REPORT_ELBOW_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_elbow_angular_velocity_decode(
                  msgStruct.arm_report_elbow_angular_velocity));
          break;

        case CANSIGNAL::ARM_REPORT_LEFT_WRIST_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_left_wrist_angular_velocity_decode(
                  msgStruct.arm_report_left_wrist_angular_velocity));
          break;

        case CANSIGNAL::ARM_REPORT_RIGHT_WRIST_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_right_wrist_angular_velocity_decode(
                  msgStruct.arm_report_right_wrist_angular_velocity));
          break;

        case CANSIGNAL::ARM_REPORT_CLAW_ANGULAR_VELOCITY:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_joint_angular_velocity_arm_report_claw_angular_velocity_decode(
                  msgStruct.arm_report_claw_angular_velocity));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// ARM_reportJointCurrent message packer
bool arm_report_joint_current_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_REPORT_JOINT_CURRENT;
  struct uwrt_mars_rover_can_arm_report_joint_current_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_REPORT_TURNTABLE_CURRENT:
          msgStruct.arm_report_turntable_current =
              uwrt_mars_rover_can_arm_report_joint_current_arm_report_turntable_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_current_arm_report_turntable_current_is_in_range(
              msgStruct.arm_report_turntable_current);
          break;

        case CANSIGNAL::ARM_REPORT_SHOULDER_CURRENT:
          msgStruct.arm_report_shoulder_current =
              uwrt_mars_rover_can_arm_report_joint_current_arm_report_shoulder_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_current_arm_report_shoulder_current_is_in_range(
              msgStruct.arm_report_shoulder_current);
          break;

        case CANSIGNAL::ARM_REPORT_ELBOW_CURRENT:
          msgStruct.arm_report_elbow_current =
              uwrt_mars_rover_can_arm_report_joint_current_arm_report_elbow_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_current_arm_report_elbow_current_is_in_range(
              msgStruct.arm_report_elbow_current);
          break;

        case CANSIGNAL::ARM_REPORT_LEFT_WRIST_CURRENT:
          msgStruct.arm_report_left_wrist_current =
              uwrt_mars_rover_can_arm_report_joint_current_arm_report_left_wrist_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_current_arm_report_left_wrist_current_is_in_range(
              msgStruct.arm_report_left_wrist_current);
          break;

        case CANSIGNAL::ARM_REPORT_RIGHT_WRIST_CURRENT:
          msgStruct.arm_report_right_wrist_current =
              uwrt_mars_rover_can_arm_report_joint_current_arm_report_right_wrist_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_current_arm_report_right_wrist_current_is_in_range(
              msgStruct.arm_report_right_wrist_current);
          break;

        case CANSIGNAL::ARM_REPORT_CLAW_CURRENT:
          msgStruct.arm_report_claw_current =
              uwrt_mars_rover_can_arm_report_joint_current_arm_report_claw_current_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_joint_current_arm_report_claw_current_is_in_range(
              msgStruct.arm_report_claw_current);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_arm_report_joint_current_pack(
                    raw, &msgStruct, UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_CURRENT_LENGTH) ==
                UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_CURRENT_LENGTH);
    len = UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_CURRENT_LENGTH;
  }
  return success;
}

// ARM_reportJointCurrent message unpacker
bool arm_report_joint_current_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_REPORT_JOINT_CURRENT;
  struct uwrt_mars_rover_can_arm_report_joint_current_t msgStruct;

  success = (uwrt_mars_rover_can_arm_report_joint_current_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_REPORT_JOINT_CURRENT_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_REPORT_TURNTABLE_CURRENT:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_current_arm_report_turntable_current_decode(
                                         msgStruct.arm_report_turntable_current));
          break;

        case CANSIGNAL::ARM_REPORT_SHOULDER_CURRENT:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_current_arm_report_shoulder_current_decode(
                                         msgStruct.arm_report_shoulder_current));
          break;

        case CANSIGNAL::ARM_REPORT_ELBOW_CURRENT:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_current_arm_report_elbow_current_decode(
                                         msgStruct.arm_report_elbow_current));
          break;

        case CANSIGNAL::ARM_REPORT_LEFT_WRIST_CURRENT:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_current_arm_report_left_wrist_current_decode(
                                         msgStruct.arm_report_left_wrist_current));
          break;

        case CANSIGNAL::ARM_REPORT_RIGHT_WRIST_CURRENT:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_joint_current_arm_report_right_wrist_current_decode(
                                         msgStruct.arm_report_right_wrist_current));
          break;

        case CANSIGNAL::ARM_REPORT_CLAW_CURRENT:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_report_joint_current_arm_report_claw_current_decode(
                                                msgStruct.arm_report_claw_current));
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
bool arm_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_REPORT_FAULTS;
  struct uwrt_mars_rover_can_arm_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_ENCODER_STATE:
          msgStruct.arm_turntable_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_is_in_range(
              msgStruct.arm_turntable_encoder_state);
          break;

        case CANSIGNAL::ARM_TURNTABLE_CURRENT_SENSOR_STATE:
          msgStruct.arm_turntable_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_is_in_range(
              msgStruct.arm_turntable_current_sensor_state);
          break;

        case CANSIGNAL::ARM_SHOULDER_ENCODER_STATE:
          msgStruct.arm_shoulder_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_is_in_range(
              msgStruct.arm_shoulder_encoder_state);
          break;

        case CANSIGNAL::ARM_SHOULDER_CURRENT_SENSOR_STATE:
          msgStruct.arm_shoulder_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_is_in_range(
              msgStruct.arm_shoulder_current_sensor_state);
          break;

        case CANSIGNAL::ARM_ELBOW_ENCODER_STATE:
          msgStruct.arm_elbow_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_is_in_range(
              msgStruct.arm_elbow_encoder_state);
          break;

        case CANSIGNAL::ARM_ELBOW_CURRENT_SENSOR_STATE:
          msgStruct.arm_elbow_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_is_in_range(
              msgStruct.arm_elbow_current_sensor_state);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_ENCODER_STATE:
          msgStruct.arm_left_wrist_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_is_in_range(
              msgStruct.arm_left_wrist_encoder_state);
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_CURRENT_SENSOR_STATE:
          msgStruct.arm_left_wrist_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_is_in_range(
              msgStruct.arm_left_wrist_current_sensor_state);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_ENCODER_STATE:
          msgStruct.arm_right_wrist_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_is_in_range(
              msgStruct.arm_right_wrist_encoder_state);
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_CURRENT_SENSOR_STATE:
          msgStruct.arm_right_wrist_current_sensor_state =
              uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_is_in_range(
              msgStruct.arm_right_wrist_current_sensor_state);
          break;

        case CANSIGNAL::ARM_CLAW_ENCODER_STATE:
          msgStruct.arm_claw_encoder_state =
              uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_is_in_range(
              msgStruct.arm_claw_encoder_state);
          break;

        case CANSIGNAL::ARM_CLAW_CURRENT_SENSOR_STATE:
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
    len = UWRT_MARS_ROVER_CAN_ARM_REPORT_FAULTS_LENGTH;
  }
  return success;
}

// ARM_reportFaults message unpacker
bool arm_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_REPORT_FAULTS;
  struct uwrt_mars_rover_can_arm_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_arm_report_faults_unpack(&msgStruct, raw,
                                                          UWRT_MARS_ROVER_CAN_ARM_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_TURNTABLE_ENCODER_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_decode(
                                                msgStruct.arm_turntable_encoder_state));
          break;

        case CANSIGNAL::ARM_TURNTABLE_CURRENT_SENSOR_STATE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_decode(
                                         msgStruct.arm_turntable_current_sensor_state));
          break;

        case CANSIGNAL::ARM_SHOULDER_ENCODER_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_decode(
                                                msgStruct.arm_shoulder_encoder_state));
          break;

        case CANSIGNAL::ARM_SHOULDER_CURRENT_SENSOR_STATE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_decode(
                                         msgStruct.arm_shoulder_current_sensor_state));
          break;

        case CANSIGNAL::ARM_ELBOW_ENCODER_STATE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_decode(msgStruct.arm_elbow_encoder_state));
          break;

        case CANSIGNAL::ARM_ELBOW_CURRENT_SENSOR_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_decode(
                                                msgStruct.arm_elbow_current_sensor_state));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_ENCODER_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_decode(
                                                msgStruct.arm_left_wrist_encoder_state));
          break;

        case CANSIGNAL::ARM_LEFT_WRIST_CURRENT_SENSOR_STATE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_decode(
                                         msgStruct.arm_left_wrist_current_sensor_state));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_ENCODER_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_decode(
                                                msgStruct.arm_right_wrist_encoder_state));
          break;

        case CANSIGNAL::ARM_RIGHT_WRIST_CURRENT_SENSOR_STATE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_decode(
                                         msgStruct.arm_right_wrist_current_sensor_state));
          break;

        case CANSIGNAL::ARM_CLAW_ENCODER_STATE:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_decode(msgStruct.arm_claw_encoder_state));
          break;

        case CANSIGNAL::ARM_CLAW_CURRENT_SENSOR_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
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
bool arm_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::ARM_REPORT_ACK;
  struct uwrt_mars_rover_can_arm_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::ARM_ACK:
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
    len = UWRT_MARS_ROVER_CAN_ARM_REPORT_ACK_LENGTH;
  }
  return success;
}

// ARM_reportACK message unpacker
bool arm_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::ARM_REPORT_ACK;
  struct uwrt_mars_rover_can_arm_report_ack_t msgStruct;

  success =
      (uwrt_mars_rover_can_arm_report_ack_unpack(&msgStruct, raw, UWRT_MARS_ROVER_CAN_ARM_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::ARM_ACK:
          success &= msgMap->setSignalValue(msgID, signalName,
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
bool science_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::SCIENCE_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_science_set_control_mode_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::SCIENCE_GENEVA_CONTROL_MODE:
          msgStruct.science_geneva_control_mode =
              uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_encode(signalValue);
          success &= uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_is_in_range(
              msgStruct.science_geneva_control_mode);
          break;

        case CANSIGNAL::SCIENCE_ELEVATOR_CONTROL_MODE:
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
    len = UWRT_MARS_ROVER_CAN_SCIENCE_SET_CONTROL_MODE_LENGTH;
  }
  return success;
}

// SCIENCE_setControlMode message unpacker
bool science_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::SCIENCE_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_science_set_control_mode_t msgStruct;

  success = (uwrt_mars_rover_can_science_set_control_mode_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_SCIENCE_SET_CONTROL_MODE_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::SCIENCE_GENEVA_CONTROL_MODE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_decode(
                                         msgStruct.science_geneva_control_mode));
          break;

        case CANSIGNAL::SCIENCE_ELEVATOR_CONTROL_MODE:
          success &=
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
bool science_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::SCIENCE_REPORT_FAULTS;
  struct uwrt_mars_rover_can_science_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::SCIENCE_GENEVA_ENCODER_STATE:
          msgStruct.science_geneva_encoder_state =
              uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_is_in_range(
              msgStruct.science_geneva_encoder_state);
          break;

        case CANSIGNAL::SCIENCE_ELEVATOR_ENCODER_STATE:
          msgStruct.science_elevator_encoder_state =
              uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_encode(signalValue);
          success &= uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_is_in_range(
              msgStruct.science_elevator_encoder_state);
          break;

        case CANSIGNAL::SCIENCE_MOISTURE_SENSOR_STATE:
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
    len = UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_FAULTS_LENGTH;
  }
  return success;
}

// SCIENCE_reportFaults message unpacker
bool science_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::SCIENCE_REPORT_FAULTS;
  struct uwrt_mars_rover_can_science_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_science_report_faults_unpack(&msgStruct, raw,
                                                              UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::SCIENCE_GENEVA_ENCODER_STATE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_decode(
                                         msgStruct.science_geneva_encoder_state));
          break;

        case CANSIGNAL::SCIENCE_ELEVATOR_ENCODER_STATE:
          success &=
              msgMap->setSignalValue(msgID, signalName,
                                     uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_decode(
                                         msgStruct.science_elevator_encoder_state));
          break;

        case CANSIGNAL::SCIENCE_MOISTURE_SENSOR_STATE:
          success &=
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
bool science_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::SCIENCE_REPORT_ACK;
  struct uwrt_mars_rover_can_science_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::SCIENCE_ACK:
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
    len = UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_ACK_LENGTH;
  }
  return success;
}

// SCIENCE_reportACK message unpacker
bool science_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::SCIENCE_REPORT_ACK;
  struct uwrt_mars_rover_can_science_report_ack_t msgStruct;

  success = (uwrt_mars_rover_can_science_report_ack_unpack(&msgStruct, raw,
                                                           UWRT_MARS_ROVER_CAN_SCIENCE_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::SCIENCE_ACK:
          success &= msgMap->setSignalValue(
              msgID, signalName, uwrt_mars_rover_can_science_report_ack_science_ack_decode(msgStruct.science_ack));
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
bool gimbal_set_control_mode_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::GIMBAL_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_gimbal_set_control_mode_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::GIMBAL_PAN_CONTROL_MODE:
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
    len = UWRT_MARS_ROVER_CAN_GIMBAL_SET_CONTROL_MODE_LENGTH;
  }
  return success;
}

// GIMBAL_setControlMode message unpacker
bool gimbal_set_control_mode_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::GIMBAL_SET_CONTROL_MODE;
  struct uwrt_mars_rover_can_gimbal_set_control_mode_t msgStruct;

  success = (uwrt_mars_rover_can_gimbal_set_control_mode_unpack(
                 &msgStruct, raw, UWRT_MARS_ROVER_CAN_GIMBAL_SET_CONTROL_MODE_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::GIMBAL_PAN_CONTROL_MODE:
          success &= msgMap->setSignalValue(msgID, signalName,
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
bool gimbal_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::GIMBAL_REPORT_FAULTS;
  struct uwrt_mars_rover_can_gimbal_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::GIMBAL_PAN_ENCODER_STATE:
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
    len = UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_FAULTS_LENGTH;
  }
  return success;
}

// GIMBAL_reportFaults message unpacker
bool gimbal_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::GIMBAL_REPORT_FAULTS;
  struct uwrt_mars_rover_can_gimbal_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_gimbal_report_faults_unpack(&msgStruct, raw,
                                                             UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::GIMBAL_PAN_ENCODER_STATE:
          success &= msgMap->setSignalValue(msgID, signalName,
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
bool gimbal_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::GIMBAL_REPORT_ACK;
  struct uwrt_mars_rover_can_gimbal_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::GIMBAL_ACK:
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
    len = UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_ACK_LENGTH;
  }
  return success;
}

// GIMBAL_reportACK message unpacker
bool gimbal_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::GIMBAL_REPORT_ACK;
  struct uwrt_mars_rover_can_gimbal_report_ack_t msgStruct;

  success = (uwrt_mars_rover_can_gimbal_report_ack_unpack(&msgStruct, raw,
                                                          UWRT_MARS_ROVER_CAN_GIMBAL_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::GIMBAL_ACK:
          success &= msgMap->setSignalValue(
              msgID, signalName, uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_decode(msgStruct.gimbal_ack));
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
bool pdb_set_led_matrix_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::PDB_SET_LED_MATRIX;
  struct uwrt_mars_rover_can_pdb_set_led_matrix_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::PDB_LED_MATRIX_STATE:
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
    len = UWRT_MARS_ROVER_CAN_PDB_SET_LED_MATRIX_LENGTH;
  }
  return success;
}

// PDB_setLEDMatrix message unpacker
bool pdb_set_led_matrix_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::PDB_SET_LED_MATRIX;
  struct uwrt_mars_rover_can_pdb_set_led_matrix_t msgStruct;

  success = (uwrt_mars_rover_can_pdb_set_led_matrix_unpack(&msgStruct, raw,
                                                           UWRT_MARS_ROVER_CAN_PDB_SET_LED_MATRIX_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::PDB_LED_MATRIX_STATE:
          success &= msgMap->setSignalValue(
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
bool pdb_report_faults_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::PDB_REPORT_FAULTS;
  struct uwrt_mars_rover_can_pdb_report_faults_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::PDB_JETSON_STATUS:
          msgStruct.pdb_jetson_status = uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_is_in_range(msgStruct.pdb_jetson_status);
          break;

        case CANSIGNAL::PDB_ARM_POWER_STATUS:
          msgStruct.pdb_arm_power_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_is_in_range(msgStruct.pdb_arm_power_status);
          break;

        case CANSIGNAL::PDB_SCIENCE_POWER_STATUS:
          msgStruct.pdb_science_power_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_is_in_range(
              msgStruct.pdb_science_power_status);
          break;

        case CANSIGNAL::PDB_GIMBAL_POWER_STATUS:
          msgStruct.pdb_gimbal_power_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_encode(signalValue);
          success &= uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_is_in_range(
              msgStruct.pdb_gimbal_power_status);
          break;

        case CANSIGNAL::PDB_VBAT_RAIL_STATUS:
          msgStruct.pdb_vbat_rail_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_is_in_range(msgStruct.pdb_vbat_rail_status);
          break;

        case CANSIGNAL::PDB_17_V_RAIL_STATUS:
          msgStruct.pdb_17_v_rail_status =
              uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_encode(signalValue);
          success &=
              uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_is_in_range(msgStruct.pdb_17_v_rail_status);
          break;

        case CANSIGNAL::PDB_5_V_RAIL_STATUS:
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
    len = UWRT_MARS_ROVER_CAN_PDB_REPORT_FAULTS_LENGTH;
  }
  return success;
}

// PDB_reportFaults message unpacker
bool pdb_report_faults_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::PDB_REPORT_FAULTS;
  struct uwrt_mars_rover_can_pdb_report_faults_t msgStruct;

  success = (uwrt_mars_rover_can_pdb_report_faults_unpack(&msgStruct, raw,
                                                          UWRT_MARS_ROVER_CAN_PDB_REPORT_FAULTS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::PDB_JETSON_STATUS:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_decode(msgStruct.pdb_jetson_status));
          break;

        case CANSIGNAL::PDB_ARM_POWER_STATUS:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_decode(msgStruct.pdb_arm_power_status));
          break;

        case CANSIGNAL::PDB_SCIENCE_POWER_STATUS:
          success &= msgMap->setSignalValue(msgID, signalName,
                                            uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_decode(
                                                msgStruct.pdb_science_power_status));
          break;

        case CANSIGNAL::PDB_GIMBAL_POWER_STATUS:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_decode(msgStruct.pdb_gimbal_power_status));
          break;

        case CANSIGNAL::PDB_VBAT_RAIL_STATUS:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_decode(msgStruct.pdb_vbat_rail_status));
          break;

        case CANSIGNAL::PDB_17_V_RAIL_STATUS:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_decode(msgStruct.pdb_17_v_rail_status));
          break;

        case CANSIGNAL::PDB_5_V_RAIL_STATUS:
          success &= msgMap->setSignalValue(
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
bool pdb_report_ack_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::PDB_REPORT_ACK;
  struct uwrt_mars_rover_can_pdb_report_ack_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::PDB_ACK:
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
    len = UWRT_MARS_ROVER_CAN_PDB_REPORT_ACK_LENGTH;
  }
  return success;
}

// PDB_reportACK message unpacker
bool pdb_report_ack_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::PDB_REPORT_ACK;
  struct uwrt_mars_rover_can_pdb_report_ack_t msgStruct;

  success =
      (uwrt_mars_rover_can_pdb_report_ack_unpack(&msgStruct, raw, UWRT_MARS_ROVER_CAN_PDB_REPORT_ACK_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::PDB_ACK:
          success &= msgMap->setSignalValue(msgID, signalName,
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
bool common_switch_can_bus_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::COMMON_SWITCH_CAN_BUS;
  struct uwrt_mars_rover_can_common_switch_can_bus_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::COMMON_CAN_BUS_ID:
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
    len = UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_LENGTH;
  }
  return success;
}

// COMMON_switchCANBus message unpacker
bool common_switch_can_bus_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::COMMON_SWITCH_CAN_BUS;
  struct uwrt_mars_rover_can_common_switch_can_bus_t msgStruct;

  success = (uwrt_mars_rover_can_common_switch_can_bus_unpack(&msgStruct, raw,
                                                              UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::COMMON_CAN_BUS_ID:
          success &= msgMap->setSignalValue(
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

// COMMON_testMessage1 message packer
bool common_test_message1_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::COMMON_TEST_MESSAGE1;
  struct uwrt_mars_rover_can_common_test_message1_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::COMMON_TEST_SIGNAL1:
          msgStruct.common_test_signal1 =
              uwrt_mars_rover_can_common_test_message1_common_test_signal1_encode(signalValue);
          success &=
              uwrt_mars_rover_can_common_test_message1_common_test_signal1_is_in_range(msgStruct.common_test_signal1);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_common_test_message1_pack(raw, &msgStruct,
                                                              UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE1_LENGTH) ==
                UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE1_LENGTH);
    len = UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE1_LENGTH;
  }
  return success;
}

// COMMON_testMessage1 message unpacker
bool common_test_message1_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::COMMON_TEST_MESSAGE1;
  struct uwrt_mars_rover_can_common_test_message1_t msgStruct;

  success = (uwrt_mars_rover_can_common_test_message1_unpack(&msgStruct, raw,
                                                             UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE1_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::COMMON_TEST_SIGNAL1:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_common_test_message1_common_test_signal1_decode(msgStruct.common_test_signal1));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}

// COMMON_testMessage2 message packer
bool common_test_message2_packer(uint8_t* raw, const CANMsgMap* msgMap, size_t& len) {
  bool success = true;
  CANID msgID  = CANID::COMMON_TEST_MESSAGE2;
  struct uwrt_mars_rover_can_common_test_message2_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNAL::COMMON_TEST_SIGNAL2:
          msgStruct.common_test_signal2 =
              uwrt_mars_rover_can_common_test_message2_common_test_signal2_encode(signalValue);
          success &=
              uwrt_mars_rover_can_common_test_message2_common_test_signal2_is_in_range(msgStruct.common_test_signal2);
          break;

        case CANSIGNAL::COMMON_TEST_SIGNAL3:
          msgStruct.common_test_signal3 =
              uwrt_mars_rover_can_common_test_message2_common_test_signal3_encode(signalValue);
          success &=
              uwrt_mars_rover_can_common_test_message2_common_test_signal3_is_in_range(msgStruct.common_test_signal3);
          break;

        default:
          success = false;
          break;
      }
    }
    success &= (uwrt_mars_rover_can_common_test_message2_pack(raw, &msgStruct,
                                                              UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE2_LENGTH) ==
                UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE2_LENGTH);
    len = UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE2_LENGTH;
  }
  return success;
}

// COMMON_testMessage2 message unpacker
bool common_test_message2_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success = false;
  CANID msgID  = CANID::COMMON_TEST_MESSAGE2;
  struct uwrt_mars_rover_can_common_test_message2_t msgStruct;

  success = (uwrt_mars_rover_can_common_test_message2_unpack(&msgStruct, raw,
                                                             UWRT_MARS_ROVER_CAN_COMMON_TEST_MESSAGE2_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNAL signalName = it->first;

      switch (signalName) {
        case CANSIGNAL::COMMON_TEST_SIGNAL2:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_common_test_message2_common_test_signal2_decode(msgStruct.common_test_signal2));
          break;

        case CANSIGNAL::COMMON_TEST_SIGNAL3:
          success &= msgMap->setSignalValue(
              msgID, signalName,
              uwrt_mars_rover_can_common_test_message2_common_test_signal3_decode(msgStruct.common_test_signal3));
          break;

        default:
          success = false;
          break;
      }
    }
  }

  return success;
}
