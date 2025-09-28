/**
 * @file watering_logic.c
 * @brief Implements the automatic watering control algorithm based on sensor data.
 */

#include <stdio.h>
#include "watering_logic.h"
#include "config.h"
#include "actuators.h"

/// Watering duration counter (simulated as loop iterations)
static int watering_timer = 0;

/**
 * @brief Process the automatic watering logic.
 *
 * In AUTO mode, this function decides when to turn the pump on or off
 * based on soil moisture thresholds and maximum watering time.
 *
 * Logic:
 * - If the pump is OFF and soil moisture < minimum threshold → turn pump ON.
 * - If the pump is ON:
 *      - Stop when soil moisture ≥ maximum threshold, OR
 *      - Stop when maximum watering time is reached.
 *
 * @param data Pointer to sensor data structure.
 */
void process_watering_logic(const SensorData *data) {
    if (system_config.mode == MODE_AUTO) {
        if (pump_state == PUMP_OFF) {
            if (data->soil_moisture < system_config.moisture_min) {
                printf("[LOGIC] Soil moisture low (%d%%). Starting pump...\n", data->soil_moisture);
                turn_pump_on();
                watering_timer = 0;
            }
        } else {
            watering_timer++;
            if (data->soil_moisture >= system_config.moisture_max) {
                printf("[LOGIC] Soil moisture reached %d%%. Stopping pump.\n", data->soil_moisture);
                turn_pump_off();
            } else if (watering_timer >= system_config.max_watering_time) {
                printf("[LOGIC] Max watering time reached. Stopping pump.\n");
                turn_pump_off();
            }
        }
    }
}
