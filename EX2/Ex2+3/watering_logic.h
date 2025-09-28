/**
 * @file watering_logic.h
 * @brief Định nghĩa hàm xử lý logic tưới tự động.
 */

#ifndef WATERING_LOGIC_H
#define WATERING_LOGIC_H

#include "sensors.h"

/**
 * @brief Xử lý logic tưới cây trong chế độ AUTO.
 * @param data Con trỏ tới dữ liệu cảm biến.
 */
void process_watering_logic(const SensorData *data);

#endif // WATERING_LOGIC_H
