#include <stdio.h>

int main(void)
{
    int n;

    printf("整数を入力せよ："); scanf("%d", &n);
    if (n >= 0)
        printf("絶対値は%dです。\n", n);
    else
        printf("絶対値は%dです。\n", -n);

    return 0;
}