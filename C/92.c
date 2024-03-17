#include <stdio.h>

main() 
{
    int num;

    printf("Введите целое число и нажмите <Enter>\n");
    scanf("%d", &num);

    if (num % 2 == 0) 
	{
        printf("Число %d-чётное.\n",num);
    } 
	else 
	{
        printf("Число %d-нечётное.\n",num);
    }
    
    return 0;
}
