#include <stdio.h>
struct TEST {
    int c;
};
int main() {
    struct TEST t;
    struct TEST *pt = &t;

    (*pt).c = 0; //pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 할당

    printf("t.c : %d \n", t.c);
    
    pt->c = 1; //pt 가 가리키는 구조체 변수의 c 멤버의 값을 1 으로 할당

    printf("t.c : %d \n", t.c);

    return 0;
}