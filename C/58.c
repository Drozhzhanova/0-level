// Вычисление стоимости покупки
#include <stdio.h>
#include <conio.h>
main()
{
   float ckl; // цена одного кило яблок
   float massa;//вес яблок
   float summ;
   printf("\nВычисление стоимости покупки.\n");
   printf("Введите исходные данные:\n");
   printf("Цена одного килограмма яблок(руб.)-> ");
   scanf("%f",&ckl);
   printf("Вес яблок(кг) -> ");
   scanf("%f",&massa);
   summ=ckl*massa;
   printf("\nСтоимость покупки:%5.2f руб.\n",summ);
   printf("Для завершения нажмите <Enter>");
   getch();
}
