#include <stdio.h>
#define square(x) x * x //#define [함수 이름(인자)] [치환할 것]

int main(int argc, char **argv) {
    printf("square(3) : %d \n", square(3));
    printf("square(3 + 1) : %d \n", square(3 + 1));

    return 0;
}