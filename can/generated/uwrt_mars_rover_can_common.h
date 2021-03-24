#pragma once

#include "uwrt_mars_rover_can.h"

namespace HWBRIDGE {

constexpr uint32_t ROVER_CANBUS_FREQUENCY_HZ = 1000000;  // 1 Mbps

typedef uint16_t CANMsgID_t;
typedef double CANSignalValue_t;

typedef struct {
  uint8_t raw[8];
} CANMsgData_t;

enum CANSIGNALNAME { COMMON_CAN_BUS_ID };

}  // namespace HWBRIDGE
