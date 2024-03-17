#include <stdio.h>

main() 
{
    int num;

    printf("Введите целое число и нажмите <Enter>\n");
    scanf("%d", &num);

    if (num % 3 == 0) 
	{
        printf("Число %d нацело на три делится.\n", num);
    }  
	else 
	{
        printf("Число %d нацело на три не делится.\n", num);
    }

    return 0;
}
