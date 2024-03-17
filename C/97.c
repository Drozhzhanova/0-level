#include <stdio.h>

main() 
{
    int dayOfWeek;

    printf("Введите номер дня недели(1-понедельник,...7-воскресенье)\n");
    scanf("%d", &dayOfWeek);

    if (dayOfWeek >= 1 && dayOfWeek <= 7) 
	{
       if (dayOfWeek >= 1 && dayOfWeek <= 5) 
		{
            printf("Рабочий день\n");
        } 
		else if (dayOfWeek = 6) 
		{
            printf("Суббота\n");
        } 
		else if (dayOfWeek = 7) 
		{
            printf("Воскресенье\n");
        }
    }
	else 
	{
        printf("Ошибка\n");
    }

    return 0;
}
