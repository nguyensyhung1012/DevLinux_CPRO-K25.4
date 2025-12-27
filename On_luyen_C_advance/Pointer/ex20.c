/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ void để viết hàm swap tổng quát cho mọi kiểu.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a, void *b, size_t size) {
    void *tmp = malloc(size);

    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);

    free(tmp);
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y, sizeof(int));
    printf("%d %d\n", x, y);
    return 0;
}

