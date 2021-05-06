#include <stdio.h>

int main() 
{
    int a = 1;  //00000001
    int b = 2;  //00000010

    printf("a : %d \n", a);
    printf("b : %d \n", b);
    printf("\n");
    printf("a & b : %d \n", a & b);    //a & b = 00000000
    printf("a | b : %d \n", a | b);    //a | b = 00000011
    printf("a ^ b : %d \n", a ^ b);    //a ^ b = 00000011
    printf("~a : %d \n", ~a);          //~a = 11111110
    printf("a << 2 : %d \n", a << 2);  //a << 2 = 00000100
    printf("b >> 3 : %d \n", b >> 3);  //b >> 3 = 00000000

    return 0;
}