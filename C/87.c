#include <stdio.h>
#include <conio.h>

main() 
{
    int answer;
    int correctanswer = 2; // Correct answer: Auguste Montferrand

    printf("���������� ������������� ������:\n");
    printf("1. �������� �������\n");
    printf("2. ����� ���������\n");
    printf("3. ���� �����\n");
    printf("������� ����� ����������� ������ � ������� <Enter>\n");
    scanf("%d", &answer);

    if (answer == correctanswer) 
	{
        printf("���������!\n");
    } 
	else 
	{
        printf("�� ��������.���������� ������������� ������ - ����� ���������.\n");
    }

}
