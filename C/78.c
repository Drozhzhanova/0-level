// ���������� ������� ������
#include <stdio.h>
#include <conio.h>
main()
{
   float r1,r2;
   float s;
   printf("\n������� �������� ������:\n");
   printf("������ ������ (��) -> " ) ;
   scanf("%f",&r1);
   printf("������ ��������� (��) -> " ) ;
   scanf("%f",&r2);
     if (r1 > r2)
   {
   s = 2 * 3.14 * (r1 - r2);
   printf("\n������� ������ %6.2f ��.��\n", s);
    }
      else
   {
   printf("\n������! ������ ��������� �� ����� ����");
   printf("������ ������� ������.\n");
   }
   printf("\n��� ���������� ������� <Enter>");
   getch();
}
