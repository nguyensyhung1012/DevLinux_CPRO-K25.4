/**
 * @file ex1.c
 * @author nguyen sy hung  
 * @brief Triển khai linked list cơ bản bằng con trỏ.
 * @version 0.1
 * @date 2025-12-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));

    n1->data = 1;
    n1->next = n2;
    n2->data = 2;
    n2->next = NULL;

    Node *p = n1;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}
