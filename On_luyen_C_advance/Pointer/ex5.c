/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief In kích thước kiểu dữ liệu thông qua con trỏ void.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    int x;
    void *p = &x;

    printf("Size of int = %lu\n", sizeof(*(int*)p));
    return 0;
}
