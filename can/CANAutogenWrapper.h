#pragma once

#include "CANMsgMap.h"
#include "uwrt_mars_rover_can_common.h"

namespace HWBRIDGE {

bool packCANMsg(uint8_t* raw, HWBRIDGE::CANMsgID_t msgID, const HWBRIDGE::CANMsgMap* msgMap);
bool unpackCANMsg(uint8_t* raw, HWBRIDGE::CANMsgID_t msgID, HWBRIDGE::CANMsgMap* msgMap);

}  // namespace HWBRIDGE
