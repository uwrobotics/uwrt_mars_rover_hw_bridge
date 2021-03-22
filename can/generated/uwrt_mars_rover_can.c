/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 36.2.0 Sun Mar 21 22:48:02 2021.
 */

#include <string.h>

#include "uwrt_mars_rover_can.h"

static inline uint8_t pack_left_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value << shift) & mask);
}

static inline uint8_t pack_left_shift_u16(
    uint16_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value << shift) & mask);
}

static inline uint8_t pack_right_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value >> shift) & mask);
}

static inline uint8_t pack_right_shift_u16(
    uint16_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value >> shift) & mask);
}

static inline uint8_t unpack_left_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value & mask) << shift);
}

static inline uint16_t unpack_left_shift_u16(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint16_t)((uint16_t)(value & mask) << shift);
}

static inline uint8_t unpack_right_shift_u8(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint8_t)((uint8_t)(value & mask) >> shift);
}

static inline uint16_t unpack_right_shift_u16(
    uint8_t value,
    uint8_t shift,
    uint8_t mask)
{
    return (uint16_t)((uint16_t)(value & mask) >> shift);
}

int uwrt_mars_rover_can_arm_set_control_mode_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_set_control_mode_t *src_p,
    size_t size)
{
    if (size < 3u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 3);

    dst_p[0] |= pack_left_shift_u8(src_p->arm_turntable_control_mode, 0u, 0x07u);
    dst_p[0] |= pack_left_shift_u8(src_p->arm_shoulder_control_mode, 3u, 0x38u);
    dst_p[0] |= pack_left_shift_u8(src_p->arm_elbow_control_mode, 6u, 0xc0u);
    dst_p[1] |= pack_right_shift_u8(src_p->arm_elbow_control_mode, 2u, 0x01u);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_left_wrist_control_mode, 1u, 0x0eu);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_right_wrist_control_mode, 4u, 0x70u);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_claw_control_mode, 7u, 0x80u);
    dst_p[2] |= pack_right_shift_u8(src_p->arm_claw_control_mode, 1u, 0x03u);

    return (3);
}

int uwrt_mars_rover_can_arm_set_control_mode_unpack(
    struct uwrt_mars_rover_can_arm_set_control_mode_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 3u) {
        return (-EINVAL);
    }

    dst_p->arm_turntable_control_mode = unpack_right_shift_u8(src_p[0], 0u, 0x07u);
    dst_p->arm_shoulder_control_mode = unpack_right_shift_u8(src_p[0], 3u, 0x38u);
    dst_p->arm_elbow_control_mode = unpack_right_shift_u8(src_p[0], 6u, 0xc0u);
    dst_p->arm_elbow_control_mode |= unpack_left_shift_u8(src_p[1], 2u, 0x01u);
    dst_p->arm_left_wrist_control_mode = unpack_right_shift_u8(src_p[1], 1u, 0x0eu);
    dst_p->arm_right_wrist_control_mode = unpack_right_shift_u8(src_p[1], 4u, 0x70u);
    dst_p->arm_claw_control_mode = unpack_right_shift_u8(src_p[1], 7u, 0x80u);
    dst_p->arm_claw_control_mode |= unpack_left_shift_u8(src_p[2], 1u, 0x03u);

    return (0);
}

uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

int uwrt_mars_rover_can_arm_set_motion_data_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_set_motion_data_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= pack_left_shift_u16(src_p->arm_turntable_motion_data, 0u, 0xffu);
    dst_p[1] |= pack_right_shift_u16(src_p->arm_turntable_motion_data, 8u, 0xffu);
    dst_p[2] |= pack_left_shift_u16(src_p->arm_shoulder_motion_data, 0u, 0xffu);
    dst_p[3] |= pack_right_shift_u16(src_p->arm_shoulder_motion_data, 8u, 0xffu);

    return (8);
}

int uwrt_mars_rover_can_arm_set_motion_data_unpack(
    struct uwrt_mars_rover_can_arm_set_motion_data_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    dst_p->arm_turntable_motion_data = unpack_right_shift_u16(src_p[0], 0u, 0xffu);
    dst_p->arm_turntable_motion_data |= unpack_left_shift_u16(src_p[1], 8u, 0xffu);
    dst_p->arm_shoulder_motion_data = unpack_right_shift_u16(src_p[2], 0u, 0xffu);
    dst_p->arm_shoulder_motion_data |= unpack_left_shift_u16(src_p[3], 8u, 0xffu);

    return (0);
}

uint16_t uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_encode(double value)
{
    return (uint16_t)(value / 0.00015259254737998596);
}

double uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_decode(uint16_t value)
{
    return ((double)value * 0.00015259254737998596);
}

bool uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_is_in_range(uint16_t value)
{
    return (value <= 65534u);
}

uint16_t uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_encode(double value)
{
    return (uint16_t)((value - -5.0) / 0.00015259254737998596);
}

double uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_decode(uint16_t value)
{
    return (((double)value * 0.00015259254737998596) + -5.0);
}

bool uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_is_in_range(uint16_t value)
{
    return (value <= 65534u);
}

int uwrt_mars_rover_can_arm_set_pid_params_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_set_pid_params_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= pack_left_shift_u8(src_p->arm_joint_id, 0u, 0x07u);
    dst_p[0] |= pack_left_shift_u8(src_p->arm_pid_tuning_mode, 3u, 0x18u);
    dst_p[0] |= pack_left_shift_u16(src_p->arm_pid_proportional_gain, 5u, 0xe0u);
    dst_p[1] |= pack_right_shift_u16(src_p->arm_pid_proportional_gain, 3u, 0xffu);
    dst_p[2] |= pack_right_shift_u16(src_p->arm_pid_proportional_gain, 11u, 0x1fu);
    dst_p[2] |= pack_left_shift_u16(src_p->arm_pid_integral_gain, 5u, 0xe0u);
    dst_p[3] |= pack_right_shift_u16(src_p->arm_pid_integral_gain, 3u, 0xffu);
    dst_p[4] |= pack_right_shift_u16(src_p->arm_pid_integral_gain, 11u, 0x1fu);
    dst_p[4] |= pack_left_shift_u16(src_p->arm_pid_derivative_gain, 5u, 0xe0u);
    dst_p[5] |= pack_right_shift_u16(src_p->arm_pid_derivative_gain, 3u, 0xffu);
    dst_p[6] |= pack_right_shift_u16(src_p->arm_pid_derivative_gain, 11u, 0x1fu);
    dst_p[6] |= pack_left_shift_u16(src_p->arm_pid_deadzone, 5u, 0xe0u);
    dst_p[7] |= pack_right_shift_u16(src_p->arm_pid_deadzone, 3u, 0xffu);

    return (8);
}

int uwrt_mars_rover_can_arm_set_pid_params_unpack(
    struct uwrt_mars_rover_can_arm_set_pid_params_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 8u) {
        return (-EINVAL);
    }

    dst_p->arm_joint_id = unpack_right_shift_u8(src_p[0], 0u, 0x07u);
    dst_p->arm_pid_tuning_mode = unpack_right_shift_u8(src_p[0], 3u, 0x18u);
    dst_p->arm_pid_proportional_gain = unpack_right_shift_u16(src_p[0], 5u, 0xe0u);
    dst_p->arm_pid_proportional_gain |= unpack_left_shift_u16(src_p[1], 3u, 0xffu);
    dst_p->arm_pid_proportional_gain |= unpack_left_shift_u16(src_p[2], 11u, 0x1fu);
    dst_p->arm_pid_integral_gain = unpack_right_shift_u16(src_p[2], 5u, 0xe0u);
    dst_p->arm_pid_integral_gain |= unpack_left_shift_u16(src_p[3], 3u, 0xffu);
    dst_p->arm_pid_integral_gain |= unpack_left_shift_u16(src_p[4], 11u, 0x1fu);
    dst_p->arm_pid_derivative_gain = unpack_right_shift_u16(src_p[4], 5u, 0xe0u);
    dst_p->arm_pid_derivative_gain |= unpack_left_shift_u16(src_p[5], 3u, 0xffu);
    dst_p->arm_pid_derivative_gain |= unpack_left_shift_u16(src_p[6], 11u, 0x1fu);
    dst_p->arm_pid_deadzone = unpack_right_shift_u16(src_p[6], 5u, 0xe0u);
    dst_p->arm_pid_deadzone |= unpack_left_shift_u16(src_p[7], 3u, 0xffu);

    return (0);
}

uint8_t uwrt_mars_rover_can_arm_set_pid_params_arm_joint_id_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_pid_params_arm_joint_id_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_pid_params_arm_joint_id_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

uint8_t uwrt_mars_rover_can_arm_set_pid_params_arm_pid_tuning_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_set_pid_params_arm_pid_tuning_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_set_pid_params_arm_pid_tuning_mode_is_in_range(uint8_t value)
{
    return (value <= 0u);
}

uint16_t uwrt_mars_rover_can_arm_set_pid_params_arm_pid_proportional_gain_encode(double value)
{
    return (uint16_t)(value / 0.15259254737998595);
}

double uwrt_mars_rover_can_arm_set_pid_params_arm_pid_proportional_gain_decode(uint16_t value)
{
    return ((double)value * 0.15259254737998595);
}

bool uwrt_mars_rover_can_arm_set_pid_params_arm_pid_proportional_gain_is_in_range(uint16_t value)
{
    return (value <= 65534u);
}

uint16_t uwrt_mars_rover_can_arm_set_pid_params_arm_pid_integral_gain_encode(double value)
{
    return (uint16_t)(value / 0.15259254737998595);
}

double uwrt_mars_rover_can_arm_set_pid_params_arm_pid_integral_gain_decode(uint16_t value)
{
    return ((double)value * 0.15259254737998595);
}

bool uwrt_mars_rover_can_arm_set_pid_params_arm_pid_integral_gain_is_in_range(uint16_t value)
{
    return (value <= 65534u);
}

uint16_t uwrt_mars_rover_can_arm_set_pid_params_arm_pid_derivative_gain_encode(double value)
{
    return (uint16_t)(value / 0.15259254737998595);
}

double uwrt_mars_rover_can_arm_set_pid_params_arm_pid_derivative_gain_decode(uint16_t value)
{
    return ((double)value * 0.15259254737998595);
}

bool uwrt_mars_rover_can_arm_set_pid_params_arm_pid_derivative_gain_is_in_range(uint16_t value)
{
    return (value <= 65534u);
}

uint16_t uwrt_mars_rover_can_arm_set_pid_params_arm_pid_deadzone_encode(double value)
{
    return (uint16_t)(value / 0.04887585532746823);
}

double uwrt_mars_rover_can_arm_set_pid_params_arm_pid_deadzone_decode(uint16_t value)
{
    return ((double)value * 0.04887585532746823);
}

bool uwrt_mars_rover_can_arm_set_pid_params_arm_pid_deadzone_is_in_range(uint16_t value)
{
    return (value <= 2046u);
}

int uwrt_mars_rover_can_arm_report_faults_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_report_faults_t *src_p,
    size_t size)
{
    if (size < 3u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 3);

    dst_p[0] |= pack_left_shift_u8(src_p->arm_turntable_encoder_state, 0u, 0x03u);
    dst_p[0] |= pack_left_shift_u8(src_p->arm_turntable_current_sensor_state, 2u, 0x0cu);
    dst_p[0] |= pack_left_shift_u8(src_p->arm_shoulder_encoder_state, 4u, 0x30u);
    dst_p[0] |= pack_left_shift_u8(src_p->arm_shoulder_current_sensor_state, 6u, 0xc0u);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_elbow_encoder_state, 0u, 0x03u);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_elbow_current_sensor_state, 2u, 0x0cu);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_left_wrist_encoder_state, 4u, 0x30u);
    dst_p[1] |= pack_left_shift_u8(src_p->arm_left_wrist_current_sensor_state, 6u, 0xc0u);
    dst_p[2] |= pack_left_shift_u8(src_p->arm_right_wrist_encoder_state, 0u, 0x03u);
    dst_p[2] |= pack_left_shift_u8(src_p->arm_right_wrist_current_sensor_state, 2u, 0x0cu);
    dst_p[2] |= pack_left_shift_u8(src_p->arm_claw_encoder_state, 4u, 0x30u);
    dst_p[2] |= pack_left_shift_u8(src_p->arm_claw_current_sensor_state, 6u, 0xc0u);

    return (3);
}

int uwrt_mars_rover_can_arm_report_faults_unpack(
    struct uwrt_mars_rover_can_arm_report_faults_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 3u) {
        return (-EINVAL);
    }

    dst_p->arm_turntable_encoder_state = unpack_right_shift_u8(src_p[0], 0u, 0x03u);
    dst_p->arm_turntable_current_sensor_state = unpack_right_shift_u8(src_p[0], 2u, 0x0cu);
    dst_p->arm_shoulder_encoder_state = unpack_right_shift_u8(src_p[0], 4u, 0x30u);
    dst_p->arm_shoulder_current_sensor_state = unpack_right_shift_u8(src_p[0], 6u, 0xc0u);
    dst_p->arm_elbow_encoder_state = unpack_right_shift_u8(src_p[1], 0u, 0x03u);
    dst_p->arm_elbow_current_sensor_state = unpack_right_shift_u8(src_p[1], 2u, 0x0cu);
    dst_p->arm_left_wrist_encoder_state = unpack_right_shift_u8(src_p[1], 4u, 0x30u);
    dst_p->arm_left_wrist_current_sensor_state = unpack_right_shift_u8(src_p[1], 6u, 0xc0u);
    dst_p->arm_right_wrist_encoder_state = unpack_right_shift_u8(src_p[2], 0u, 0x03u);
    dst_p->arm_right_wrist_current_sensor_state = unpack_right_shift_u8(src_p[2], 2u, 0x0cu);
    dst_p->arm_claw_encoder_state = unpack_right_shift_u8(src_p[2], 4u, 0x30u);
    dst_p->arm_claw_current_sensor_state = unpack_right_shift_u8(src_p[2], 6u, 0xc0u);

    return (0);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_turntable_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_turntable_current_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_shoulder_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_shoulder_current_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_elbow_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_elbow_current_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_left_wrist_current_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_right_wrist_current_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_claw_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_arm_report_faults_arm_claw_current_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_faults_arm_claw_current_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_faults_arm_claw_current_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

int uwrt_mars_rover_can_arm_report_ack_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_report_ack_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->arm_ack, 0u, 0xffu);

    return (1);
}

int uwrt_mars_rover_can_arm_report_ack_unpack(
    struct uwrt_mars_rover_can_arm_report_ack_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->arm_ack = unpack_right_shift_u8(src_p[0], 0u, 0xffu);

    return (0);
}

uint8_t uwrt_mars_rover_can_arm_report_ack_arm_ack_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_arm_report_ack_arm_ack_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_arm_report_ack_arm_ack_is_in_range(uint8_t value)
{
    return (value <= 254u);
}

int uwrt_mars_rover_can_science_set_control_mode_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_science_set_control_mode_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->science_geneva_control_mode, 0u, 0x03u);
    dst_p[0] |= pack_left_shift_u8(src_p->science_elevator_control_mode, 2u, 0x0cu);

    return (1);
}

int uwrt_mars_rover_can_science_set_control_mode_unpack(
    struct uwrt_mars_rover_can_science_set_control_mode_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->science_geneva_control_mode = unpack_right_shift_u8(src_p[0], 0u, 0x03u);
    dst_p->science_elevator_control_mode = unpack_right_shift_u8(src_p[0], 2u, 0x0cu);

    return (0);
}

uint8_t uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_science_set_control_mode_science_geneva_control_mode_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_science_set_control_mode_science_elevator_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_science_set_control_mode_science_elevator_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_science_set_control_mode_science_elevator_control_mode_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

int uwrt_mars_rover_can_science_report_faults_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_science_report_faults_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->science_geneva_encoder_state, 0u, 0x03u);
    dst_p[0] |= pack_left_shift_u8(src_p->science_elevator_encoder_state, 2u, 0x0cu);
    dst_p[0] |= pack_left_shift_u8(src_p->science_moisture_sensor_state, 4u, 0x30u);

    return (1);
}

int uwrt_mars_rover_can_science_report_faults_unpack(
    struct uwrt_mars_rover_can_science_report_faults_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->science_geneva_encoder_state = unpack_right_shift_u8(src_p[0], 0u, 0x03u);
    dst_p->science_elevator_encoder_state = unpack_right_shift_u8(src_p[0], 2u, 0x0cu);
    dst_p->science_moisture_sensor_state = unpack_right_shift_u8(src_p[0], 4u, 0x30u);

    return (0);
}

uint8_t uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_science_report_faults_science_geneva_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_science_report_faults_science_elevator_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_science_report_faults_science_moisture_sensor_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_science_report_faults_science_moisture_sensor_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_science_report_faults_science_moisture_sensor_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

int uwrt_mars_rover_can_science_report_ack_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_science_report_ack_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->science_ack, 0u, 0xffu);

    return (1);
}

int uwrt_mars_rover_can_science_report_ack_unpack(
    struct uwrt_mars_rover_can_science_report_ack_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->science_ack = unpack_right_shift_u8(src_p[0], 0u, 0xffu);

    return (0);
}

uint8_t uwrt_mars_rover_can_science_report_ack_science_ack_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_science_report_ack_science_ack_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_science_report_ack_science_ack_is_in_range(uint8_t value)
{
    return (value <= 254u);
}

int uwrt_mars_rover_can_gimbal_set_control_mode_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_gimbal_set_control_mode_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->gimbal_pan_control_mode, 0u, 0x03u);

    return (1);
}

int uwrt_mars_rover_can_gimbal_set_control_mode_unpack(
    struct uwrt_mars_rover_can_gimbal_set_control_mode_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->gimbal_pan_control_mode = unpack_right_shift_u8(src_p[0], 0u, 0x03u);

    return (0);
}

uint8_t uwrt_mars_rover_can_gimbal_set_control_mode_gimbal_pan_control_mode_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_gimbal_set_control_mode_gimbal_pan_control_mode_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_gimbal_set_control_mode_gimbal_pan_control_mode_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

int uwrt_mars_rover_can_gimbal_report_faults_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_gimbal_report_faults_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->gimbal_pan_encoder_state, 0u, 0x03u);

    return (1);
}

int uwrt_mars_rover_can_gimbal_report_faults_unpack(
    struct uwrt_mars_rover_can_gimbal_report_faults_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->gimbal_pan_encoder_state = unpack_right_shift_u8(src_p[0], 0u, 0x03u);

    return (0);
}

uint8_t uwrt_mars_rover_can_gimbal_report_faults_gimbal_pan_encoder_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_gimbal_report_faults_gimbal_pan_encoder_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_gimbal_report_faults_gimbal_pan_encoder_state_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

int uwrt_mars_rover_can_gimbal_report_ack_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_gimbal_report_ack_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->gimbal_ack, 0u, 0xffu);

    return (1);
}

int uwrt_mars_rover_can_gimbal_report_ack_unpack(
    struct uwrt_mars_rover_can_gimbal_report_ack_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->gimbal_ack = unpack_right_shift_u8(src_p[0], 0u, 0xffu);

    return (0);
}

uint8_t uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_gimbal_report_ack_gimbal_ack_is_in_range(uint8_t value)
{
    return (value <= 254u);
}

int uwrt_mars_rover_can_pdb_set_led_matrix_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_pdb_set_led_matrix_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->pdb_led_matrix_state, 0u, 0x07u);

    return (1);
}

int uwrt_mars_rover_can_pdb_set_led_matrix_unpack(
    struct uwrt_mars_rover_can_pdb_set_led_matrix_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->pdb_led_matrix_state = unpack_right_shift_u8(src_p[0], 0u, 0x07u);

    return (0);
}

uint8_t uwrt_mars_rover_can_pdb_set_led_matrix_pdb_led_matrix_state_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_set_led_matrix_pdb_led_matrix_state_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_set_led_matrix_pdb_led_matrix_state_is_in_range(uint8_t value)
{
    return (value <= 6u);
}

int uwrt_mars_rover_can_pdb_report_faults_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_pdb_report_faults_t *src_p,
    size_t size)
{
    if (size < 2u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 2);

    dst_p[0] |= pack_left_shift_u8(src_p->pdb_jetson_status, 0u, 0x03u);
    dst_p[0] |= pack_left_shift_u8(src_p->pdb_arm_power_status, 2u, 0x0cu);
    dst_p[0] |= pack_left_shift_u8(src_p->pdb_science_power_status, 4u, 0x30u);
    dst_p[0] |= pack_left_shift_u8(src_p->pdb_gimbal_power_status, 6u, 0xc0u);
    dst_p[1] |= pack_left_shift_u8(src_p->pdb_vbat_rail_status, 0u, 0x03u);
    dst_p[1] |= pack_left_shift_u8(src_p->pdb_17_v_rail_status, 2u, 0x0cu);
    dst_p[1] |= pack_left_shift_u8(src_p->pdb_5_v_rail_status, 4u, 0x30u);

    return (2);
}

int uwrt_mars_rover_can_pdb_report_faults_unpack(
    struct uwrt_mars_rover_can_pdb_report_faults_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 2u) {
        return (-EINVAL);
    }

    dst_p->pdb_jetson_status = unpack_right_shift_u8(src_p[0], 0u, 0x03u);
    dst_p->pdb_arm_power_status = unpack_right_shift_u8(src_p[0], 2u, 0x0cu);
    dst_p->pdb_science_power_status = unpack_right_shift_u8(src_p[0], 4u, 0x30u);
    dst_p->pdb_gimbal_power_status = unpack_right_shift_u8(src_p[0], 6u, 0xc0u);
    dst_p->pdb_vbat_rail_status = unpack_right_shift_u8(src_p[1], 0u, 0x03u);
    dst_p->pdb_17_v_rail_status = unpack_right_shift_u8(src_p[1], 2u, 0x0cu);
    dst_p->pdb_5_v_rail_status = unpack_right_shift_u8(src_p[1], 4u, 0x30u);

    return (0);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_jetson_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_arm_power_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_science_power_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_gimbal_power_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_vbat_rail_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_17_v_rail_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

uint8_t uwrt_mars_rover_can_pdb_report_faults_pdb_5_v_rail_status_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_faults_pdb_5_v_rail_status_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_faults_pdb_5_v_rail_status_is_in_range(uint8_t value)
{
    return (value <= 2u);
}

int uwrt_mars_rover_can_pdb_report_ack_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_pdb_report_ack_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->pdb_ack, 0u, 0xffu);

    return (1);
}

int uwrt_mars_rover_can_pdb_report_ack_unpack(
    struct uwrt_mars_rover_can_pdb_report_ack_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->pdb_ack = unpack_right_shift_u8(src_p[0], 0u, 0xffu);

    return (0);
}

uint8_t uwrt_mars_rover_can_pdb_report_ack_pdb_ack_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_pdb_report_ack_pdb_ack_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_pdb_report_ack_pdb_ack_is_in_range(uint8_t value)
{
    return (value <= 254u);
}

int uwrt_mars_rover_can_common_switch_can_bus_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_common_switch_can_bus_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 1);

    dst_p[0] |= pack_left_shift_u8(src_p->common_can_bus_id, 0u, 0x03u);

    return (1);
}

int uwrt_mars_rover_can_common_switch_can_bus_unpack(
    struct uwrt_mars_rover_can_common_switch_can_bus_t *dst_p,
    const uint8_t *src_p,
    size_t size)
{
    if (size < 1u) {
        return (-EINVAL);
    }

    dst_p->common_can_bus_id = unpack_right_shift_u8(src_p[0], 0u, 0x03u);

    return (0);
}

uint8_t uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_encode(double value)
{
    return (uint8_t)(value);
}

double uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_decode(uint8_t value)
{
    return ((double)value);
}

bool uwrt_mars_rover_can_common_switch_can_bus_common_can_bus_id_is_in_range(uint8_t value)
{
    return (value <= 2u);
}
