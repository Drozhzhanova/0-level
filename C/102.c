#include <stdio.h>

int main() 
{
    int city_code;
    float duration, distance, price_per_minute, cost;

    printf("��� ������     | ���������� (��) | ���� �� ������ (���)\n");
    printf("---------------------------------------------\n");
    printf("    343        |       15         |        2.50\n");
    printf("    381        |       18         |        2.40\n");
    printf("    473        |       13         |        2.70\n");
    printf("    485        |       11         |        3.00\n");

    printf("������� ��� ������: ");
    scanf("%d", &city_code);
    printf("������� ������������ ��������� (� �������): ");
    scanf("%f", &duration);

    switch (city_code) {
        case 343:
            distance = 15;
            price_per_minute = 2.50;
            break;
        case 381:
            distance = 18;
            price_per_minute = 2.40;
            break;
        case 473:
            distance = 13;
            price_per_minute = 2.70;
            break;
        case 485:
            distance = 11;
            price_per_minute = 3.00;
            break;
        default:
            printf("������������ ��� ������\n");
            return 1;
    }

    cost = duration * price_per_minute;
    printf("��������� ���������: %.2f ������\n", cost);

    return 0;
}
