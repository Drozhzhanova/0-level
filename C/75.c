#include <stdio.h>
#include <conio.h>

int main() 
{
    float pounds, kilograms, grams;

    printf("\nѕересчЄт веса из фунтов в килограммы.\n");
    printf("¬ведите вес в фунтах и нажмите <Enter>. -> ");
    scanf("%f", &pounds);

    kilograms = pounds * 0.453592; //перевод фунта в килограммы
    grams = (kilograms - (int)kilograms)*1000; //получаем остаток в граммах

    printf("%.1f фунт(а/ов) - это %.0f кг %.0f гр.\n", pounds, kilograms, grams);

    return 0;
}
