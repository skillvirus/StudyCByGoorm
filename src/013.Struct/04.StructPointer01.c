#include <stdio.h>
struct test {
    int a, b;
};
int main() {
    struct test st;
    struct test *ptr;

    ptr = &st;

    (*ptr).a = 1; //*ptr.a = 1; 로 변경하여 실행 해보면 어떻게 될까?
    (*ptr).b = 2;

    printf("st 의 a 멤버 : %d \n", st.a);
    printf("st 의 b 멤버 : %d \n", st.b);

    return 0;
}