#include <stdio.h>
#include "FileDivideTest.h"

int main() {
    struct Test test;
    
    test.a = 'A';
    test.c = 'C';
    test.b = 'B';
    test.i = 1;
    
    printf("test.a : %c \n", test.a);
    printf("test.b : %c \n", test.b);
    printf("test.c : %c \n", test.c);
    printf("test.i : %d \n", test.i);
}