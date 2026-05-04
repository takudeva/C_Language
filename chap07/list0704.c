#include <stdio.h>
#include <limits.h>

int main(void) {
    int a,b,n;
    double x,y;

    printf("この処理系のchar型は%sです。\n", CHAR_MIN == 0 ? "符号なし" : "符号付き");
    printf("CHAR_BITS = %d\n", CHAR_BIT);
    putchar('\n');

    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(short) = %zu\n", sizeof(short));
    printf("sizeof(long) = %zu\n", sizeof(long));
    printf("sizeof(long long) = %zu\n", sizeof(long long));
    putchar('\n');

    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(double) = %zu\n", sizeof(double));
    putchar('\n');

    printf("sizeof(a) = %zu\n", sizeof(a));
    printf("sizeof(x) = %zu\n", sizeof(x));
    putchar('\n');

    printf("sizeof(a + b) = %zu\n", sizeof(a + b));
    printf("sizeof(a + y) = %zu\n", sizeof(a + y));
    printf("sizeof(x + y) = %zu\n", sizeof(x + y));
    putchar('\n');

    printf("sizeof 1 = %zu\n", sizeof 1);
    printf("sizeof+1 = %zu\n", sizeof+1);
    printf("sizeof-1 = %zu\n", sizeof-1);
    printf("sizeof(unsigned)-1 = %zu\n", sizeof(unsigned)-1);
    printf("sizeof(double)-1 = %zu\n", sizeof(double)-1);
    printf("sizeof((double)-1) = %zu\n", sizeof((double)-1));
    printf("sizeof n+2 = %zu\n", sizeof n+2);
    printf("sizeof(n+2) = %zu\n", sizeof(n+2));
    printf("sizeof(n+2.0) = %zu\n", sizeof(n+2.0));

    return 0;
}