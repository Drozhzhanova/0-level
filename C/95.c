#include <stdio.h>

main() 
{
    int height, weight, optimalWeight;

    printf("������� � ����� ������ ����� ������\n");
    printf("���� (��) � ��� (��), ����� ������� <Enter>\n");
    scanf("%d %d", &height, &weight);

    optimalWeight = height - 100;

    if (weight < optimalWeight) {
        printf("��� ���� ����������� �� %d ��.\n", optimalWeight - weight);
    } else if (weight > optimalWeight) {
        printf("��� ���� �������� �� %d ��.\n", weight - optimalWeight);
    } else {
        printf("��� ��� ���������.\n");
    }

    return 0;
}
