#!/usr/bin/env python3
'''
Helper script to generate the can enums header file. Called by generate_can.py
'''

TEMPLATE = '''// AUTO-GENERATED FILE. DO NOT MODIFY

# pragma once

namespace HWBRIDGE {{

    constexpr uint32_t ROVER_CANBUS_FREQUENCY_HZ = {canbus_frequency_value};
    constexpr uint16_t ROVER_CANID_FILTER_MASK = {canid_filter_mask}; // Use bits 5:10 for addressing, bits 0:4 for message type

    typedef double CANSignalValue_t;

    typedef struct {{
        uint8_t raw[8];
    }} CANMsgData_t;

    enum class CANBUSID {{
        CANBUS1,
        CANBUS2,
    }};

    enum class CANFILTER {{
        {canid_filters}
    }};

    enum class CANID {{
        // Roboteq CAN IDs
        {roboteq_enums}
        // Rover boards CAN IDs
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


def canid_filters_formatted(canid_filters):
    return ''.join(['\t{} = {},\n'.format(filter_name, hex(filter_value).upper().replace('X', 'x')) for filter_value, filter_name in sorted(canid_filters.items())])


def roboteq_enums_formatted(roboteq_enums):
    return ''.join(['\t{} = {},\n'.format(roboteqid_name, hex(roboteqid_value).upper().replace('X', 'x')) for roboteqid_value, roboteqid_name in sorted(roboteq_enums.items())])


def msg_enums_formatted(msg_enums):
    return ''.join(['\t{} = {},\n'.format(msg_name, hex(msg_id).upper().replace('X', 'x')) for msg_name, msg_id in sorted(msg_enums.items(), key=lambda x: x[1])])


def signal_enums_formatted(signal_enums):
    return ''.join(['\t{},\n'.format(signal_name) for signal_name in sorted(signal_enums)])


def signal_enum_choices_formatted(signal_name, signal_enum_choices):
    if signal_enum_choices is not None:
        return ''.join(['\t{signal_name}_{choice_name} = {choice_value},\n'.format(signal_name=signal_name, choice_name=choice_name, choice_value=choice_value) for choice_value, choice_name in sorted(signal_enum_choices.items())])
    else:
        return ''


def signal_enum_choices_all_formatted(signal_enum_choices_all):
    return ''.join([CANSIGNAL_ENUM_CHOICES_TEMPLATE.format(signal_name=signal_name, signal_choices=signal_enum_choices_formatted(signal_name, signal_choices)) for signal_name, signal_choices in sorted(signal_enum_choices_all.items())])


# input vars fields:
# - canbus_frequency_value
# - canid_filters
# - msg_enums
# - cansignal_enums
# - cansignal_enum_choices
def generate(output_file, vars):
    with open(output_file, 'w') as file:
        file.write(TEMPLATE.format(
            canbus_frequency_value=vars['canbus_frequency_value'],
            canid_filter_mask=hex(
                vars['canid_filter_mask']).upper().replace('X', 'x'),
            canid_filters=canid_filters_formatted(vars['canid_filters']),
            roboteq_enums=roboteq_enums_formatted(vars['roboteq_enums']),
            msg_enums=msg_enums_formatted(vars['msg_enums']),
            cansignal_enums=signal_enums_formatted(vars['cansignal_enums']),
            cansignal_enum_choices=signal_enum_choices_all_formatted(
                vars['cansignal_enum_choices']),
        ))
