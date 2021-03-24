#include "CANAutogenWrapper.h"

using namespace HWBRIDGE;

// --- Message packer function prototypes ---
static bool common_switch_can_bus_frame_id_packer(uint8_t* raw, const CANMsgMap* msgMap);

// --- Message unpacker function prototypes ---
static bool common_switch_can_bus_frame_id_unpacker(uint8_t* raw, CANMsgMap* msgMap);

bool HWBRIDGE::packCANMsg(uint8_t* raw, CANMsgID_t msgID, const CANMsgMap* msgMap) {
  switch (msgID) {
    case UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_FRAME_ID:
      return common_switch_can_bus_frame_id_packer(raw, msgMap);
    default:
      return false;
  }
}

bool HWBRIDGE::unpackCANMsg(uint8_t* raw, CANMsgID_t msgID, CANMsgMap* msgMap) {
  switch (msgID) {
    case UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_FRAME_ID:
      return common_switch_can_bus_frame_id_unpacker(raw, msgMap);
    default:
      return false;
  }
}

// --- Message packer funciton definitions ---

// Message: COMMON_switchCANBusFrameID
static bool common_switch_can_bus_frame_id_packer(uint8_t* raw, const CANMsgMap* msgMap) {
  bool success     = true;
  CANMsgID_t msgID = UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_FRAME_ID;
  struct uwrt_mars_rover_can_common_switch_can_bus_t msgStruct;

  if (msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNALNAME signalName     = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {
        case CANSIGNALNAME::COMMON_CAN_BUS_ID:
          // TODO: add signal_in_range() check
          msgStruct.common_can_bus_id = uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_encode(signalValue);
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

// --- Message unpacker function definitions ---

// Message: COMMON_switchCANBusFrameID
static bool common_switch_can_bus_frame_id_unpacker(uint8_t* raw, CANMsgMap* msgMap) {
  bool success     = false;
  CANMsgID_t msgID = UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_FRAME_ID;
  struct uwrt_mars_rover_can_common_switch_can_bus_t msgStruct;

  success = (uwrt_mars_rover_can_common_switch_can_bus_unpack(&msgStruct, raw,
                                                              UWRT_MARS_ROVER_CAN_COMMON_SWITCH_CAN_BUS_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {
      CANSIGNALNAME signalName = it->first;

      switch (signalName) {
        case CANSIGNALNAME::COMMON_CAN_BUS_ID:
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
