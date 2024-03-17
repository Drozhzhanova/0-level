#include <stdio.h>

int main() {
    int day, month, year;
    int daysInMonth;

    printf("������� ������� ����������� ����(�����,�����,���) ->  ");
    scanf("%d %d %d", &day, &month, &year);

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0) {
        printf("������������ ����\n");
        return 1;
    }

    // �������� �� ���������� ���� � ������
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    if (day == daysInMonth) {
        printf("��������� ���� ������\n");
        if (month == 12) {
            printf("� ����������� ����� �����\n");
        }
        printf("������ 1.%d.%d\n", month == 12 ? 1 : month + 1, month == 12 ? year + 1 : year);
    } else {
        printf("������ %d.%d.%d\n", day + 1, month, year);
    }

    return 0;
}

