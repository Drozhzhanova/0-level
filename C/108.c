#include <stdio.h>

int main() {
    int p, sum_even = 0;

    printf("���������� ����� ������ ������������� �����.\n");
    printf("������� ���������� ����������� ����� � ������� <Enter> ");
    scanf("%d", &p);

    sum_even = p * (p + 1);

    printf("����� ������ %d ������������� ������ ����� ����� %d\n", p, sum_even);

    return 0;
}

