#include <stdio.h>

int main()
{
    int a = 2147483647;
    printf("int a : %d \n", a);
    a++;
    printf("int a(+1) : %d \n", a);
    
    unsigned int ua = 4294967295;
    printf("unsigned int ua : %u \n", ua);
    ua++;
    printf("unsigned int ua(+1) : %u \n", ua);
    
    printf("\n");
    
    long b = 2147483647;
    printf("long b : %ld \n", b);
    b++;
    printf("long b(+1) : %ld \n", b);
    
    unsigned long ub = 4294967295;
    printf("unsigned int ub : %lu \n", ub);
    ub++;
    printf("unsigned int ub(+1) : %lu \n", ub);
    
    return 0;        
}