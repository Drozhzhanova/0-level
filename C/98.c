#include <stdio.h>

int main() 
{
    int amount;

    printf("������� �����(�� 1 �� 999)\n");
    scanf("%d", &amount);

    if (amount >= 1 && amount <= 999)  
	{
        int lastDigit = amount % 10;
        int lastTwoDigits = amount % 100;

        if ((lastTwoDigits >= 10 && lastTwoDigits <= 20) || lastDigit == 0 || lastDigit >= 5) 
		{
            printf("%d ������\n", amount);
        } 
		else if (lastDigit == 1) 
		{
            printf("%d �����\n", amount);
        } else 
		{
            printf("%d �����\n", amount);
        }
    } 
	else 
	{
        printf("����� ������ ���� �� 1 �� 999\n");
    }

    return 0;
}

