#include <stdio.h>

main() 
{
    int dayOfWeek;

    printf("������� ����� ��� ������(1-�����������,...7-�����������)\n");
    scanf("%d", &dayOfWeek);

    if (dayOfWeek >= 1 && dayOfWeek <= 7) 
	{
       if (dayOfWeek >= 1 && dayOfWeek <= 5) 
		{
            printf("������� ����\n");
        } 
		else if (dayOfWeek = 6) 
		{
            printf("�������\n");
        } 
		else if (dayOfWeek = 7) 
		{
            printf("�����������\n");
        }
    }
	else 
	{
        printf("������\n");
    }

    return 0;
}
