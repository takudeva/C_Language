#include <stdio.h>

int main(void) {
    int a[4][3];
    int b[3][4];
    int product[4][4] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 3; k++)
                product[i][j] += a[i][k] * b[k][j];
        }
    }

    puts("Product of matrices:");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%4d", product[i][j]);
        putchar('\n');
    }

    return 0;

}