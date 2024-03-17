#include <stdio.h>

int main() 
{
    int d, t, Y, c, day, day_of_week;

    printf("Введите число месяца (d): ");
    scanf("%d", &d);
    printf("Введите номер месяца (t): ");
    scanf("%d", &t);
    printf("Введите номер года в столетии (Y): ");
    scanf("%d", &Y);
    printf("Введите количество столетий (c): ");
    scanf("%d", &c);

    day_of_week = (d +(13*t-1)/5+ Y + Y/4 + c/4 - 2*c + 777) % 7;

    if (day_of_week < 0) {
        day_of_week += 7;
    }

    switch (day_of_week) {
        case 1:
            printf("Понедельник\n");
            break;
        case 2:
            printf("Вторник\n");
            break;
        case 3:
            printf("Среда\n");
            break;
        case 4:
            printf("Четверг\n");
            break;
        case 5:
            printf("Пятница\n");
            break;
        case 6:
            printf("Суббота\n");
            break;
        case 0:
            printf("Воскресенье\n");
            break;
        default:
            printf("Ошибка в расчете\n");
            return 1;
    }

    return 0;
}

