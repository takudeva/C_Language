#include <stdio.h>

int main(void)
{
    int n;

    printf("整数を入力せよ："); scanf("%d", &n);

    if (n % 5)
        puts("その数は５で割り切れません。");
    
    return 0;
}