// ���������� ������� ����������� ���������������
#include <stdio.h>
#include <conio.h>
main()
{
   float l,w,h; // �����,������,������
   float s;//������� �����������
    printf("���������� ������� ����������� ���������������.\n");
    printf("������� �������� ������:\n");
    printf("�����(��)-> ");
    scanf("%f", &l);
    printf("������(��) -> ");
    scanf("%f", &w);
    printf("������(��) -> ");
    scanf("%f", &h);
    s=2*(l*w+l*h+w*h);
    printf("������� �����������:%10.2f ��.��\n",s);
    printf("\n\n��� ���������� ������� <Enter>");
   getch();
}


