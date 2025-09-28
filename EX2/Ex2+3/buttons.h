/**
 * @file buttons.h
 * @brief Định nghĩa hàm xử lý nút nhấn.
 */

#ifndef BUTTONS_H
#define BUTTONS_H

#define SWITCH_BUTTON 1
#define MANUAL_BUTTON 2
/**
 * @brief Xử lý sự kiện nút nhấn (giả lập bằng random).
 */
void handle_buttons(void);

void delay_ms(volatile unsigned long int i) ;
#endif // BUTTONS_H
