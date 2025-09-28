/**
 * @file main.c
 * @brief Chương trình chính mô phỏng hệ thống SPWS.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "config.h"
#include "sensors.h"
#include "watering_logic.h"
#include "actuators.h"
#include "buttons.h"

/**
 * @brief Hàm delay giả lập bằng vòng lặp for.
 * @param count Số vòng lặp để tạo trễ (chỉnh để nhanh/chậm).
 */
void delay_fake(unsigned long count) {
    volatile unsigned long i;
    for (i = 0; i < count; i++);
}

/**
 * @brief Hàm main - luồng chính của hệ thống.
 */
int main(void) {
    srand((unsigned)time(NULL));

    // Khởi tạo hệ thống
    init_system();

    printf("=== Smart Plant Watering System (SPWS) Demo ===\n");

    while (1) {
        // 1. Đọc cảm biến
        SensorData data = read_sensors();

        // 2. Xử lý nút nhấn
        handle_buttons();

        // 3. Logic tưới tự động
        process_watering_logic(&data);

        // 4. LED trạng thái
        update_led_status();

        // 5. Báo cáo
        report_status(&data);

        // Delay giả lập
        delay_fake(1000000000UL);
    }

    return 0;
}
