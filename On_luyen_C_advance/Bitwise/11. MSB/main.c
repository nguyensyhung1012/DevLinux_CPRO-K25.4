/**
 * @file main.c
 * @author nguyen sy hung
 * @brief : chương trình hướng dẫn tìm bit có trọng số lớn nhất (MSB)
 * bằng log2(n) hoặc vòng lặp dịch bit
 *  
 * 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <stdio.h>
 #include <math.h>
/**
 * @brief hàm tìm MSB bằng vòng lặp
 * 
 * @param n 
 * @return int 
 */
 int msb_pos(unsigned int n) {
    if (n == 0) return -1;
    int pos = 0;
    while (n >>= 1) pos++;
    return pos;
}
/**
 * @brief hàm tìm MSB vằng log2(n)
 * 
 * @param n 
 * @return int 
 */
int msb_pos_log(unsigned int n) {
    if (n == 0) return -1;          
    return (int)floor(log2(n));     
}
int main(){
    int n = 10 ;
 /* tim bit co trong so lon nhat MSB*/
    /*1. su dung vong lap*/
    printf("MSB cua %d la: %d\n", n ,msb_pos(n));
    /*2. su dung log2(n)*/
    printf("MSB cua %d la: %d\n", n ,msb_pos_log(n));
}
