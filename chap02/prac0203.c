#include <stdio.h>

int main(void)
{
    double num;

    printf("実数を入力せよ：");
    scanf("%lf", &num);

    printf("あなたは%fと入力しましたね。\n", num);

    return 0;
}