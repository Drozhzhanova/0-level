#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf("¬ведите значение x: ");
    scanf("%f", &x);

    if (x > 0) 
	{
        y = 2 * sin(pow(x, 2));
    } 
	else 
	{
        y = 1 + 2 * pow(sin(x), 2);
    }

    printf("«начение y = %.2f\n", y);

    return 0;
}

