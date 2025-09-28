/**
 * @file watering_logic.c
 * @brief Cài đặt thuật toán điều khiển tưới tự động dựa vào cảm biến.
 */

#include <stdio.h>
#include "watering_logic.h"
#include "config.h"
#include "actuators.h"

/// Bộ đếm thời gian tưới (giả lập theo số vòng lặp)
static int watering_timer = 0;

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
