#include <stdio.h>

int main() 
{
    int d, t, Y, c, day, day_of_week;

    printf("������� ����� ������ (d): ");
    scanf("%d", &d);
    printf("������� ����� ������ (t): ");
    scanf("%d", &t);
    printf("������� ����� ���� � �������� (Y): ");
    scanf("%d", &Y);
    printf("������� ���������� �������� (c): ");
    scanf("%d", &c);

    day_of_week = (d +(13*t-1)/5+ Y + Y/4 + c/4 - 2*c + 777) % 7;

    if (day_of_week < 0) {
        day_of_week += 7;
    }

    switch (day_of_week) {
        case 1:
            printf("�����������\n");
            break;
        case 2:
            printf("�������\n");
            break;
        case 3:
            printf("�����\n");
            break;
        case 4:
            printf("�������\n");
            break;
        case 5:
            printf("�������\n");
            break;
        case 6:
            printf("�������\n");
            break;
        case 0:
            printf("�����������\n");
            break;
        default:
            printf("������ � �������\n");
            return 1;
    }

    return 0;
}

