/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ để đếm số ký tự trong chuỗi.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;
    int count = 0;

    while (*p != '\0') {
        count++;
        p++;
    }

    printf("So ky tu = %d\n", count);
    return 0;
}
