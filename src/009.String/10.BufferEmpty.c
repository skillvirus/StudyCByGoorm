#include <stdio.h>
int main() {
    int num;
    char c;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    getchar(); //stdin에서 한글자를 읽어서 리턴

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);

    return 0;
}