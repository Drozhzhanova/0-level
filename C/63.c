#include <stdio.h>
#include <conio.h>
main()
{
   float v,Om ; //напряжение и сопротивление
   float A;//сила тока
   printf("\nВычисление силы тока в электрической цепи.\n");
   printf("Введите исходные данные:\n");
   printf("Напряжение (вольт) -> ");
   scanf("%f",&v);
   printf ("Сопротивление (Ом) -> ");
   scanf("%f",&Om);
   A=v/Om;
   printf ("Сила тока: %6.10f Ампер\n",A);
   printf("Для завершения нажмите <Enter>");
   getch();
}
