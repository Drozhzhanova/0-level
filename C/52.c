//���������� ������ ���������������
#include <stdio.h>
#include <conio.h>
main()
{
	float l,w,h;//�����,������,������ 
	float V;// ����� 
	printf("���������� ������ ���������������.\n");
	printf("������� �������� ������:\n");
	printf("�����(��.) -> ");
	scanf("%f", &l);
	printf("������(��.)-> ");
	scanf("%f", &w);
	printf("������(��.)->");
	scanf("%f", &h);
	V=l*w*h;
	printf("�����:%10.2f ���.��.\n",V);
	
	printf("\n\n��� ���������� ������� <Enter>");
	getch();
}
