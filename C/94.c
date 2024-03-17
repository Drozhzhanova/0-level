#include <stdio.h>

main() 
{
    int duration, dayOfWeek;
    float cost;

    printf("Вычисление стоимости разговора по телефону.\n");
    printf("Введите исходные данные:\n");

    printf("Длительность разговора (целое количество минут) -> ");
    scanf("%d", &duration);

    printf("День недели (1-понедельник,...7-воскресенье) -> ");
    
    scanf("%d", &dayOfWeek);

    cost = duration *1.5; 

    if (dayOfWeek == 6 || dayOfWeek == 7) 
	{
        cost = 0.8*(duration *1.5);
        printf("Предоставляется скидка 20%.\n");
    }
    
    printf("Стоимость разговора: %.2f руб.\n", cost);

    return 0;
}
