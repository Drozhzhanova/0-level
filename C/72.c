//��������� ���������� �������� ������ �� ������
#include <stdio.h>
#include <conio.h>

main()
{
	float vkl; //�����
	float proc; //% �������
	int day; //����� ��������(����)
	float dohod; //�������� ������
	printf("���������� ������ �� ������.\n");
	printf("������� �������� ������:");
	printf("�������� ������(���.)-> ");
	scanf("%f",&vkl);
	printf("���� ������(����)-> ");
	scanf("%d",&day);
	printf("���������� ������(�������)-> ");
	scanf("%f",&proc);
	dohod = vkl*proc/365/100*day;
	printf("----------------------------\n");
	printf("�����:%9.2f ���.\n",dohod);
	printf("����� �� ��������� ����� ������:%9.2f ���.\n",vkl);
	printf("\n��� ���������� ������� <Enter>");
	getch();    
}
