#include <stdio.h>
int main() {
    char str1[10], str2[10];

    printf("문자열을 입력하세요 : "); //Hello World 입력 해보기
    scanf("%s", str1);
    printf("입력한 문자열 : %s \n", str1);

    printf("문자열을 입력하세요 : ");
    scanf("%s", str2);
    printf("입력한 문자열 : %s \n", str2);

    return 0;
}