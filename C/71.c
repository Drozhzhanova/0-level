#include <stdio.h>
#include <conio.h>
main() 
{
    float p, kg;

    printf("Пересчет веса из фунтов в килограммы.\n");
    printf("Введите вес в фунтах -> ");
    
    scanf("%f", &p);
    kg=p/2.20462;
    
    printf("%.2f фунтов - это %.2f кг\n", p, kg);
    printf("\nДля завершения нажмите <Enter>");
    getch();

}

