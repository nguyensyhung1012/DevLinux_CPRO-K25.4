/**
 * @file config.h
 * @brief Defines configuration constants, enums, and main structs for the SPWS system.
 */

#ifndef CONFIG_H
#define CONFIG_H

/**
 * @enum SystemMode
 * @brief Operating modes of the system.
 */
typedef enum {
    MODE_AUTO,   
    MODE_MANUAL  
} SystemMode;

/**
 * @enum PumpState
 * @brief Water pump operation states.
 */
typedef enum {
    PUMP_OFF,  
    PUMP_ON    
} PumpState;

/**
 * @enum LedState
 * @brief LED indicator states.
 */
typedef enum {
    LED_NORMAL,             ///< Green: System operating normally
    LED_WATERING,           ///< Yellow: Watering in progress
    LED_LOW_MOISTURE_ALERT, ///< Blue: Low moisture warning
    LED_ERROR               ///< Red: System error
} LedState;

/**
 * @struct SystemConfig
 * @brief Configuration parameters of the watering system.
 */
typedef struct {
    int moisture_min;      ///< Minimum soil moisture threshold to start watering
    int moisture_max;      ///< Maximum soil moisture threshold to stop watering
    int max_watering_time; ///< Maximum watering time (simulated as loop cycles)
    SystemMode mode;       ///< Current system mode (AUTO or MANUAL)
} SystemConfig;

/// Global system configuration variable
extern SystemConfig system_config;

#endif // CONFIG_H
