#include <stdio.h>
int magicbox() {
    i += 4; //오류 발생 : 'i' undeclared(선언되지 않은 식별자)
    
    return 0;
}

int main() {
    int i;
    
    printf("마술 상자에 집어넣을 값 : ");
    scanf("%d", &i);

    magicbox();
    printf("마술 상자를 지나면 : %d \n", i);
    
    return 0;
}