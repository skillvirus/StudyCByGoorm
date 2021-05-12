#include <stdio.h>
int main() {
    char input;

    printf("아무 문자나 숫자 하나를 입력하세요. : ");
    scanf("%c", &input);

    if (48 <= input && input <= 57) { //아스키코드를 외우고 다니지 않는 이상 이 코드가 무엇을 의미하는지 직관적으로 이해하기 어렵다.
        printf("%c 는(은) 숫자 입니다. \n", input);
    } 
    else {
        printf("%c 는(은) 숫자가 아닙니다. \n", input);
    }

    return 0;
}