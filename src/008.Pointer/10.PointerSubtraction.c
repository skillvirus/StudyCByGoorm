#include <stdio.h>
int main() {
    int a;
    int* pa = &a;

    printf("pa 의 값       : %p \n", pa);
    printf("(pa - 1) 의 값 : %p \n", pa - 1);

    return 0;
}