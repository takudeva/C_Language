#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    // 変数noをdivideして出力することで２通りの値を出力することが可能
    printf("%d", no);
    printf("に13を加えると%dです。\n", no + 13);

    return 0;
}