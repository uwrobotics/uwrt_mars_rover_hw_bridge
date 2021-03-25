#pragma once

#include <iterator>
#include <unordered_map>

#include "uwrt_mars_rover_can_enums.h"

namespace HWBRIDGE {

class CANMsgMap {
 private:
  // https://stackoverflow.com/questions/18837857/cant-use-enum-class-as-unordered-map-key
  struct enumHasher {
    template <typename T>
    std::size_t operator()(T t) const {
      return static_cast<std::size_t>(t);
    }
  };

 public:
  using CANSignalMapType = std::unordered_map<const CANSIGNAL, CANSignalValue_t, enumHasher>;
  using CANMsgMapType    = std::unordered_map<const CANID, CANSignalMapType, enumHasher>;

  CANMsgMap() = delete;

  // range based constructor
  CANMsgMap(CANMsgMapType::iterator first, CANMsgMapType::iterator last);

  // copy constructor and assignment
  CANMsgMap(const CANMsgMap &) = default;
  CANMsgMap &operator=(const CANMsgMap &) = default;

  // move constructor and assignment
  CANMsgMap(CANMsgMap &&) = default;
  CANMsgMap &operator=(CANMsgMap &&) = default;

  // initializer list constructor
  CANMsgMap(std::initializer_list<std::pair<const CANID, CANSignalMapType>> init);

  bool getSignalValue(CANID msgID, CANSIGNAL signalName, CANSignalValue_t &signalValue) const;
  bool setSignalValue(CANID msgID, CANSIGNAL signalName, CANSignalValue_t signalValue);
  bool contains(CANID msgID) const;
  bool contains(CANID msgID, CANSIGNAL signalName) const;

  CANSignalMapType &at(CANID msgID);
  CANMsgMapType::iterator begin();
  CANMsgMapType::iterator end();

  const CANSignalMapType &at(CANID msgID) const;
  const CANMsgMapType::const_iterator begin() const;
  const CANMsgMapType::const_iterator end() const;

 private:
  CANMsgMapType m_map;
};
}  // namespace HWBRIDGE
