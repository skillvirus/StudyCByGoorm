//main 함수의 인자
#include <stdio.h>
int main(int argc, char **argv) {
    printf("받은 인자의 개수 : %d \n", argc);
    
    printf("-----인자의 내용-----\n");
    for (int i = 0; i < argc; i++) {
        printf("%s \n", argv[i]); //포인터 배열이 가리키도 있는 값 출력
    }
    
    return 0;
}