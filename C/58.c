// ���������� ��������� �������
#include <stdio.h>
#include <conio.h>
main()
{
   float ckl; // ���� ������ ���� �����
   float massa;//��� �����
   float summ;
   printf("\n���������� ��������� �������.\n");
   printf("������� �������� ������:\n");
   printf("���� ������ ���������� �����(���.)-> ");
   scanf("%f",&ckl);
   printf("��� �����(��) -> ");
   scanf("%f",&massa);
   summ=ckl*massa;
   printf("\n��������� �������:%5.2f ���.\n",summ);
   printf("��� ���������� ������� <Enter>");
   getch();
}
