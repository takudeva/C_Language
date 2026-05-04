#include <stdio.h>

int sqr(int n) {
    return n * n;
}

int pow4(int n) {
    return sqr(sqr(n));
}

int main(void) {
    int x;
    printf("整数を入力："); scanf("%d", &x);
    printf("%dの4乗は%dです。\n", x, pow4(x));
    return 0;
}