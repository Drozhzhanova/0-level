#include <stdio.h>

int main() 
{
    int p, sum_series = 0;

    
    printf("���������� ��������� ����� ����: 1, 3, 5, 7...\n");
    printf("������� ���������� ����������� ������ ����-> ");
    scanf("%d", &p);

    
    sum_series = p * p;

  
    printf("����� ������ %d ������ ���� ����� %d\n", p, sum_series);

    return 0;
}

