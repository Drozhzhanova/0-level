#include <stdio.h>

main() 
{
    int duration, dayOfWeek;
    float cost;

    printf("���������� ��������� ��������� �� ��������.\n");
    printf("������� �������� ������:\n");

    printf("������������ ��������� (����� ���������� �����) -> ");
    scanf("%d", &duration);

    printf("���� ������ (1-�����������,...7-�����������) -> ");
    
    scanf("%d", &dayOfWeek);

    cost = duration *1.5; 

    if (dayOfWeek == 6 || dayOfWeek == 7) 
	{
        cost = 0.8*(duration *1.5);
        printf("��������������� ������ 20%.\n");
    }
    
    printf("��������� ���������: %.2f ���.\n", cost);

    return 0;
}
