#include <stdio.h>

int main(void)
{
    int no;
    puts("下向き数字ピラミッドを作ります。");
    printf("何段ですか："); scanf("%d", &no);

    for (int i = 1; i <= no; i++) {
        for (int j = 1; j < i; j++)
            putchar(' ');
        for (int j = 1; j <= 2 * (no - i) + 1; j++)
            printf("%d", i % 10);
        for (int j = 1; j < i; j++)
            putchar(' ');
        putchar('\n'); 
    }

    return 0;
}