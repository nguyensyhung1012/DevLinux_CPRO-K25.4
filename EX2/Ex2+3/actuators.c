/**
 * @file actuators.c
 * @brief Implementation of pump, LED, and system reporting functions.
 */

#include <stdio.h>
#include "actuators.h"
#include "sensors.h"

/// Global system configuration instance
SystemConfig system_config = {MOISTURE_MIN, MOISTURE_MAX, MAX_WATERING_TIME, MODE_AUTO};
/// Global pump state
PumpState pump_state = PUMP_OFF;
/// Global LED state
LedState led_state   = LED_NORMAL;

void init_system(void) {
    pump_state = PUMP_OFF;
    led_state  = LED_NORMAL;
    printf("[INIT] System initialized. Mode: AUTO\n");
}

void turn_pump_on(void) {
    pump_state = PUMP_ON;
    led_state  = LED_WATERING;
    printf("[PUMP] Pump ON\n");
}

void turn_pump_off(void) {
    pump_state = PUMP_OFF;
    led_state  = LED_NORMAL;
    printf("[PUMP] Pump OFF\n");
}

void update_led_status(void) {
    switch (led_state) {
        case LED_NORMAL:             
            printf("[LED] Green (Normal)\n"); 
            break;
        case LED_WATERING:           
            printf("[LED] Yellow (Watering)\n"); 
            break;
        case LED_LOW_MOISTURE_ALERT: 
            printf("[LED] Blue (Low Moisture)\n"); 
            break;
        case LED_ERROR:              
            printf("[LED] Red (Error)\n"); 
            break;
        default:
            printf("[LED] Unknown state\n");
            break;
    }
}

/**
 * @brief Print a system status report with sensor data.
 * 
 * @param sensor_data Pointer to SensorData structure containing current sensor readings.
 */
void report_status(const void *sensor_data) {
    const SensorData *data = (const SensorData *)sensor_data;
    printf("[STATUS] Soil Moisture: %d%% | Temp: %d°C | Mode: %s | Pump: %s\n",
           data->soil_moisture,
           data->temperature,
           system_config.mode == MODE_AUTO ? "AUTO" : "MANUAL",
           pump_state == PUMP_ON ? "ON" : "OFF");
}
