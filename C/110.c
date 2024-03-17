#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Вычисление частичной суммы ряда: 1 + 1/2 + 1/3 + ...\n");
    printf("Введите количество суммируемых членов ряда -> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Сумма первых %d членов ряда равна %.4f\n", n, sum);

    return 0;
}

