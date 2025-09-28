/**
 * @file buttons.c
 * @brief Cài đặt xử lý nút nhấn: chuyển đổi chế độ AUTO/MANUAL, tưới thủ công.
 *
 * File này mô phỏng hành vi nút nhấn bằng cách sinh sự kiện ngẫu nhiên
 * (sử dụng rand()). Trong ứng dụng thực tế, sự kiện này sẽ đến từ GPIO interrupt.
 */

#include <stdio.h>
#include <stdlib.h>   // rand()
#include "buttons.h"
#include "config.h"
#include "actuators.h"

/**
 * @brief Xử lý nút nhấn (giả lập).
 *
 * Hàm sẽ sinh ngẫu nhiên sự kiện nút nhấn để mô phỏng người dùng:
 * - Sự kiện 1: đổi chế độ AUTO ↔ MANUAL.
 * - Sự kiện 2: tưới thủ công (chỉ hoạt động ở MANUAL).
 *
 * Trong thực tế, phần này sẽ đọc trạng thái GPIO hoặc interrupt thay vì rand().
 */

 void delay_ms(volatile unsigned long int i){
    while(i--) ;
 }
void handle_buttons(void) {
    int random_event = rand() % 5;  // Xác suất thấp để sinh sự kiện (≈ 2%)

    // ----- Nút 1: đổi chế độ AUTO <-> MANUAL -----
    if (random_event == 1) {
        // Chuyển đổi chế độ
        system_config.mode = (system_config.mode == MODE_AUTO) ? MODE_MANUAL : MODE_AUTO;
        printf("[BUTTON] Mode switched to %s\n",
               system_config.mode == MODE_AUTO ? "AUTO" : "MANUAL");

        // Nếu chuyển sang MANUAL thì đảm bảo bơm đang tắt
        if (system_config.mode == MODE_MANUAL) {
            turn_pump_off();
        }
    }
    // ----- Nút 2: tưới thủ công (chỉ cho phép khi ở MANUAL) -----
    else if (random_event == 2 && system_config.mode == MODE_MANUAL) {
        printf("[BUTTON] Manual watering activated (10s)\n");

        // Bật bơm
        turn_pump_on();

        // Giữ bơm chạy trong 10 giây (giả lập delay bằng vòng lặp)
        for(int i = 10 ; i >= 0 ; i--){
        printf("countdown: %d\n" , i) ;
        delay_ms(800000000UL) ;
        }

        // Tắt bơm
        turn_pump_off();
        printf("[BUTTON] Manual watering finished\n");
    }
}
