#include <stdio.h>

main() 
{
    int dayNumber;

    printf("Введите номер дня недели(от 1 до 7): ");
    scanf("%d", &dayNumber);

    switch(dayNumber) 
	{
        case 1:
            printf("День недли:Понедельник\n");
            break;
        case 2:
            printf("День недели:Вторник\n");
            break;
        case 3:
            printf("День недели:Среда\n");
            break;
        case 4:
            printf("День недели:Четверг\n");
            break;
        case 5:
            printf("День недели:Пятница\n");
            break;
        case 6:
            printf("День недели:Суббота\n");
            break;
        case 7:
            printf("День недели:Воскресенье\n");
            break;
        default:
            printf("Ошибка:неверные данные\n");
    }

    return 0;
}

