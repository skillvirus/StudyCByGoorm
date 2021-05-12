#include <stdio.h>
int swap(int *a, int *b);  //함수의 원형
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