#include <stdio.h>
union A {
    int i;
    short j;
};
int main() {
    union A a;
    a.i = 0x12345678;
    printf("%x \n", a.j);
    
    return 0;
}