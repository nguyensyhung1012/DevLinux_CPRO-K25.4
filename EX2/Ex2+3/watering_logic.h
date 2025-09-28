/**
 * @file watering_logic.h
 * @brief Defines the automatic watering logic interface.
 */

#ifndef WATERING_LOGIC_H
#define WATERING_LOGIC_H

#include "sensors.h"

/**
 * @brief Executes automatic watering logic based on sensor data.
 *
 * This function evaluates soil moisture and temperature values
 * and decides whether to turn the pump on or off in AUTO mode.
 *
 * @param data Pointer to sensor data structure.
 */
void process_watering_logic(const SensorData *data);

#endif // WATERING_LOGIC_H
