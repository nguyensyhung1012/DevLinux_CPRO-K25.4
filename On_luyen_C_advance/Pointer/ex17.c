/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Viết chương trình dùng con trỏ hàm để mô phỏng máy tính đơn giản.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return a/b;}

int main() {
    int (*f[])(int,int)={add,sub,mul,divi};
    int c;
    scanf("%d",&c);
    printf("%d\n", f[c](10,5));
    return 0;
}
