#include <stdio.h>

int main(void)
{
    int A, B, C;

    puts("三つの整数を入力せよ。");
    printf("整数A：");  scanf("%d", &A);
    printf("整数B：");  scanf("%d", &B);
    printf("整数C：");  scanf("%d", &C);

    if (A == B && B == C)
        puts("三つの値は等しいです。");
    else if (A == B || B == C || C == A)
        puts("二つの値は等しいです。");
    else
        puts("三つの値は異なります。");

    return 0;
}