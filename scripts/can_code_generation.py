#!/usr/bin/env python3
'''
Script that generates the DBC file and C source code given the yaml CAN description.
'''

import subprocess
import os
import cantools
import yaml

CAN_FOLDER_PATH = '../can'
YAML_FILE_PATH = os.path.join(CAN_FOLDER_PATH, 'uwrt_mars_rover_can.yaml')

with open(YAML_FILE_PATH) as file:
    can = yaml.load(file)

bus_name = list(can.keys())[0]

# extract CAN nodes
nodes = []
for node in can[bus_name]['nodes']:
    nodes.append(
        cantools.database.can.Node(name=node, comment=None)
    )

# extract CAN messages
messages = []
for message in can[bus_name]['messages']:
    message_name = list(message.keys())[0]
    message = message[message_name]

    # extract message signals
    signals = []
    for signal in message['signals']:
        signal_name = list(signal.keys())[0]
        signal = signal[signal_name]

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

DBC_FILE = 'uwrt_mars_rover_can.dbc'
GENERATED_FOLDER_PATH = os.path.join(CAN_FOLDER_PATH, 'generated')

# create "generated" folder and cd into it
if not os.path.exists(GENERATED_FOLDER_PATH):
    os.mkdir(GENERATED_FOLDER_PATH)
os.chdir(GENERATED_FOLDER_PATH)

# generate dbc file
cantools.database.dump_file(can_db, DBC_FILE)
print('Successfully generated', DBC_FILE)

# generate c source from dbc file
subprocess.run(
    ['python3 -m cantools generate_c_source ' + DBC_FILE], shell=True)
