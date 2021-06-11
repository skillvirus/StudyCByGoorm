#include <stdio.h>
#define A
int main() {
    #ifdef A
    printf("AAAA \n");
    #endif
    #ifdef B
    printf("BBBB \n");
    #endif
    return 0;
}