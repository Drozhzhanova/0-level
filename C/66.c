// �������� ����
#include <stdio.h>
#include <conio.h>
main()
{
   float s,t,v; // ���������,�����,��������
   int min,sek; // �����,������
   float ts; // ����� � ��������
   printf("���������� �������� ����\n");
   printf("������� ����� ��������� (������) -> ");
   scanf("%f", &s);
   printf("������� ����� (�����.������)-> ");
   scanf("%f", &t);
   min = t;
   sek = (t - min) * 100;
   ts = min * 60 + sek;
   v = (s /1000)/(ts/3600);
   printf("���������:%4.0f �\n",s ) ;
   printf("�����:%i ��� %i ��� = %4.0f ���\n" ,min,sek,ts);
   printf("�� ������ �� ��������� %2.2f ��/���\n",v);
   printf("\n��� ���������� ������� <Enter>");
   getch();
}
