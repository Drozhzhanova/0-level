#include <stdio.h>

main() 
{
    float sum;
    float discount = 0.1;

    printf("���������� ��������� ������� � ������ ������\n");
    printf("������� ����� ������� � ������� <Enter>\n");
    scanf("%f", &sum);

    if (sum > 1000) 
	{
        float discountedsum = sum - (sum * discount);
        printf("��� ��������������� ������ 10%%\n");
        printf("����� ������� � ������ ������:%.2f ���.\n", discountedsum);
    } 
	else 
	{
        printf("����� �������:%.2f ���.\n", sum);
    }

    
    
}
