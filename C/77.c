#include <stdio.h>

int main() {
    int dividend, divisor;
    float quotient;

    printf("Вычисление частного.\n");
    printf("Введите в одной строке делимое и делитель,затем нажмите <Enter>:\n");
    
    printf("-> ");
    scanf("%d %d", &dividend, &divisor);
    
    if (divisor == 0) {
        printf("Вы ошиблись.Делитель не должен быть равен нулю.\n");
    } else {
        quotient = (float)dividend / divisor;
        printf("Частное: %.2f\n", quotient);
    }

    return 0;
}

