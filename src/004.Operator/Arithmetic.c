#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 3;
    
    printf("a + b 는 : %d \n", a + b);
    printf("a - b 는 : %d \n", a - b);
    printf("a * b 는 : %d \n", a * b);
    printf("a / b 는 : %d \n", a / b);
    //printf("a / b 는 : %f \n", a / b); //자료타입 불일치
    printf("a %% b 는 : %d \n", a % b);
    
    return 0;
}