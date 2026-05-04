#include <stdio.h>
#define N 4

int main(void) {
    int score[N];
    for (int i = 0; i < N; i++){
        printf("%d番：", i + 1); scanf("%d", &score[i]);
    }

    printf("{%d", score[0]);
    for (int i = 1; i < N; i++)
        printf(", %d", score[i]);
    printf("}\n");
    return 0;
}