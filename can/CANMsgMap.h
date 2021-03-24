#pragma once

#include <iterator>
#include <unordered_map>

#include "uwrt_mars_rover_can_common.h"

namespace HWBRIDGE {

class CANMsgMap {
 private:
  // https://stackoverflow.com/questions/18837857/cant-use-enum-class-as-unordered-map-key
  struct hasher {
    template <typename T>
    std::size_t operator()(T t) const {
      return static_cast<std::size_t>(t);
    }
  };

 public:
  using CANSignalMapType = std::unordered_map<const CANSIGNALNAME, CANSignalValue_t, hasher>;
  using CANMsgMapType    = std::unordered_map<const CANMsgID_t, CANSignalMapType, hasher>;

  CANMsgMap() = delete;

  // // range based constructor
  CANMsgMap(CANMsgMapType::iterator first, CANMsgMapType::iterator last);

  // copy constructor and assignment
  CANMsgMap(const CANMsgMap &) = default;
  CANMsgMap &operator=(const CANMsgMap &) = default;

  // move constructor and assignment
  CANMsgMap(CANMsgMap &&) = default;
  CANMsgMap &operator=(CANMsgMap &&) = default;

  // initializer list constructor
  CANMsgMap(std::initializer_list<std::pair<const CANMsgID_t, CANSignalMapType>> init);

  bool getSignalValue(CANMsgID_t msgID, CANSIGNALNAME signalName, CANSignalValue_t &signalValue) const;
  bool setSignalValue(CANMsgID_t msgID, CANSIGNALNAME signalName, CANSignalValue_t signalValue);
  bool contains(CANMsgID_t msgID) const;
  bool contains(CANMsgID_t msgID, CANSIGNALNAME signalName) const;

  CANSignalMapType &at(CANMsgID_t msgID);
  CANMsgMapType::iterator begin();
  CANMsgMapType::iterator end();

  const CANSignalMapType &at(CANMsgID_t msgID) const;
  const CANMsgMapType::const_iterator begin() const;
  const CANMsgMapType::const_iterator end() const;

 private:
  CANMsgMapType m_map;
};
}  // namespace HWBRIDGE
