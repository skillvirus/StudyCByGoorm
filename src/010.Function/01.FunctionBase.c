#include <stdio.h>
int print_hello() {
    printf("Hello!! \n");
    
    return 0;
}

int main() {
    printf("함수를 불러보자 : ");
    print_hello();

    printf("또 부를까? ");
    print_hello();
    
    return 0;
}