#include <stdio.h>
#include <conio.h>
main() 
{
    float r,h,v;//радиус,высота,объём
    
    printf("Вычисление объема цилиндра.\n");
    printf("Введите исходные данные:\n");
    
    printf("Радиус основания (см) -> ");
    scanf("%f", &r);
    
    printf("Высота цилиндра (см) -> ");
    scanf("%f", &h);
    
    v=3.1415926*r*r*h;
    
    printf("Объем цилиндра: %.2f см.куб.\n", v);
    printf("Для завершения нажмите <Enter>");
    getch();
}

