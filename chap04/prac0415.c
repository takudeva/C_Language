#include <stdio.h>

int main(void)
{
    int height_start;
    int height_end;
    int height_step;

    printf("何cmから："); scanf("%d", &height_start);
    printf("何cmまで："); scanf("%d", &height_end);
    printf("何cmごと："); scanf("%d", &height_step);

    for (int height = height_start; height <= height_end; height += height_step) {
        double standard_weight = (height - 100) * 0.9;
        printf("%dcm　%.2fkg\n", height, standard_weight);
    }
}