#include <stdio.h>
struct TEST {
    int i;
    char c;
};
int main() {
    struct TEST st1, st2;

    st1.i = 1;
    st1.c = 'c';

    st2 = st1;

    printf("st2.i : %d \n", st2.i);
    printf("st2.c : %c \n", st2.c);

    return 0;
}