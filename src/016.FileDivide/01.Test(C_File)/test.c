//test.c
#include <stdio.h>
char compare(char *str1, char *str2);
int main() {
    char str1[20];
    char str2[20];

    printf("비교하고싶은 첫 번째 단어를 입력하세요 : ");
    scanf("%s", str1);
    printf("비교하고싶은 두 번째 단어를 입력하세요 : ");
    scanf("%s", str2);

    if (compare(str1, str2)) {
        printf("%s 와 %s 는 같은 단어 입니다. \n", str1, str2);
    } else {
        printf("%s 와 %s 는 다른 단어 입니다. \n", str1, str2);
    }
    return 0;
}