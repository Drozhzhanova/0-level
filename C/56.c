// ���������� ��������� �������
#include <stdio.h>
#include <conio.h>
main()
{
   float kar,tetr; // ���� ��������� � �������
   int nk,nt;// ���������� �������� � ����������
   float summ;// ��������� ������� 
   printf("\n���������� ��������� �������.\n");
   printf("������� �������� ������:\n");
   printf("���� ������� (���.) -> ");
   scanf("%f", &tetr);
   printf("���������� �������� -> ");
   scanf("%i", &nt);
   printf("���� ��������� (���.) -> ");
   scanf("%f", &kar);
   printf("���������� ���������� -> ");
   scanf("%i", &nk);
   summ=tetr*nt + kar*nk;
   printf("\n��������� �������: %6.2f ���.\n", summ);
   printf("\n��� ���������� ������� <Enter>");
   getch();
}
