#include <stdio.h>
int function() {
    static int how_many_called = 0;
    how_many_called++;
    printf("function called : %d \n", how_many_called);

    return 0;
}

int function2() {
    static int how_many_called = 0;

    how_many_called++;
    printf("function 2 called : %d \n", how_many_called);

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