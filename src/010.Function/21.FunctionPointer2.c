#include <stdio.h>
int max(int a, int b);
int donothing(int c, int k);
int main() {
    int a, b;
    int (*pfunc)(int, int); //두개의 함수를 가리키는 역할의 포인터
    
    pfunc = max;

    printf("두 정수를 입력하세요. \n");
    scanf("%d %d", &a, &b);
    printf("max(a,b) : %d \n", max(a, b));
    printf("pfunc(a,b) : %d \n", pfunc(a, b));

    pfunc = donothing;

    printf("donothing(1,1) : %d \n", donothing(1, 1));
    printf("pfunc(1,1) : %d \n", pfunc(1, 1));
    
    return 0;
}

int max(int a, int b) {
    if (a > b) {
        return a;  
    }
    else {
        return b;    
    }
    
    return 0;
}

int donothing(int c, int k) { return 1; }