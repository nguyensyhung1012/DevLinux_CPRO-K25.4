/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Tạo hàm nhập và in mảng bằng con trỏ.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

void input(int *p, int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", p + i);
}

void output(int *p, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(p + i));
}

int main() {
    int a[5];
    input(a, 5);
    output(a, 5);
    return 0;
}
