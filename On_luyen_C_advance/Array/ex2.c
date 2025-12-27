/**
 * @file ex2.c
 * @author nguyen sy hung 
 * @brief tìm giá trị lớn nhất trong mảng 
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

 int main(){
    int arr[10] = {0,20,4,39,49,53,48,99,22,33};
    int max = arr[0];
    for(int i = 1 ; i < 10 ; i++ )
    {
       if(max < arr[i] )
       {
        max = arr[i];
       }else{
        /*do nothing*/
       }
    }
    printf("%d" , max);
 }