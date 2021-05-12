//함수의 위치를 main함수 뒤로 변경 후 실행
#include <stdio.h>
int main() {
    int i = 3;
    int j = 5;
    
    printf("SWAP 이전 : i : %d, j : %d \n", i, j);
    swap(&i, &j);
    printf("SWAP 이후 : i : %d, j : %d \n", i, j);

    return 0;
}

int swap(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;

    return 0;
}