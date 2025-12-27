#include <stdio.h>

#define MAX 100

int main() {
    int n, a[MAX];
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i + 2 < n; i += 3) {
        int t = a[i];
        a[i] = a[i + 2];
        a[i + 2] = t;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
