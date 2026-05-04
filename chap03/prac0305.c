#include <stdio.h>

int main(void)
{
    int n;

    printf("整数を入力せよ："); scanf("%d", &n);
    printf("n > 0 の真偽は%d\n", n > 0);
    printf("n == 0 の真偽は%d\n", n == 0);

    return 0;
}