// ���������� ��������� �������
#include <stdio.h>
#include <conio.h>
main()
{
   float tetr,obl; // ���� ������� � �������
   int nk;// ���������� ����������
   float summ;// ��������� ������� 
   printf("\n���������� ��������� �������.\n");
   printf("������� �������� ������:\n");
   printf("���� ������� (���.) -> ");
   scanf("%f", &tetr);
   printf("���� ������� (���.) -> ");
   scanf("%f", &obl);
   printf("���������� ���������� -> ");
   scanf("%i", &nk);
   summ = (tetr + obl)*nk ;
   printf("\n��������� �������: %6.2f ���.\n", summ);
   printf("\n��� ���������� ������� <Enter>");
   getch();
}
