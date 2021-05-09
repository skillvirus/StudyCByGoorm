//정수형 포인터를 이용하여 값을 입력받고 
//입력받은 값을 10으로 나눈 몫과 나머지를 출력
//포인터를 이용하세요
#include <stdio.h>
int main() {
    int a, b, c;
    int *p;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &a);
    
    p = &a;
    
    b = *p / 10; //b = a / 10
    c = *p % 10; //c = a % 10
       
    printf("%d를 10으로 나눈 몫     : %d \n", a, b);
    printf("%d를 10으로 나눈 나머지 : %d \n", a, c);
    
    return 0;
}