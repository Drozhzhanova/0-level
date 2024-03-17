#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() 
{
    int x1, y1, x2, y2, x3, y3;
    float area, side1, side2, side3, s;

    printf("Вычисление площади треугольника.\n");
    printf("Введите координаты углов(числа разделяйте пробелом):\n");
    
    printf("x1,y1 -> ");
    scanf("%d %d", &x1, &y1);
    
    printf("x2,y2 -> ");
    scanf("%d %d", &x2, &y2);

    printf("x3,y3 -> ");
    scanf("%d %d", &x3, &y3);

    side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); 

    s = (side1 + side2 + side3) / 2.0;

    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    printf("Площадь треугольника: %.2f кв.см.\n", area);

    return 0;
}
