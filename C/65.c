// Вычисление стоимости поездки на дачу и обратно
#include <stdio.h>
#include <conio.h>
main ()
{
   float rast; // расстояние до дачи
   float potr; // потребление бензина на 100 км. пути
   float cena; // цена одного литра бензина
   float summ; // стоимость поездки на дачу и обратно
   printf("\nСтоимость поездки на дачу и обратно\n");
   printf("Расстояние до дачи (км) -> ");
   scanf("%f",&rast);
   printf("Расход бензина (литров на 100 км.) -> ");
   scanf("%f",&potr);
   printf("Цена литра бензина (руб.) -> ");
   scanf("%f",&cena);
   summ = 2 * potr/100 * rast * cena;
   printf("Поездка на дачу и обратно обойдется");
   printf (" в %6.2f py6.",summ) ;
   printf("\n\nДля завершения нажмите <Enter>");
   getch();
}
