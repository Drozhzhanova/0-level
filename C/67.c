#include <stdio.h>
#include <conio.h>
main() 
{
    float r,h,v;//������,������,�����
    
    printf("���������� ������ ��������.\n");
    printf("������� �������� ������:\n");
    
    printf("������ ��������� (��) -> ");
    scanf("%f", &r);
    
    printf("������ �������� (��) -> ");
    scanf("%f", &h);
    
    v=3.1415926*r*r*h;
    
    printf("����� ��������: %.2f ��.���.\n", v);
    printf("��� ���������� ������� <Enter>");
    getch();
}

