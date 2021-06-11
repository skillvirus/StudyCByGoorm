//Visual Studio에서 실행
#include <stdio.h>
__inline int square(int a) { return a * a; }
int main(int argc, char **argv) {
    printf("%d", square(3));

    return 0;
}