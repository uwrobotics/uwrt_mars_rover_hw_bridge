#!/usr/bin/env python3
'''
Helper script to generate the can enums header file. Called by generate_can.py
'''

TEMPLATE = '''// AUTO-GENERATED FILE. DO NOT MODIFY

# pragma once

namespace HWBRIDGE {{

    constexpr uint32_t ROVER_CANBUS_FREQUENCY_HZ = {canbus_frequency_value};

    typedef double CANSignalValue_t;

    typedef struct {{
        uint8_t raw[8];
    }} CANMsgData_t;

    enum CANBUSID {{
        CANBUS1,
        CANBUS2,
    }};

    enum CANID {{
        {msg_enums}
    }};

    enum CANSIGNAL {{
        {cansignal_enums}
    }};
}}
'''


def msg_enums_formatted(msg_enums):
    return ''.join(['\t{} = {},\n'.format(msg_name, hex(msg_id).upper().replace('X', 'x')) for msg_name, msg_id in sorted(msg_enums.items(), key=lambda x: x[1])])


def signal_enums_formatted(signal_enums):
    return ''.join(['\t{},\n'.format(signal_name) for signal_name in sorted(signal_enums)])


# input vars fields:
# - canbus_frequency_value
# - msg_enums
# - cansignal_enums
def generate(output_file, vars):
    with open(output_file, 'w') as file:
        file.write(TEMPLATE.format(
            canbus_frequency_value=vars['canbus_frequency_value'],
            msg_enums=msg_enums_formatted(vars['msg_enums']),
            cansignal_enums=signal_enums_formatted(vars['cansignal_enums']),
        ))
