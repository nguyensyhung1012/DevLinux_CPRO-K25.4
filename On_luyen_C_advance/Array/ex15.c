#include <stdio.h>

#define MAX 100

int main() {
    int n, a[MAX], sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += a[i];
        }
    }

    printf("Tong cac phan tu o vi tri chan = %d\n", sum);
    return 0;
}
