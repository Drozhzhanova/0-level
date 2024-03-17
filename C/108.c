#include <stdio.h>

int main() {
    int p, sum_even = 0;

    printf("Вычисление суммы четных положительных чисел.\n");
    printf("Введите количество суммируемых чисел и нажмите <Enter> ");
    scanf("%d", &p);

    sum_even = p * (p + 1);

    printf("Сумма первых %d положительных четных чисел равна %d\n", p, sum_even);

    return 0;
}

