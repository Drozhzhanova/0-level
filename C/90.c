#include <stdio.h>

main() 
{
    int num1 = 6;
    int num2 = 7;
    int user_answer, correct_answer;

    correct_answer = num1 * num2;

    printf("Сколько будет %dx%d?\n", num1, num2);
    printf("Введите ответ и нажмите <Enter>\n");
    scanf("%d", &user_answer);

    if (user_answer == correct_answer) 
	{
        printf("Правильно!\n");
    } 
	else 
	{
        printf("Вы ошиблись.\n");
        printf("%d*%d=%d\n", num1, num2, correct_answer);
    }

    return 0;
}
