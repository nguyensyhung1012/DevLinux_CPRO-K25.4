#include <stdio.h>
#include <stdlib.h>

void stackoverflow(){
    static int i = 1 ;
    printf("Hello Devlinux : %d \n " , i );
    ++i ;
    return stackoverflow(); 
}


void Memory_leak(){
    int i = 0 ;
    static int count = 1 ; 
    while(i == 0){
        int* a = (int*)malloc(sizeof(int) * 100) ;
        printf("cap phat lan thu : %d \n" , count) ;
        count ++ ;
        if(a == NULL){
            printf("Memory leak!!!");
            i = 1 ;
        } 
    }
}

void Outof_Memory(){
    int* ptr = (int*) malloc(sizeof(int)*100000000000000000) ; 
    if(ptr == NULL){
        printf("Out of memory!!!") ; 
    }
}
int main(){

    stackoverflow() ;
   // Memory_leak() ;
   //Outof_Memory();
}