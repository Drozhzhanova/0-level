#include <stdio.h>

main() 
{
    int answer;
    int correctanswer = 1703;

    printf("� ����� ���� ��� ������� �����-���������?\n");
    printf("������ ����� � ������� <Enter>\n");
    scanf("%d", &answer);

    if (answer == correctanswer) 
	{
        printf("���������!����� ��������� ��� ������� � 1703 ����.\n");
    } 
	else 
	{
        printf("�� ��������,�����-��������� ��� ������� � 1703 ����.\n");
    }

}
