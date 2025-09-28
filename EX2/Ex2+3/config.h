/**
 * @file config.h
 * @brief Định nghĩa các cấu hình, enum và struct chính cho hệ thống SPWS.
 */

#ifndef CONFIG_H
#define CONFIG_H

/**
 * @enum SystemMode
 * @brief Các chế độ hoạt động của hệ thống.
 */
typedef enum {
    MODE_AUTO,   ///< Hệ thống tưới tự động
    MODE_MANUAL  ///< Hệ thống điều khiển thủ công
} SystemMode;

/**
 * @enum PumpState
 * @brief Trạng thái hoạt động của bơm nước.
 */
typedef enum {
    PUMP_OFF,  ///< Bơm tắt
    PUMP_ON    ///< Bơm đang bật
} PumpState;

/**
 * @enum LedState
 * @brief Trạng thái LED hiển thị.
 */
typedef enum {
    LED_NORMAL,             ///< Xanh lá: hệ thống bình thường
    LED_WATERING,           ///< Vàng: đang tưới
    LED_LOW_MOISTURE_ALERT, ///< Xanh dương: cảnh báo độ ẩm thấp
    LED_ERROR               ///< Đỏ: lỗi hệ thống
} LedState;

/**
 * @struct SystemConfig
 * @brief Cấu hình hoạt động của hệ thống tưới cây.
 */
typedef struct {
    int moisture_min;      ///< Ngưỡng độ ẩm tối thiểu để bắt đầu tưới
    int moisture_max;      ///< Ngưỡng độ ẩm tối đa để dừng tưới
    int max_watering_time; ///< Thời gian tưới tối đa (giả lập số vòng lặp)
    SystemMode mode;       ///< Chế độ hệ thống hiện tại (AUTO/MANUAL)
} SystemConfig;

/// Biến toàn cục cấu hình hệ thống
extern SystemConfig system_config;

#endif // CONFIG_H
