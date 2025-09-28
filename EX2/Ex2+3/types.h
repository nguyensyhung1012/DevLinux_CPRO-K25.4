// types.h
#ifndef SPWS_TYPES_H
#define SPWS_TYPES_H

#include <stdint.h>
#include <time.h>

/* Mode hệ thống */
typedef enum {
    MODE_AUTO = 0,
    MODE_MANUAL
} system_mode_t;

/* Pump state */
typedef enum {
    PUMP_OFF = 0,
    PUMP_ON
} pump_state_t;

/* LED state (mã nội bộ) */
typedef enum {
    LED_NORMAL = 0,
    LED_WATERING,
    LED_LOW_MOISTURE_ALERT,
    LED_ERROR
} led_state_t;

/* Cấu trúc lưu sensor readings */
typedef struct {
    float soil_moisture_percent; // 0..100
    float temperature_c;         // độ C
    time_t last_update;          // thời gian cập nhật
} sensors_data_t;

/* System configuration */
typedef struct {
    uint8_t min_moisture;        // %: start watering
    uint8_t max_moisture;        // %: stop watering
    uint32_t water_timeout_ms;   // max watering time per session (ms)
    uint32_t sensor_cycle_ms;    // sensor read cycle (ms)
    system_mode_t start_mode;    // MODE_AUTO or MODE_MANUAL
} system_config_t;

/* To share system runtime state */
typedef struct {
    system_mode_t mode;
    pump_state_t pump;
    led_state_t led;
    sensors_data_t sensors;
    system_config_t config;

    /* timers / bookkeeping */
    time_t last_sensor_check;
    uint64_t pump_start_time_ms;
    uint64_t last_manual_trigger_ms;
} system_state_t;

#endif // SPWS_TYPES_H
