/**
 * @file main.c
 * @author nguyen sy hung
 * @brief chương trình hướng dẫn kiểm tra 1 số có phải lũy thừa của 2 hay không
 * bằng cách sử dụng toán tử n & ( n- 1) hoặc vòng lặp  
 * @version 0.1
 * @date 2025-10-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

/**
 * @brief vòng lặp kiểm tra số có phải là 
 * lũy thừa của 2 không
 * 
 * @param n 
 * @return int 
 */
int isPowerOfTwo(unsigned int n) {
    /* 0 không phải là lũy thừa của 2 */
    if (n == 0) return 0;       
    while (n % 2 == 0) {
        n /= 2;
    }
    /*nếu n là lũy thừa của 2 thì sẽ trả về n = 1 */
    return n;
}
int main(){
    int c = 16;
    /*1. sử dụng vòng lặp để kiểm tra*/
    if(isPowerOfTwo(c)){
        printf("%d la luy thua cua 2\n",c);
    }else{
       printf("%d khong phai la luy thua cua 2\n", c); 
    }
    
    /*2. sử dụng n & (n-1) == 0*/
    if((c & (c -1)) == 0){
        printf("%d la luy thua cua 2\n",c);
    }else{
        printf("%d khong phai la luy thua cua 2\n", c); 
    }

}
