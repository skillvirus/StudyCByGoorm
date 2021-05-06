#include <stdio.h>
int main() {
    int a;
    int b;
    // const int* pa = &a; //int형 변수를 가리키는데 그 값을 절대 바꾸지 마라! // pa가 가리키는 변수의 값은 절대 바뀌면 안됨
    
    // *pa = 3;  //올바르지 않은 문장
    // pa = &b;  //올바른 문장
    
    int* const pa = &a; //pa의 값이 절대 바뀌면 안됨
    
    *pa = 3;  //올바른 문장
    pa = &b;  //올바르지 않은 문장
    
    return 0;
}