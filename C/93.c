#include <stdio.h>

main() 
{
    int num;

    printf("������� ����� ����� � ������� <Enter>\n");
    scanf("%d", &num);

    if (num % 3 == 0) 
	{
        printf("����� %d ������ �� ��� �������.\n", num);
    }  
	else 
	{
        printf("����� %d ������ �� ��� �� �������.\n", num);
    }

    return 0;
}
