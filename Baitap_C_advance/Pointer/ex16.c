/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Dùng hàm con trỏ để chọn phép tính (+,-,*,/).
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
    int (*op[])(int,int) = {add,sub,mul,divi};
    int x=10,y=5,choice=2;

    printf("%d\n", op[choice](x,y));
    return 0;
}
