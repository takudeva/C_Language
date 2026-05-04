#include <stdio.h>

#define INDEX 6

int main(void)
{
    int x[INDEX];

    for (int i = 0; i < INDEX; i++) {
        printf("x[%d]：", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < INDEX / 2 ; i++) {
        int t = x[i];
        x[i] = x[INDEX - 1 - i];
        x[INDEX - 1 - i] = t;
    }

    puts("反転しました。");
    for (int i = 0; i < INDEX; i++)
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}