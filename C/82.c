//������� ����������� ���������
#include <stdio.h>
#include <conio.h>
#include "math.h"

main()
{

  float a,b,c;//������������
  float x1,x2;//����� ���������
  float d;//������������
  
  printf("������� ����������� ���������\n");
  printf("������� � ����� ������ �������� ������������� � �������<Enter>\n");
  printf("->");
  scanf("%f%f%f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0)
    printf("��������� �� ����� �������\n");
  else{
  	x1=(-b+sqrt(d))/(2*a);
  	x2=(-b-sqrt(d))/(2*a);
  	printf("����� ���������:x1=%3.2f x2=%3.2f\n", x1, x2);
    }
    
    printf("��� ���������� ������� <Enter>\n");
    getch();
}
