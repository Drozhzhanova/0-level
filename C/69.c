#include <stdio.h>
#include <conio.h>

main() 
{
    float l, w, h, v;//�����,������,������,�����
    
    printf("��������� ����� ���������������.\n");
    printf("������� � ����� ������ �����,������ � ������ ���������������(��).\n");
    printf ("����� ���������� ���������.");
	printf("����� ����� ���������� ����� ������� <Enter>.");
    printf("->");    
    scanf("%f %f %f", &l, &w, &h);
    
    v = l* w* h;
    
    printf("����� ���������������: %.2f %.2 %.2 ��.���.\n", v);
    printf("\n��� ���������� ������� <Enter>");
    getch();

}

