// Вычисление стоимости покупки
#include <stdio.h>
#include <conio.h>
main()
{
   float tetr,obl; // цена тетради и обложки
   int nk;// количество комплектов
   float summ;// стоимость покупки 
   printf("\nВычисление стоимости покупки.\n");
   printf("Введите исходные данные:\n");
   printf("Цена тетради (руб.) -> ");
   scanf("%f", &tetr);
   printf("Цена обложки (руб.) -> ");
   scanf("%f", &obl);
   printf("Количество комплектов -> ");
   scanf("%i", &nk);
   summ = (tetr + obl)*nk ;
   printf("\nСтоимость покупки: %6.2f руб.\n", summ);
   printf("\nДля завершения нажмите <Enter>");
   getch();
}
