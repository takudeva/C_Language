#include <stdio.h>

int main(void)
{
    int a[4] = {
        1868,
        1912,
        1926,
        1989,
    };

    int b[] = {1, 2, 3};

    int c[5] = {1, 2};

    int d[5] = {0};

    int x[5];

    for (int i = 0; i < 4; i++)
        printf("a[%d] = %d\n", i, a[i]);
    putchar('\n');
    for (int i = 0; i < 3; i++)
        printf("b[%d] = %d\n", i, b[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("c[%d] = %d\n", i, c[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("d[%d] = %d\n", i, d[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("x[%d] = %d\n", i, x[i]);
    putchar('\n');

    return 0;
}