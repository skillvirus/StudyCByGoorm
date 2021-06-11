#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = {"hi"};
    char str2[20] = {"hello every1"};

    strcpy(str1, str2); //문자열 복사

    printf("str1 : %s \n", str1);

    return 0;
}