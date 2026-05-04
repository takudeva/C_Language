#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数を入力せよ: ");
    scanf("%d", &no);

    int i = 0;
    while (i <= (no - 2))
        printf("%d ", i+=2);
    printf("\n");

    return 0;
}