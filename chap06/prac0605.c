#include <stdio.h>

int sumup(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;
    printf("整数を入力："); scanf("%d", &n);
    printf("1から%dまでの和は%d\n", n, sumup(n));
    return 0;
}