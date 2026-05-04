#include <stdio.h>

int main(void)
{
    int x = 57;         // xはint型の変数（57で初期化）
    int y = x + 12;     // yはint型の変数（x + 12で初期化）

    printf("xの値は%dです。\n", x);
    printf("yの値は%dです。\n", y);

    return 0;
}