#include <stdio.h>

int main() {
    int answer;
    int correct_answer = 1939;

    printf("� ����� ���� �������� ������ ������� �����?\n");
    printf("������� ����� � ������� <Enter>\n");
    scanf("%d", &answer);

    if (answer == correct_answer) {
        printf("���������.\n");
    } else {
        printf("�� ��������, ������ ������� ����� �������� � %d ����.\n", correct_answer);
    }

    return 0;
}
