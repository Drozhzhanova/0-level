#include <stdio.h>

main() 
{
    float sum;
    float discount1 = 0.03; // 3% discount for sum > 500
    float discount2 = 0.05; // 5% discount for sum > 1000

    printf("���������� ��������� ������� � ������ ������\n");
    printf("������� ����� ������� � ������� <Enter>\n");
    scanf("%f", &sum);

    if (sum > 1000) {
        float discountedsum = sum - (sum * discount2);
        printf("��� ��������������� ������ 5%%\n");
        printf("����� � ������ ������: %.2f ���.\n", discountedsum);
    } else if (sum > 500) {
        float discountedsum = sum - (sum * discount1);
        printf("��� ��������������� ������ 3%%\n");
        printf("����� � ������ ������: %.1f ���.\n", discountedsum);
    } else {
        printf("����� �������: %.1f ���.\n", sum);
    }

    return 0;
}
