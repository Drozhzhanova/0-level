//���������� ������ ����
#include <stdio.h>
#include <conio.h>

main()
{
	float l;//����� �����
	float V;//����� ����
	printf("��������� ����� ����.\n");
	printf("������� ����� �����(��)� ������� ������� <Enter>\n");
	printf("->");
	scanf("%f",&l);
	V=l*l*l;
	printf("����� ����:%10.2f ���.��.\n",V);
	printf("��� ���������� ������� <Enter>");
	getch();
	
}
