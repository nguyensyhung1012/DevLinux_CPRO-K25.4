/**
 * @file sensors.c
 * @brief Implementation of simulated sensor reading functions.
 */

#include <stdlib.h>
#include "sensors.h"

/// Minimum soil moisture percentage (%)
#define SOIL_MOISTURE_MIN   0
/// Maximum soil moisture percentage (%)
#define SOIL_MOISTURE_MAX   100

/// Minimum ambient temperature (°C)
#define TEMPERATURE_MIN     20
/// Maximum ambient temperature (°C)
#define TEMPERATURE_MAX     34

/**
 * @brief Simulate sensor data using random values.
 *
 * This function generates random soil moisture and temperature
 * values within predefined ranges using macros.  
 * It allows easy adjustments if sensor ranges change in the future.
 *
 * @return SensorData structure containing simulated readings.
 */
SensorData read_sensors(void) {
    SensorData data;
    data.soil_moisture = SOIL_MOISTURE_MIN +
                         (rand() % (SOIL_MOISTURE_MAX - SOIL_MOISTURE_MIN + 1)); /* random 0-100 %*/
    data.temperature   = TEMPERATURE_MIN +
                         (rand() % (TEMPERATURE_MAX - TEMPERATURE_MIN + 1));    /* random 20-34 (°C)*/
    return data;
}
