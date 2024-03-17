#include <stdio.h>

main() 
{
    int answer;
    int correctanswer = 1703;

    printf("В каком году был основан Санкт-Петербург?\n");
    printf("Ведите число и нажмите <Enter>\n");
    scanf("%d", &answer);

    if (answer == correctanswer) 
	{
        printf("Правильно!Санкт петербург был основан в 1703 году.\n");
    } 
	else 
	{
        printf("Вы ошиблись,Санкт-Петербург был основан в 1703 году.\n");
    }

}
