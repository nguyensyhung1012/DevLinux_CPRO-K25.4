/**
 * @file main.c
 * @brief Entry point for the Smart Plant Watering System (SPWS) simulation.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "config.h"
#include "sensors.h"
#include "watering_logic.h"
#include "actuators.h"
#include "buttons.h"

/**
 * @brief Simulated delay function using a busy-wait loop.
 * 
 * @param count Number of iterations for delay (adjust to control speed).
 */
void delay_fake(unsigned long count) {
    volatile unsigned long i;
    for (i = 0; i < count; i++);
}

/**
 * @brief Main entry point of the SPWS simulation.
 *
 * Workflow:
 * 1. Initialize system components.
 * 2. Enter infinite loop:
 *    - Read sensor data.
 *    - Handle button input.
 *    - Process automatic watering logic.
 *    - Update LED indicators.
 *    - Print system status report.
 *    - Apply simulated delay.
 *
 * @return int Always returns 0 (never reached).
 */
int main(void) {
    srand((unsigned)time(NULL));

    // Initialize actuators and states
    init_system();

    printf("=== Smart Plant Watering System (SPWS) Demo ===\n");

    while (1) {
        // 1. Read sensor data
        SensorData data = read_sensors();

        // 2. Handle button events (manual control)
        handle_buttons();

        // 3. Process automatic watering logic
        process_watering_logic(&data);

        // 4. Update LED indicators
        update_led_status();

        // 5. Print system status report
        report_status(&data);

        // Simulated delay for demonstration
        delay_fake(1000000000UL);
    }

    return 0;
}
