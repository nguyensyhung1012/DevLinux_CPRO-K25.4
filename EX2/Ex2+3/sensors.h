/**
 * @file sensors.h
 * @brief Definitions for sensor data structures and sensor reading functions.
 */

#ifndef SENSORS_H
#define SENSORS_H

#include "config.h"

/**
 * @struct SensorData
 * @brief Stores soil moisture and ambient temperature readings.
 */
typedef struct {
    int soil_moisture;   /* Soil moisture percentage (%) */
    int temperature;     /* Ambient temperature (°C) */
} SensorData;

/**
 * @brief Read sensor data (soil moisture and temperature).
 * 
 * This function simulates reading sensor values. 
 * In a real application, it would interface with ADC/GPIO hardware.
 * 
 * @return SensorData structure containing current readings.
 */
SensorData read_sensors(void);

#endif // SENSORS_H
