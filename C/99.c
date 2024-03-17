#include <stdio.h>

main() 
{
    int amount;

    printf("¬ведите сумму (от 1 до 99)\n");
    scanf("%d", &amount);

    if (amount >= 1 && amount <= 99) 
	{
        int lastDigit = amount % 10;
        
        if (amount == 1) {
            printf("%d копейка\n", amount);
        } 
		  else if (lastDigit == 1) 
		  {
            printf("%d копейка\n", amount);
          } 
		     else if (lastDigit >= 2 && lastDigit <= 4) 
		     {
             printf("%d копейки\n", amount);
             }  
			   else 
			   {
                printf("%d копеек\n", amount);
               }
    } 
	else 
	{
        printf("—умма должна быть от 1 до 99\n");
    }

    return 0;
}

