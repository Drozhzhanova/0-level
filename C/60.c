#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
   float a,b; //����� ������
   float q; //�������� ����,���������� � ��������
   float S; //������� ������������
   printf("\n���������� ������� ������������\n");
   printf("�������(����� ������)����� ���� ������(��)������������");
   printf("->  " );
   scanf("%f%f", &a, &b);
   printf("������� �������� ���� ����� ��������� ������������");
   printf("->");
   scanf ("%f", &q);
   S=a*b*sin*(q*M_PI/180)/2;
   printf("������� ������������:%6.2f ��.��.",&S);
   printf("\n\n��� ���������� �������<Enter>");
   getch();
}
