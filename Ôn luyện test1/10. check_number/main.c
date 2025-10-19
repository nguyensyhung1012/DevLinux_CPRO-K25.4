/**
 * @file main.c
 * @author nguyen sy hung
 * @brief : chương trình hướng dẫn kiểm tra 2 số bằng nhau mà không dùng 
 * toán tử so sánh bằng cách sử dụng toán tử ^ 
 * 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <stdio.h>

 int main(){
    int x = 10 ; 
    int y = 10 ;
    if((x^y) == 0){
       printf("x = y\n");
    }else{
       printf("x # y\n"); 
    }
    
 }