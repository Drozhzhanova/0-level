#include <stdio.h>

main() 
{
    int num1 = 83;
    int num2 = 17;
    int user_answer, correct_answer;

    correct_answer = num1 - num2;

    printf("������� ����� %d-%d?\n", num1, num2);
    printf("������� ����� � ������� <Enter>\n");
    scanf("%d", &user_answer);

    if (user_answer == correct_answer) 
	{
        printf("���������!\n");
    } 
	else 
	{
        printf("�� ��������.\n");
        printf("%d-%d=%d\n", num1, num2, correct_answer);
    }

    return 0;
}
