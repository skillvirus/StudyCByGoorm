#include <stdio.h>
#include <stdlib.h>

void get_average(int num_student, int num_subject, int (*scores)[num_student]);

int main() {
    int subject, students;

    printf("과목 수 : ");
    scanf("%d", &subject);

    printf("학생의 수 : ");
    scanf("%d", &students);

    // students 의 값이 정해진 후에 scores 을 정의해야 한다.
    int(*scores)[students];
    scores = (int(*)[students])malloc(sizeof(int) * subject * students);

    for (int i = 0; i < subject; i++) {
        printf("과목 %d 점수 --------- \n", i);

        for (int j = 0; j < students; j++) {
            printf("학생 %d 점수 입력 : ", j);
            scanf("%d", &scores[i][j]);
        }
    }

    get_average(students, subject, scores);
    free(scores);

    return 0;
}

void get_average(int num_student, int num_subject, int (*scores)[num_student]) {
    int i, j, sum;

    for (i = 0; i < num_subject; i++) {
        sum = 0;
        for (j = 0; j < num_student; j++) {
            sum += arr[i][j];
        }
        printf("과목 %d 평균 점수 : %d \n", i, sum / num_student);
    }
}