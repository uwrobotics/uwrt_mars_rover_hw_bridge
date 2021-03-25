// AUTO-GENERATED FILE. DO NOT MODIFY

#pragma once

#include "CANMsgMap.h"
#include "uwrt_mars_rover_can.h"
#include "uwrt_mars_rover_can_enums.h"

namespace HWBRIDGE {

bool packCANMsg(uint8_t* raw, HWBRIDGE::CANID msgID, const HWBRIDGE::CANMsgMap* msgMap);
bool unpackCANMsg(uint8_t* raw, HWBRIDGE::CANID msgID, HWBRIDGE::CANMsgMap* msgMap);

}  // namespace HWBRIDGE
