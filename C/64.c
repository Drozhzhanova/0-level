//���������� ���������� �� �����
#include <stdio.h>
#include <conio.h>
main()
{
   float m,l ; //������� ����� � ���������� ����� ������� � �����������
   float R;//���������� ����� ����������� ��������
   printf("\n���������� ���������� ����� ���������� ��������.\n");
   printf("������� �������� ������:\n");
   printf("������� ����� (���������� ��. � ����� ��.) -> ");
   scanf("%f",&m);
   printf ("���������� ����� �������,������������� ��������� ������(��) -> ");
   scanf("%f",&l);
   R=m*l;
   printf ("���������� ����� ���������� �������� %5.3f ��.\n",R);
   printf("��� ���������� ������� <Enter>");
   getch();
}