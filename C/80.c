
#include <stdio.h>
#include <conio.h>
main()
{
int year;
int r;//������� �� ������� year �� 4

   printf("������� ���,�������� 2000,� ������� <Enter>");
   printf("->");
   scanf("%i", &year);
   r = year % 4;
   if ( r )
   printf("%i ��� - ������������\n", year);
   else
   printf("%i ��� - ����������\n", year);
   printf("\n��� ���������� ������� <Enter>");
  getch();
}
