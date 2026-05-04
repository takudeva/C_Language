#include <stdio.h>

int main(void)
{
    int len;

    puts("右上直角三角形を表示します。");
    printf("短辺："); scanf("%d", &len);

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j < i; j++)
            putchar(' ');
        for (int j = 0; j <= len - i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}