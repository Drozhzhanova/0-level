#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("���������� ��������� ����� ����: 1 + 1/2 + 1/3 + ...\n");
    printf("������� ���������� ����������� ������ ���� -> ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("����� ������ %d ������ ���� ����� %.4f\n", n, sum);

    return 0;
}

