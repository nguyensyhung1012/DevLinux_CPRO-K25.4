/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng con trỏ để đảo ngược chuỗi.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDE";
    char *l = s;
    char *r = s + strlen(s) - 1;

    while (l < r) {
        char t = *l;
        *l = *r;
        *r = t;
        l++; r--;
    }

    printf("%s\n", s);
    return 0;
}
