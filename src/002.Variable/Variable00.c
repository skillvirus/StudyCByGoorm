#include <stdio.h>

int main()
{
    int a = 2147483647;
    a++;
    long b = 2147483647;
    b++;
    
    printf("a : %d \n", a);
    printf("b : %ld \n", b);
    
    return 0;        
}