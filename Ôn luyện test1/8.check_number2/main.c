/**
 * @file main.c
 * @author nguyen sy hung
 * @brief : chương trình kiểm tra 1 số chẵn hay lẻ, bằng cách kiểm tra 
 * bit cuối của biến, (bằng 1 là lẻ , bằng 0 là chẳn)
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <stdio.h>

 int main(){
    int x = 10 ; 
    if(x & 1){
        printf("%d la so le", x);
    }else{
        printf("%d la so chan", x); 
    }
 }