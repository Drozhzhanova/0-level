#include <stdio.h>

main() 
{
    int amount;

    printf("������� ����� (�� 1 �� 99)\n");
    scanf("%d", &amount);

    if (amount >= 1 && amount <= 99) 
	{
        int lastDigit = amount % 10;
        
        if (amount == 1) {
            printf("%d �������\n", amount);
        } 
		  else if (lastDigit == 1) 
		  {
            printf("%d �������\n", amount);
          } 
		     else if (lastDigit >= 2 && lastDigit <= 4) 
		     {
             printf("%d �������\n", amount);
             }  
			   else 
			   {
                printf("%d ������\n", amount);
               }
    } 
	else 
	{
        printf("����� ������ ���� �� 1 �� 99\n");
    }

    return 0;
}

