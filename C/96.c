#include <stdio.h>

main() 
{
    int month;

    printf("\n������� ����� ������ (����� �� 1 �� 12)->");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) 
	{
        if (month >= 3 && month <= 5) 
		{
            printf("�����\n");
        } 
		else if (month >= 6 && month <= 8) 
		{
            printf("����\n");
        } 
		else if (month >= 9 && month <= 11) 
		{
            printf("�����\n");
        } 
		else {
            printf("����\n");
        }
    } 
	else 
	{
        printf("������.����� ������ ���� � ��������� ���������\n");
    }

    return 0;
}
