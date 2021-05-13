#include <stdio.h>
int* function() {
    static int a = 2; //정적변수(지역외에서도 소멸되지 않는 변수)
    return &a;
}

int main() {
    int* pa = function();
    printf("%d \n", *pa);
}