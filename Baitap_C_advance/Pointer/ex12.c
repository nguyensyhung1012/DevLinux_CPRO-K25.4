/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Viết hàm trả về con trỏ trỏ tới phần tử lớn nhất trong mảng.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int* maxElement(int *a, int n) {
    int *max = a;
    for (int i = 1; i < n; i++)
        if (*(a+i) > *max)
            max = a + i;
    return max;
}

int main() {
    int a[] = {3,7,2,9,5};
    int *p = maxElement(a, 5);
    printf("Max = %d\n", *p);
    return 0;
}
