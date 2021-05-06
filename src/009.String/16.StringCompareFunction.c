#include <stdio.h>
int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0; //한 문자라도 다르면 종료
        }

        str1++;
        str2++;
    }

    if (*str2 == '\0') {
        return 1; //str2도 끝이 났는지 검사(두 문자열의 길이 체크)
    }
    
    return 0;
}

int main() {
    char str1[20] = "hello every1";
    char str2[20] = "hello everyone";
    char str3[20] = "hello every1 hi";
    char str4[20] = "hello every1";

    if (compare(str1, str2)) {
        printf("%s 와 %s 는 같다 \n", str1, str2);
    } 
    else {
        printf("%s 와 %s 는 다르다 \n", str1, str2);
    }

    if (compare(str1, str3)) {
        printf("%s 와 %s 는 같다 \n", str1, str3);
    }
    else {
        printf("%s 와 %s 는 다르다 \n", str1, str3);
    }

    if (compare(str1, str4)) {
        printf("%s 와 %s 는 같다 \n", str1, str4);
    } 
    else {
        printf("%s 와 %s 는 다르다 \n", str1, str4);
    }

    return 0;
}
