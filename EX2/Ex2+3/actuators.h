/**
 * @file actuators.h
 * @brief Định nghĩa các hàm điều khiển bơm, LED và hệ thống.
 */

#ifndef ACTUATORS_H
#define ACTUATORS_H

#include "config.h"

/// Trạng thái hiện tại của bơm
extern PumpState pump_state;
/// Trạng thái hiện tại của LED
extern LedState led_state;

/**
 * @brief Khởi tạo hệ thống.
 */
void init_system(void);

/**
 * @brief Bật bơm nước.
 */
void turn_pump_on(void);

/**
 * @brief Tắt bơm nước.
 */
void turn_pump_off(void);

/**
 * @brief Cập nhật trạng thái LED.
 */
void update_led_status(void);

/**
 * @brief In báo cáo trạng thái hệ thống.
 * @param sensor_data Dữ liệu cảm biến cần hiển thị.
 */
void report_status(const void *sensor_data);

#endif // ACTUATORS_H
