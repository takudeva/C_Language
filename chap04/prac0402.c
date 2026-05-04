#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    int max = a > b ? a : b;
    int min = a < b ? a : b;
    int sum = 0;

    int i = min;
    do {
        sum = sum + i;
        i = i + 1;
    } while (i <= max);

    printf("%d以上%d以下の全整数の和は%dです。\n", min, max, sum);

    return 0;
}