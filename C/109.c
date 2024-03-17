#include <stdio.h>

int main() 
{
    int p, sum_series = 0;

    
    printf("Вычисление частичной суммы ряда: 1, 3, 5, 7...\n");
    printf("Введите количество суммируемых членов ряда-> ");
    scanf("%d", &p);

    
    sum_series = p * p;

  
    printf("Сумма первых %d членов ряда равна %d\n", p, sum_series);

    return 0;
}

