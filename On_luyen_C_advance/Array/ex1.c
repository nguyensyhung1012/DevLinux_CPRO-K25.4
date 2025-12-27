/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief dùng vòng lặp for và biến sum, nhập 5 số nguyên và in tổng
 * @version 0.1
 * @date 2025-11-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <stdio.h>

 int main(){
    int sum = 0  ; 
    int arr[5] = {0};
    for(int i = 0 ; i < 5 ; i++)
    {
        printf(" nhap so thu %d : " , i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0 ; i< 5 ; ++i)
    {
        sum += arr[i];
    }
    printf("sum: %d", sum);
 }