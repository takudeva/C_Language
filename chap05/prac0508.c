#include <stdio.h>

#define NUMBER 120 // 人数の上限

int main(void)
{
    int num;                // 実際の人数
    int tensu[NUMBER];      // 学生の点数
    int bunpu[11] = {0};

    printf("人数を入力せよ：");

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a1~%dで入力せよ。：", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%d人の点数を入力せよ。\n", num);

    for (int i = 0; i < num; i++) {
        printf("%2d番：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a0〜100で入力せよ。：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    int max = bunpu[0];
    for (int i = 1; i < 11; i++)
        if (bunpu[i] > max)
            max = bunpu[i];

    for (int i = max; i > 0; i--) {
        for (int j = 0; j < 11; j++) {
            if (bunpu[j] >= i)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }

    for (int i = 0; i < 11; i++)
        printf("---");
    putchar('\n');

    for (int i = 0; i < 11; i++)
        printf(" %d", i * 10);
    putchar('\n');
    
    return 0;
}