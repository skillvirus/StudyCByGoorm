#include <stdio.h>
typedef int CAL_TYPE;
int main() {
    CAL_TYPE input;
    CAL_TYPE a, b;

    while (1) {
        printf("--- 계산기 --- \n");
        printf("1. 덧셈 \n");
        printf("2. 뺄셈 \n");
        printf("3. 종료 \n");

        scanf("%d", &input);

    if (input == 1) {
        printf("두 수 : ");
        scanf("%d%d", &a, &b);
        printf("%d 와 %d 의 합 : %d \n", a, b, a + b);
    } else if (input == 2) {
        printf("두 수 : ");
        scanf("%d%d", &a, &b);
        printf("%d 와 %d 의 차 : %d \n", a, b, a - b);
    } else
        break;
    }

    return 0;
}