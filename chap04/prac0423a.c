#include <stdio.h>

int main(void)
{
    int len;

    puts("左上直角三角形を表示します。");
    printf("短辺："); scanf("%d", &len);

    for (int i = len; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}