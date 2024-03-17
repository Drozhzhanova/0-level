//решение квадратного уравнения
#include <stdio.h>
#include <conio.h>
#include "math.h"

main()
{

  float a,b,c;//коэффициенты
  float x1,x2;//корни уравнения
  float d;//дискриминант
  
  printf("Решение квадратного уравнения\n");
  printf("Введите в одной строке значения коэффициентов и нажмите<Enter>\n");
  printf("->");
  scanf("%f%f%f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0)
    printf("Уравнение не имеет решения\n");
  else{
  	x1=(-b+sqrt(d))/(2*a);
  	x2=(-b-sqrt(d))/(2*a);
  	printf("Корни уравнения:x1=%3.2f x2=%3.2f\n", x1, x2);
    }
    
    printf("Для завершения нажмите <Enter>\n");
    getch();
}
