#include <stdio.h>
//문자열 복사 함수
void copy_str(char *dest, char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main() {
    char str1[] = "hello";
    char str2[] = "hi";

    printf("복사 이전 str1 : %s \n", str1);
    printf("복사 이전 str2 : %s \n", str2);

    copy_str(str1, str2);
    printf("\n");

    printf("복사 이후 str1 : %s \n", str1);
    printf("복사 이후 str2 : %s \n", str2);

    return 0;
}
