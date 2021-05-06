#include <stdio.h>
//문자열 연결 함수
void add_str(char *dest, char *src) {
    //dest 의 끝 부분을 찾는다.
    while (*dest) {
        dest++;
    }

    //첫번째 while 문을 지나고 나면 dest 는 dest 문자열의 NULL 문자를 가리키고 있게 된다.
    //이제 src 의 문자열들을 dest 의 NULL 문자 있는 곳 부터 복사해넣는다.
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    //마지막으로 dest 에 NULL 추가 (두번째 while문에서 src가 NULL이 되어 while문이 종료되었으므로)
    *dest = '\0';
}

int main() {
    char str1[100] = "Hello my name is ";
    char str2[] = "Song M.G.";

    printf("Add 이전 : %s \n", str1);

    add_str(str1, str2);

    printf("Add 이후 : %s \n", str1);

    return 0;
}
