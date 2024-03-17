#include <stdio.h>
#include <conio.h>

main() 
{
    int answer;
    int correctanswer = 2; // Correct answer: Auguste Montferrand

    printf("Архитектор Исаакиевского собора:\n");
    printf("1. Доменико Трезини\n");
    printf("2. Огюст Монферран\n");
    printf("3. Карл Росси\n");
    printf("Введите номер правильного ответа и нажмите <Enter>\n");
    scanf("%d", &answer);

    if (answer == correctanswer) 
	{
        printf("Правильно!\n");
    } 
	else 
	{
        printf("Вы ошиблись.Архитектор Исаакиевского собора - Огюст Монферран.\n");
    }

}
