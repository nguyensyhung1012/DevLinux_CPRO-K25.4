/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Truyền con trỏ vào hàm để thay đổi giá trị biến gốc.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

void increase(int *x) {
    (*x)++;
}

int main() {
    int a = 5;
    increase(&a);
    printf("%d\n", a);
    return 0;
}
