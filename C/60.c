#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
   float a,b; //длины сторон
   float q; //величина угла,выраженная в градусах
   float S; //площадь треугольника
   printf("\nВычисление площади треугольника\n");
   printf("Введите(через пробел)длины двух сторон(см)треугольника");
   printf("->  " );
   scanf("%f%f", &a, &b);
   printf("Введите величину угла между сторонами треугольника");
   printf("->");
   scanf ("%f", &q);
   S=a*b*sin*(q*M_PI/180)/2;
   printf("Площадь треугольника:%6.2f кв.см.",&S);
   printf("\n\nДля завершения нажмите<Enter>");
   getch();
}
