#include <stdio.h>
int main() {
    int *p;
    int a;

    p = &a;
    *p = 3; //저장된 주소(변수 a 의 주소)에 해당하는 데이터(변수 a), a = 3 와 동일한 의미
            //포인터에 자료형이 존재하는 이유
            //-> *연산자를 이용하여 값을 할당할 때 시작주소로 부터 자료형만큼 읽어들여 값 할당

    printf("a 의 값  : %d \n", a);
    printf("*p 의 값 : %d \n", *p);

    return 0;
}