#include <stdio.h>
int main() {
    int num;
    char c;

    printf("숫자를 입력하세요 : "); //123abc 입력하여 테스트
    scanf("%d", &num);

    getchar();

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);

    printf("입력한 문자 : %c \n", c);
    return 0;
}