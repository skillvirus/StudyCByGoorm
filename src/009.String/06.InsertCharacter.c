#include <stdio.h>
int main() {
    char words[30];

    printf("30 자 이내의 문자열을 입력해주세요! : ");
    scanf("%s", words);

    printf("문자열 : %s \n", words); //배열 이름 자체가 배열을 가리키는 포인터이므로 & 없음

    return 0;
}