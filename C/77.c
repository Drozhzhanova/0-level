#include <stdio.h>

int main() {
    int dividend, divisor;
    float quotient;

    printf("���������� ��������.\n");
    printf("������� � ����� ������ ������� � ��������,����� ������� <Enter>:\n");
    
    printf("-> ");
    scanf("%d %d", &dividend, &divisor);
    
    if (divisor == 0) {
        printf("�� ��������.�������� �� ������ ���� ����� ����.\n");
    } else {
        quotient = (float)dividend / divisor;
        printf("�������: %.2f\n", quotient);
    }

    return 0;
}

