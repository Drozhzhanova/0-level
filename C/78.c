// вычисление площади кольца
#include <stdio.h>
#include <conio.h>
main()
{
   float r1,r2;
   float s;
   printf("\nВведите исходные данные:\n");
   printf("радиус кольца (см) -> " ) ;
   scanf("%f",&r1);
   printf("радиус отверстия (см) -> " ) ;
   scanf("%f",&r2);
     if (r1 > r2)
   {
   s = 2 * 3.14 * (r1 - r2);
   printf("\nПлощадь кольца %6.2f кв.см\n", s);
    }
      else
   {
   printf("\nОшибка! Радиус отверстия не может быть");
   printf("больше радиуса кольца.\n");
   }
   printf("\nДля завершения нажмите <Enter>");
   getch();
}
