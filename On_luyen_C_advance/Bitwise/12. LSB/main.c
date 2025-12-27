/**
 * @file main.c
 * @author nguyen sy hung
 * @brief : chương trình hướng dẫn tìm bit có trọng số nhỏ nhất (LSB)
 * bằng toán tử n & (-n) hoặc vòng lặp dịch bit
 *  
 * 
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <stdio.h>
 #include <stdint.h>
/**
 * @brief hàm in 8 bit của 1 biến
 * 
 * @param value 
 */
 void print_bit(uint8_t value){
    printf("x: 0bx");
    for(int i = 7 ; i >= 0 ; i--){
        printf("%d",(value >> i) & 1 ) ;
    }
    printf("\n");
}
/**
 * @brief vòng lặp tìm LSB
 * 
 * @param n 
 * @return int 
 */
int lsb_pos(int n) {
    if (n == 0) return -1; // không có bit nào được set
    int pos = 0;
    while ((n & 1) == 0) { // kiểm tra bit phải nhất
        n >>= 1;           // dịch phải
        pos++;
    }
    return pos;
}

int main(){
    /*tim bit co trong so nho nhat LSB*/
    int a = 19 ;
    print_bit(a);
    /*1. su dung vong lap*/
    printf("LSB cua %d la: %d\n", a ,lsb_pos(a));
    /*2. su dung n & (-n)*/
    print_bit((a & (-a)));
}