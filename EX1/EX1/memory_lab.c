#include <stdio.h>
#include <stdlib.h>

/* 
 * Define a very large allocation size to intentionally cause
 * an out-of-memory condition for demonstration purposes.
 */
#define HUGE_ALLOCATION_SIZE 100000000000000000ULL


void demo_stack_overflow(void) {
    static int count = 1;
    printf("Hello Devlinux : %d\n", count);
    count++;
    demo_stack_overflow(); /* recursive call without termination */
}

void demo_memory_leak(void) {
    size_t allocation_count = 0;
    int *ptr = NULL;
    while ((ptr = malloc(100 * sizeof *ptr)) != NULL) {
        ++allocation_count;
        printf("Allocation count: %zu\n", allocation_count);
    }
    printf("Allocation failed after %zu successful allocations. (simulated leak)\n",
           allocation_count); /* no free(ptr) -> memory leak */
}


void demo_out_of_memory(void) {
    int* ptr = malloc(HUGE_ALLOCATION_SIZE * sizeof *ptr);
    if (ptr == NULL) {
        printf("Out of memory!!!\n");
    } else {
        free(ptr); /* free if allocation unexpectedly succeeded */
    }
}

int main(){

    demo_stack_overflow() ;
    demo_memory_leak() ;
    demo_out_of_memory();

    return 0 ;
}