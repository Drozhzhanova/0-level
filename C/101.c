#include <stdio.h>

main() 
{
    int dayNumber;

    printf("������� ����� ��� ������(�� 1 �� 7): ");
    scanf("%d", &dayNumber);

    switch(dayNumber) 
	{
        case 1:
            printf("���� �����:�����������\n");
            break;
        case 2:
            printf("���� ������:�������\n");
            break;
        case 3:
            printf("���� ������:�����\n");
            break;
        case 4:
            printf("���� ������:�������\n");
            break;
        case 5:
            printf("���� ������:�������\n");
            break;
        case 6:
            printf("���� ������:�������\n");
            break;
        case 7:
            printf("���� ������:�����������\n");
            break;
        default:
            printf("������:�������� ������\n");
    }

    return 0;
}

