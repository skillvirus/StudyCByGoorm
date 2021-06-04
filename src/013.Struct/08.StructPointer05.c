#include <stdio.h>
int add_one(int *a);
struct TEST {
    int c;
};
int main() {
    struct TEST t;
    struct TEST *pt = &t;

    pt->c = 0; //pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 할당

    add_one(&t.c); //add_one 함수의 인자에 t 구조체 변수의 멤버 c 의 주소값을 전달

    printf("t.c : %d \n", t.c);

    add_one(&pt->c); //add_one 함수의 인자에 pt 가 가리키는 구조체 변수의 멤버 c 의 주소값을 전달

    printf("t.c : %d \n", t.c);

    return 0;
}
int add_one(int *a) {
    *a += 1;
    
    return 0;
}