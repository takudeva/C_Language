#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    // 変数noをdivideして出力することで２通りの値を出力することが可能
    printf("%d", no);
    printf("から7を減じると%dです。\n", no - 7);

    return 0;
}