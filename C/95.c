#include <stdio.h>

main() 
{
    int height, weight, optimalWeight;

    printf("Введите в одной строке через пробел\n");
    printf("рост (см) и вес (кг), затем нажмите <Enter>\n");
    scanf("%d %d", &height, &weight);

    optimalWeight = height - 100;

    if (weight < optimalWeight) {
        printf("Вам надо поправиться на %d кг.\n", optimalWeight - weight);
    } else if (weight > optimalWeight) {
        printf("Вам надо похудеть на %d кг.\n", weight - optimalWeight);
    } else {
        printf("Ваш вес оптимален.\n");
    }

    return 0;
}
