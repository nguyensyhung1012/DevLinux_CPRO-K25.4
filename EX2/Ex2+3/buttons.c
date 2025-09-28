/**
 * @file buttons.c
 * @brief Implements button handling: mode switching (AUTO/MANUAL) and manual watering.
 *
 * This file simulates button behavior using randomly generated events (via rand()).
 * In a real application, these events would typically come from GPIO interrupts.
 */

#include <stdio.h>
#include <stdlib.h>   // rand()
#include "buttons.h"
#include "config.h"
#include "actuators.h"

/**
 * @brief Simple delay function (busy-wait).
 *
 * @param i Loop counter to simulate delay in milliseconds.
 */
void delay_ms(volatile unsigned long int i) {
    while (i--);
}

/**
 * @brief Handle button events (simulation).
 *
 * The function randomly generates button events to simulate user actions:
 * - Event SWITCH_BUTTON: toggles system mode AUTO ↔ MANUAL.
 * - Event MANUAL_BUTTON: starts manual watering (only available in MANUAL mode).
 *
 * In a real system, this would be implemented using GPIO state reading
 * or hardware interrupts instead of random numbers.
 */
void handle_buttons(void) {
    int random_event = rand() % 5;  // Approx. 30% chance to trigger an event
    if (random_event == SWITCH_BUTTON) {
        // Toggle mode
        system_config.mode = (system_config.mode == MODE_AUTO) ? MODE_MANUAL : MODE_AUTO;
        printf("[BUTTON] Mode switched to %s\n",
               system_config.mode == MODE_AUTO ? "AUTO" : "MANUAL");

        // Ensure pump is off when switching to MANUAL mode
        if (system_config.mode == MODE_MANUAL) {
            turn_pump_off();
        }
    }
    else if (random_event == MANUAL_BUTTON && system_config.mode == MODE_MANUAL) {
        printf("[BUTTON] Manual watering activated (10s)\n");
        turn_pump_on();
        // Simulate pump running for 10 seconds with countdown
        for (int i = MAX_WATERING_TIME ; i >= 0; i--) {
            printf("Countdown: %d\n", i);
            delay_ms(800000000UL);
        }
        turn_pump_off();
        printf("[BUTTON] Manual watering finished\n");
    }
}
