#include <stdio.h>

main() 
{
    float sum;
    float discount1 = 0.03; // 3% discount for sum > 500
    float discount2 = 0.05; // 5% discount for sum > 1000

    printf("Вычисление стоимости покупки с учетом скидки\n");
    printf("Введите сумму покупки и нажмите <Enter>\n");
    scanf("%f", &sum);

    if (sum > 1000) {
        float discountedsum = sum - (sum * discount2);
        printf("Вам предоставляется скидка 5%%\n");
        printf("Сумма с учетом скидки: %.2f руб.\n", discountedsum);
    } else if (sum > 500) {
        float discountedsum = sum - (sum * discount1);
        printf("Вам предоставляется скидка 3%%\n");
        printf("Сумма с учетом скидки: %.1f руб.\n", discountedsum);
    } else {
        printf("Сумма покупки: %.1f руб.\n", sum);
    }

    return 0;
}
