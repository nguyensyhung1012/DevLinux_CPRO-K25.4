/**
 * @file actuators.h
 * @brief Declarations for controlling pump, LED, and system status.
 */

#ifndef ACTUATORS_H
#define ACTUATORS_H

#include "config.h"

/// Minimum soil moisture threshold to start watering
#define MOISTURE_MIN       30      
/// Maximum soil moisture threshold to stop watering
#define MOISTURE_MAX       60      
/// Maximum watering time (simulation cycles)
#define MAX_WATERING_TIME  10       

/// Current state of the pump
extern PumpState pump_state;
/// Current state of the LED
extern LedState led_state;

/**
 * @brief Initialize the system actuators and states.
 */
void init_system(void);

/**
 * @brief Turn on the water pump.
 */
void turn_pump_on(void);

/**
 * @brief Turn off the water pump.
 */
void turn_pump_off(void);

/**
 * @brief Update the LED status according to system state.
 */
void update_led_status(void);

/**
 * @brief Print a system status report.
 * @param sensor_data Pointer to sensor data structure.
 */
void report_status(const void *sensor_data);

#endif // ACTUATORS_H
