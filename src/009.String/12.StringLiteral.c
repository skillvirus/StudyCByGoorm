#include <stdio.h>
int main() {
    char str[] = "sentence";
    char *pstr = "sentence";

    printf("str  : %s \n", str);
    printf("pstr : %s \n", pstr);
    //printf("%d \n", "sentence"); //"sentence"라는 문자열이 저장된 주소값
    
    return 0;
}