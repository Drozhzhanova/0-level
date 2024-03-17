#include <stdio.h>

main() 
{
    int month;

    printf("\nВведите номер месяца (число от 1 до 12)->");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) 
	{
        if (month >= 3 && month <= 5) 
		{
            printf("Весна\n");
        } 
		else if (month >= 6 && month <= 8) 
		{
            printf("Лето\n");
        } 
		else if (month >= 9 && month <= 11) 
		{
            printf("Осень\n");
        } 
		else {
            printf("Зима\n");
        }
    } 
	else 
	{
        printf("Ошибка.Число должно быть в указанном интервале\n");
    }

    return 0;
}
