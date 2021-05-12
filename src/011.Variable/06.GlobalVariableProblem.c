#include <stdio.h>
int how_many_called = 0;
int how_many_called2 = 0;
int function() {
    how_many_called++;
    printf("function called : %d \n", how_many_called);

    return 0;
}

int function2() {
    how_many_called2++;
    printf("function 2 called : %d \n", how_many_called2);

    return 0;
}

int main() {
    function();
    function2();
    function();
    function2();
    function2();
    function2();
    function();
    function();
    function2();
    
    return 0;
}