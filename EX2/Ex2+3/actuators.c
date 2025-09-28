/**
 * @file actuators.c
 * @brief Cài đặt các hàm điều khiển bơm, LED và báo cáo trạng thái.
 */

#include <stdio.h>
#include "actuators.h"
#include "sensors.h"

/// Biến toàn cục cấu hình hệ thống
SystemConfig system_config = {30, 60, 5, MODE_AUTO};
/// Trạng thái bơm
PumpState pump_state = PUMP_OFF;
/// Trạng thái LED
LedState led_state   = LED_NORMAL;

/**
 * @brief Khởi tạo hệ thống.
 */
void init_system(void) {
    pump_state = PUMP_OFF;
    led_state  = LED_NORMAL;
    printf("[INIT] System initialized. Mode: AUTO\n");
}

/**
 * @brief Bật bơm nước.
 */
void turn_pump_on(void) {
    pump_state = PUMP_ON;
    led_state  = LED_WATERING;
    printf("[PUMP] Pump ON\n");
}

/**
 * @brief Tắt bơm nước.
 */
void turn_pump_off(void) {
    pump_state = PUMP_OFF;
    led_state  = LED_NORMAL;
    printf("[PUMP] Pump OFF\n");
}

/**
 * @brief Cập nhật trạng thái LED.
 */
void update_led_status(void) {
    switch (led_state) {
        case LED_NORMAL:             printf("[LED] Green (Normal)\n"); break;
        case LED_WATERING:           printf("[LED] Yellow (Watering)\n"); break;
        case LED_LOW_MOISTURE_ALERT: printf("[LED] Blue (Low Moisture)\n"); break;
        case LED_ERROR:              printf("[LED] Red (Error)\n"); break;
    }
}

/**
 * @brief In báo cáo trạng thái hệ thống.
 * @param sensor_data Dữ liệu cảm biến cần hiển thị.
 */
void report_status(const void *sensor_data) {
    const SensorData *data = (const SensorData *)sensor_data;
    printf("[STATUS] Soil Moisture: %d%% | Temp: %d°C | Mode: %s | Pump: %s\n",
           data->soil_moisture,
           data->temperature,
           system_config.mode == MODE_AUTO ? "AUTO" : "MANUAL",
           pump_state == PUMP_ON ? "ON" : "OFF");
}
