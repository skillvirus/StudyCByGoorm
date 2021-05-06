#include <stdio.h>
int main() {
    int *p;
    int a;

    p = &a;
    *p = 3; //저장된 주소(변수 a 의 주소)에 해당하는 데이터(변수 a), a = 3 와 동일한 의미

    printf("a 의 값  : %d \n", a);
    printf("*p 의 값 : %d \n", *p);

    return 0;
}