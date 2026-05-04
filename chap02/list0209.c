#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);

    printf("それらの平均は%fです。\n", (a + b) / 2.0);

    return 0;
}