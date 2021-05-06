#include <stdio.h>
int main() {
    int a;
    int *pa = &a;
    int b;
    int *pb = &b;
    int *pc = pa + pb;

    return 0;
}