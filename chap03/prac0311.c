#include <stdio.h>

int main(void)
{
    int A, B;

    puts("二つの整数を入力せよ。");
    printf("整数A：");  scanf("%d", &A);
    printf("整数B：");  scanf("%d", &B);
 
    if (A - B >= 11 || B - A >= 11)
        puts("それらの差は11以上です。");
    else
        puts("それらの差は10以下です。");
        
    return 0;
}