#include <stdio.h>
#include <conio.h>
main()
{
   float v,Om ; //���������� � �������������
   float A;//���� ����
   printf("\n���������� ���� ���� � ������������� ����.\n");
   printf("������� �������� ������:\n");
   printf("���������� (�����) -> ");
   scanf("%f",&v);
   printf ("������������� (��) -> ");
   scanf("%f",&Om);
   A=v/Om;
   printf ("���� ����: %6.10f �����\n",A);
   printf("��� ���������� ������� <Enter>");
   getch();
}
