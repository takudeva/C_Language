#include <stdio.h>
int cube(int x) {
    return x * x * x;
}

int main(void) {
    int x;
    printf("整数を入力："); scanf("%d", &x);
    printf("%dの3乗は%dです。\n", x, cube(x));
    return 0;
}