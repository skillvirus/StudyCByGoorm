#include <stdio.h>
int main() {
    char null_1 = '\0';
    char null_2 = 0;
    
    char not_null = '0'; //문자 0의 아스키코드

    printf("NULL(null_1) 의 정수(아스키)값 : %d \n", null_1);
    printf("NULL(null_2) 의 정수(아스키)값 : %d \n", null_2);
    printf("문자 '0'     의 정수(아스키)값 : %d \n", not_null);

    return 0;
}