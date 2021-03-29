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

    enum class CANBUSID {{
        CANBUS1,
        CANBUS2,
    }};

    enum class CANID {{
        {msg_enums}
    }};

    enum class CANSIGNAL {{
        {cansignal_enums}
    }};

    {cansignal_enum_choices}
}}
'''


CANSIGNAL_ENUM_CHOICES_TEMPLATE = '''
enum class {signal_name}_VALUES {{
    {signal_choices}
}};
'''


def msg_enums_formatted(msg_enums):
    return ''.join(['\t{} = {},\n'.format(msg_name, hex(msg_id).upper().replace('X', 'x')) for msg_name, msg_id in sorted(msg_enums.items(), key=lambda x: x[1])])


def signal_enums_formatted(signal_enums):
    return ''.join(['\t{},\n'.format(signal_name) for signal_name in sorted(signal_enums)])


def signal_enum_choices_formatted(signal_name, signal_enum_choices):
    return ''.join(['\t{signal_name}_{choice_name} = {choice_value},\n'.format(signal_name=signal_name, choice_name=choice_name, choice_value=choice_value) for choice_value, choice_name in sorted(signal_enum_choices.items())])


def signal_enum_choices_all_formatted(signal_enum_choices_all):
    return ''.join([CANSIGNAL_ENUM_CHOICES_TEMPLATE.format(signal_name=signal_name, signal_choices=signal_enum_choices_formatted(signal_name, signal_choices)) for signal_name, signal_choices in signal_enum_choices_all.items()])


# input vars fields:
# - canbus_frequency_value
# - msg_enums
# - cansignal_enums
# - cansignal_enum_choices
def generate(output_file, vars):
    with open(output_file, 'w') as file:
        file.write(TEMPLATE.format(
            canbus_frequency_value=vars['canbus_frequency_value'],
            msg_enums=msg_enums_formatted(vars['msg_enums']),
            cansignal_enums=signal_enums_formatted(vars['cansignal_enums']),
            cansignal_enum_choices=signal_enum_choices_all_formatted(
                vars['cansignal_enum_choices']),
        ))
