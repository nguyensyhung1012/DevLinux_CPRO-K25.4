/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief So sánh địa chỉ của hai con trỏ trong cùng mảng.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    int a[5];
    int *p1 = &a[1];
    int *p2 = &a[3];

    if (p1 < p2)
        printf("p1 < p2\n");
    else
        printf("p1 >= p2\n");

    return 0;
}
