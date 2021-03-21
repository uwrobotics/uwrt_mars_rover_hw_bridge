#!/usr/bin/env python3
'''
Script that generates the DBC file and C source code given the yaml CAN description.
This script should be called in the root directory of the uwrt_mars_rover_hw_bridge repository.
'''

import subprocess
import os
import cantools
import yaml
import shutil

CAN_FOLDER_PATH = 'can'
GENERATED_FOLDER_NAME = 'generated'
YAML_FILE_NAME = 'uwrt_mars_rover_can.yaml'
DBC_FILE_NAME = 'uwrt_mars_rover_can.dbc'
DBC_DUMP_FILE_NAME = 'uwrt_mars_rover_can_dump.txt'

GENERATED_FOLDER_PATH = os.path.join(CAN_FOLDER_PATH, GENERATED_FOLDER_NAME)
YAML_FILE_PATH = os.path.join(CAN_FOLDER_PATH, YAML_FILE_NAME)

# load yaml file
with open(YAML_FILE_PATH) as file:
    can_yaml = yaml.load(file, Loader=yaml.FullLoader)

bus_name = list(can_yaml.keys())[0]

# sort nodes in alphabetical order
can_yaml[bus_name]['nodes'].sort()

# extract CAN nodes
nodes = []
for node in can_yaml[bus_name]['nodes']:
    nodes.append(
        cantools.database.can.Node(name=node, comment=None)
    )

# sort messages by id
can_yaml[bus_name]['messages'].sort(key=lambda x: x[list(x.keys())[0]]['id'])

# extract CAN messages
messages = []
for message in can_yaml[bus_name]['messages']:
    message_name = list(message.keys())[0]
    message = message[message_name]

    # sort senders and receivers
    message['senders'].sort()
    message['receivers'].sort()

    # sort signals by startbit
    message['signals'].sort(key=lambda x: x[list(x.keys())[0]]['startbit'])

    # extract message signals
    signals = []
    for signal in message['signals']:
        signal_name = list(signal.keys())[0]
        signal = signal[signal_name]

        length = signal['length']
        is_signed = signal['is_signed']

        # NOTE: it is assumed that min/max bounds do not cover SNA values

        # if given both scale/offset and min/max
        if 'scale' in signal and 'offset' in signal and 'min' in signal and 'max' in signal:
            scale = signal['scale']
            offset = signal['offset']
            sig_min = signal['min']
            sig_max = signal['max']

        # else if only given scale/offset (no min/max)
        elif 'scale' in signal and 'offset' in signal:
            scale = signal['scale']
            offset = signal['offset']

            # calculate min/max based on scale/offset and length
            sig_min = - (2**(length-1)-1) * scale + \
                offset if is_signed else offset
            sig_max = (2**(length-1)-1) * scale + \
                offset if is_signed else (2**length-2) * scale + offset

        # else if only given min/max (no scale/offset)
        elif 'min' in signal and 'max' in signal:
            sig_min = signal['min']
            sig_max = signal['max']

            # calculate scale/offset based on min/max and length
            scale = (sig_max - sig_min) / (2**length - 2)
            offset = sig_min + (2**(length-1)-1) * \
                scale if is_signed else sig_min

        else:
            print('Missing fields for signal "' + signal_name +
                  '" in message "' + message_name + '"!')
            print('Supply either signal scale/offset or signal min/max')
            print('Script terminated.')
            exit()

        # add these missing fields to the yaml
        signal['scale'] = scale
        signal['offset'] = offset
        signal['min'] = sig_min
        signal['max'] = sig_max

        signals.append(
            cantools.database.can.Signal(
                name=signal_name,
                start=signal['startbit'],
                length=signal['length'],
                byte_order='little_endian',
                is_signed=signal['is_signed'],
                scale=signal['scale'],
                offset=signal['offset'],
                minimum=signal['min'],
                maximum=signal['max'],
                unit=signal['unit'],
                choices=signal['values'],
                comment=signal['comment'],
                receivers=message['receivers']
            )
        )

    messages.append(
        cantools.database.can.Message(
            frame_id=message['id'],
            name=message_name,
            length=message['size'],
            signals=signals,
            comment=message['comment'],
            senders=message['senders'],
            cycle_time=(None if message['frequency']
                        == 0 else 1/message['frequency']),
        )
    )

can_db = cantools.database.can.Database(
    messages=messages,
    nodes=nodes
)

# create "generated" folder
if not os.path.exists(GENERATED_FOLDER_PATH):
    os.mkdir(GENERATED_FOLDER_PATH)

# generate normalized yaml file with all fields
TEMP_YAML_PATH = os.path.join(GENERATED_FOLDER_PATH, 'temp.yaml')
try:
    with open(TEMP_YAML_PATH, 'w') as file:
        yaml.dump(can_yaml, file, sort_keys=False,
                  indent=2)

    shutil.copyfile(TEMP_YAML_PATH, YAML_FILE_PATH)
    print('Successfully updated', YAML_FILE_NAME)
except:
    print('ERROR - yaml file not updated!')
finally:
    if os.path.exists(TEMP_YAML_PATH):
        os.remove(TEMP_YAML_PATH)

# cd into generated folder
os.chdir(GENERATED_FOLDER_PATH)

# generate dbc file
cantools.database.dump_file(can_db, DBC_FILE_NAME)
print('Successfully generated', DBC_FILE_NAME)

# generate human-readable dbc dump
subprocess.run(
    ['python3 -m cantools dump ' + DBC_FILE_NAME + ' > ' + DBC_DUMP_FILE_NAME], shell=True)
print('Successfully generated', DBC_DUMP_FILE_NAME)

# generate c source from dbc file
subprocess.run(
    ['python3 -m cantools generate_c_source ' + DBC_FILE_NAME], shell=True)
