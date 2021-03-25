#!/usr/bin/env python3
'''
Helper script to generate the can wrapper header and source files. Called by generate_can.py
'''

HEADER_TEMPLATE = '''// AUTO-GENERATED FILE. DO NOT MODIFY

# pragma once

# include "CANMsgMap.h"
# include "{rover_can_name_lower}.h"
# include "{enums_header_file_name}"

namespace HWBRIDGE {{

    bool packCANMsg(uint8_t* raw, HWBRIDGE::CANID msgID, const HWBRIDGE::CANMsgMap* msgMap);
    bool unpackCANMsg(uint8_t* raw, HWBRIDGE::CANID msgID, HWBRIDGE::CANMsgMap* msgMap);

}}
'''

CPP_TEMPLATE = '''// AUTO-GENERATED FILE. DO NOT MODIFY

# include "{can_wrapper_header_file_name}"

using namespace HWBRIDGE;

// --- Message packer function prototypes ---
{msg_packer_function_prototypes}

// -- Message unpacker function prototypes ---
{msg_unpacker_function_prototypes}

bool HWBRIDGE::packCANMsg(uint8_t* raw, CANID msgID, const CANMsgMap* msgMap) {{
  switch (msgID) {{
    {msg_packer_switch_cases}
    default:
      return false;
  }}
}}

bool HWBRIDGE::unpackCANMsg(uint8_t* raw, CANID msgID, CANMsgMap* msgMap) {{
  switch (msgID) {{
    {msg_unpacker_switch_cases}
    default:
      return false;
  }}
}}

{msg_packer_unpacker_function_definitions}
'''

MSG_PACKER_UNPACKER_FUNCTION_TEMPLATE = '''
// {original_msg_name} message packer
bool {msg_name_lower}_packer(uint8_t* raw, const CANMsgMap* msgMap) {{
  bool success = true;
  CANID msgID  = {msg_name_upper};
  struct {rover_can_name_lower}_{msg_name_lower}_t msgStruct;

  if (msgMap->contains(msgID)) {{
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {{
      CANSIGNAL signalName         = it->first;
      CANSignalValue_t signalValue = it->second;

      switch (signalName) {{
        {packer_signal_switch_cases}
        default:
          success = false;
          break;
      }}
    }}
    success &= ({rover_can_name_lower}_{msg_name_lower}_pack(raw, &msgStruct, {rover_can_name_upper}_{msg_name_upper}_LENGTH) == {rover_can_name_upper}_{msg_name_upper}_LENGTH);
  }}
  return success;
}}

// {original_msg_name} message unpacker
bool {msg_name_lower}_unpacker(uint8_t* raw, CANMsgMap* msgMap) {{
  bool success = false;
  CANID msgID  = {msg_name_upper};
  struct {rover_can_name_lower}_{msg_name_lower}_t msgStruct;

  success = ({rover_can_name_lower}_{msg_name_lower}_unpack(&msgStruct, raw, {rover_can_name_upper}_{msg_name_upper}_LENGTH) == 0);

  if (success && msgMap->contains(msgID)) {{
    for (auto it = msgMap->at(msgID).begin(); it != msgMap->at(msgID).end(); it++) {{
      CANSIGNAL signalName = it->first;

      switch (signalName) {{
        {unpacker_signal_switch_cases}
        default:
          success = false;
          break;
      }}
    }}
  }}

  return success;
}}

'''

PACKER_SIGNAL_SWITCH_CASE_TEMPLATE = '''
case {signal_name_upper}:
  msgStruct.{signal_name_lower} = {rover_can_name_lower}_{msg_name_lower}_{signal_name_lower}_encode(signalValue);
  success &= {rover_can_name_lower}_{msg_name_lower}_{signal_name_lower}_is_in_range(msgStruct.{signal_name_lower});
  break;
'''

UNPACKER_SIGNAL_SWITCH_CASE_TEMPLATE = '''
case {signal_name_upper}:
  msgMap->setSignalValue(
      msgID, signalName,
      {rover_can_name_lower}_{msg_name_lower}_{signal_name_lower}_decode(msgStruct.{signal_name_lower}));
  break;
'''


def msg_packer_function_prototypes(msg_names):
    return ''.join(['static bool {}_packer(uint8_t* raw, const CANMsgMap* msgMap);\n'.format(msg_name.lower()) for msg_name in msg_names])


def msg_unpacker_function_prototypes(msg_names):
    return ''.join(['static bool {}_unpacker(uint8_t* raw, CANMsgMap* msgMap);\n'.format(msg_name.lower()) for msg_name in msg_names])


def packer_msg_switch_cases(msg_names):
    return ''.join(['case {}:\n\treturn {}_packer(raw, msgMap);\n'.format(msg_name.upper(), msg_name.lower()) for msg_name in msg_names])


def unpacker_msg_switch_cases(msg_names):
    return ''.join(['case {}:\n\treturn {}_unpacker(raw, msgMap);\n'.format(msg_name.upper(), msg_name.lower()) for msg_name in msg_names])


def packer_signal_switch_cases(signal_names, rover_can_name, msg_name):
    return ''.join([PACKER_SIGNAL_SWITCH_CASE_TEMPLATE.format(signal_name_upper=signal_name.upper(), signal_name_lower=signal_name.lower(), rover_can_name_lower=rover_can_name.lower(), msg_name_lower=msg_name.lower()) for signal_name in signal_names])


def unpacker_signal_switch_cases(signal_names, rover_can_name, msg_name):
    return ''.join([UNPACKER_SIGNAL_SWITCH_CASE_TEMPLATE.format(signal_name_upper=signal_name.upper(), signal_name_lower=signal_name.lower(), rover_can_name_lower=rover_can_name.lower(), msg_name_lower=msg_name.lower()) for signal_name in signal_names])


def msg_packer_unpacker(original_msg_name, msg_name, rover_can_name, signal_names):
    packer_switch_cases = packer_signal_switch_cases(
        signal_names=signal_names, rover_can_name=rover_can_name, msg_name=msg_name)
    unpacker_switch_cases = unpacker_signal_switch_cases(
        signal_names=signal_names, rover_can_name=rover_can_name, msg_name=msg_name)
    return MSG_PACKER_UNPACKER_FUNCTION_TEMPLATE.format(original_msg_name=original_msg_name, msg_name_lower=msg_name.lower(), msg_name_upper=msg_name.upper(), rover_can_name_lower=rover_can_name.lower(), rover_can_name_upper=rover_can_name.upper(), packer_signal_switch_cases=packer_switch_cases, unpacker_signal_switch_cases=unpacker_switch_cases)


# input vars fields:
# - rover_can_name
# - enums_header_file_name
def generate_header(output_file, vars):
    with open(output_file, 'w') as file:
        file.write(HEADER_TEMPLATE.format(
            rover_can_name_lower=vars['rover_can_name'].lower(),
            enums_header_file_name=vars['enums_header_file_name'],
        ))


# input var fields
# - rover_can_name
# - can_wrapper_header_file_name
# - msg_map ({msg1 : [signal1, signal2, ...], msg2 : [signal1, signal2, ...]})
# - original_msg_names ({msg: original_msg_name, ...})
def generate_source(output_file, vars):
    with open(output_file, 'w') as file:
        file.write(CPP_TEMPLATE.format(
            can_wrapper_header_file_name=vars['can_wrapper_header_file_name'],
            msg_packer_function_prototypes=msg_packer_function_prototypes(
                vars['msg_map'].keys()),
            msg_unpacker_function_prototypes=msg_unpacker_function_prototypes(
                vars['msg_map'].keys()),
            msg_packer_switch_cases=packer_msg_switch_cases(
                vars['msg_map'].keys()),
            msg_unpacker_switch_cases=unpacker_msg_switch_cases(
                vars['msg_map'].keys()),
            msg_packer_unpacker_function_definitions=''.join([msg_packer_unpacker(
                original_msg_name=vars['original_msg_names'][msg_name], msg_name=msg_name, rover_can_name=vars['rover_can_name'], signal_names=vars['msg_map'][msg_name]) for msg_name in vars['msg_map'].keys()]),
        ))
