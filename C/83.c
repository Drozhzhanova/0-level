#include <stdio.h>

main() 
{
    float sum;
    float discount = 0.1;

    printf("Вычисление стоимости покупки с учётом скидки\n");
    printf("Введите сумму покупки и нажмите <Enter>\n");
    scanf("%f", &sum);

    if (sum > 1000) 
	{
        float discountedsum = sum - (sum * discount);
        printf("Вам предоставляется скидка 10%%\n");
        printf("Сумма покупки с учётом скидки:%.2f руб.\n", discountedsum);
    } 
	else 
	{
        printf("Сумма покупки:%.2f руб.\n", sum);
    }

    
    
}
