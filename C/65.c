// ���������� ��������� ������� �� ���� � �������
#include <stdio.h>
#include <conio.h>
main ()
{
   float rast; // ���������� �� ����
   float potr; // ����������� ������� �� 100 ��. ����
   float cena; // ���� ������ ����� �������
   float summ; // ��������� ������� �� ���� � �������
   printf("\n��������� ������� �� ���� � �������\n");
   printf("���������� �� ���� (��) -> ");
   scanf("%f",&rast);
   printf("������ ������� (������ �� 100 ��.) -> ");
   scanf("%f",&potr);
   printf("���� ����� ������� (���.) -> ");
   scanf("%f",&cena);
   summ = 2 * potr/100 * rast * cena;
   printf("������� �� ���� � ������� ���������");
   printf (" � %6.2f py6.",summ) ;
   printf("\n\n��� ���������� ������� <Enter>");
   getch();
}
