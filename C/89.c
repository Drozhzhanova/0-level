#include <stdio.h>

main() 
{
    int num1, num2;

    printf("������� � ����� ������ ��� ����� ����� � ������� <Enter>:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) 
	{
        printf("%d ������ %d\n", num1, num2);
    } 
	else if (num1 > num2) 
	{
        printf("%d ������ %d\n", num1, num2);
    } 
	else 
	{
        printf("����� �����\n");
    }

    return 0;
}
