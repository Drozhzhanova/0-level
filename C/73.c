// �������������� ��������, ���������� � �������,
//� ��������, ���������� � ����� � �������
#include <stdio.h>
#include <conio.h>
main()
{
   int min; // �������� � �������
   int h; // ���������� �����
   int m; // ���������� �����
   printf("������� ��������� �������� (� �������) -> ");
   scanf("%i",&min);
   h = (int)min / 60;
   m = min % 60;
   printf("%d ���.-��� %d �ac.%d ���.\n",min,h,m);
   printf("\n��� ���������� ������� <Enter>");
   getch();
}
