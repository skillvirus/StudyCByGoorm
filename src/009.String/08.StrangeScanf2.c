#include <stdio.h>
int main () {
    char str[30];
    int i;
    
    printf("숫자를 입력하세요 : ");
    scanf("%d", &i);
    
    printf("문자를 입력하세요 : ");
    scanf("%s", str);
    
    printf("숫자 : %d \n", i);
    printf("문자 : %s \n", str);
    
    return 0;
}