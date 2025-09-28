/**
 * @file sensors.h
 * @brief Định nghĩa struct và hàm đọc dữ liệu cảm biến.
 */

#ifndef SENSORS_H
#define SENSORS_H

#include "config.h"

/**
 * @struct SensorData
 * @brief Lưu trữ dữ liệu cảm biến độ ẩm đất và nhiệt độ.
 */
typedef struct {
    int soil_moisture;   ///< Độ ẩm đất (%)
    int temperature;     ///< Nhiệt độ môi trường (°C)
} SensorData;

/**
 * @brief Đọc dữ liệu từ cảm biến.
 * @return Giá trị đọc được của cảm biến.
 */
SensorData read_sensors(void);

#endif // SENSORS_H
