#include <stdio.h>
#include <conio.h>
main() 
{
    float p, kg;

    printf("�������� ���� �� ������ � ����������.\n");
    printf("������� ��� � ������ -> ");
    
    scanf("%f", &p);
    kg=p/2.20462;
    
    printf("%.2f ������ - ��� %.2f ��\n", p, kg);
    printf("\n��� ���������� ������� <Enter>");
    getch();

}

