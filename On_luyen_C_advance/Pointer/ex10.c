/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ để sao chép chuỗi (không dùng strcpy).
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    char src[] = "Hello";
    char dst[20];
    char *p = src, *q = dst;

    while ((*q++ = *p++) != '\0');

    printf("%s\n", dst);
    return 0;
}
