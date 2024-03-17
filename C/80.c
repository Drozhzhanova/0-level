
#include <stdio.h>
#include <conio.h>
main()
{
int year;
int r;//остаток от деления year на 4

   printf("Введите год,например 2000,и нажмите <Enter>");
   printf("->");
   scanf("%i", &year);
   r = year % 4;
   if ( r )
   printf("%i год - невисокосный\n", year);
   else
   printf("%i год - високосный\n", year);
   printf("\nДля завершения нажмите <Enter>");
  getch();
}
