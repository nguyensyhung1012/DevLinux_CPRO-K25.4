/**
 * @file sensors.c
 * @brief Cài đặt hàm giả lập đọc dữ liệu cảm biến.
 */

#include <stdlib.h>
#include "sensors.h"

/**
 * @brief Giả lập đọc dữ liệu cảm biến bằng số ngẫu nhiên.
 * @return Cấu trúc SensorData chứa độ ẩm và nhiệt độ.
 */
SensorData read_sensors(void) {
    SensorData data;
    data.soil_moisture = rand() % 101;       // 0 - 100 %
    data.temperature   = (rand() % 15) + 20; // 20 - 34 °C
    return data;
}
