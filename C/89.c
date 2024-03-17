#include <stdio.h>

main() 
{
    int num1, num2;

    printf("¬ведите в одной строке два целых числа и нажмите <Enter>:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) 
	{
        printf("%d меньше %d\n", num1, num2);
    } 
	else if (num1 > num2) 
	{
        printf("%d больше %d\n", num1, num2);
    } 
	else 
	{
        printf("„исла равны\n");
    }

    return 0;
}
