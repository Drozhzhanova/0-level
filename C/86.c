#include <stdio.h>

int main() {
    int answer;
    int correct_answer = 1939;

    printf("В каком году началась вторая мировая война?\n");
    printf("Введите число и нажмите <Enter>\n");
    scanf("%d", &answer);

    if (answer == correct_answer) {
        printf("Правильно.\n");
    } else {
        printf("Вы ошиблись, вторая мировая война началась в %d году.\n", correct_answer);
    }

    return 0;
}
