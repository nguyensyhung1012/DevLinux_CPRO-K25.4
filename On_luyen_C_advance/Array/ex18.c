#include <stdio.h>

int main() {
    int a[3][3], ok = 1;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (a[i][j] != a[j][i])
                ok = 0;

    if (ok)
        printf("Ma tran doi xung\n");
    else
        printf("Ma tran khong doi xung\n");

    return 0;
}
