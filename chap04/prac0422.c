#include <stdio.h>

int main(void)
{
    int len1, len2;

    puts("長方形を表示します。");
    printf("一辺(その1)："); scanf("%d", &len1);
    printf("一辺(その2)："); scanf("%d", &len2);

    int width = len1 > len2 ? len1 : len2;
    int height = len1 < len2 ? len1 : len2;
    
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}