#include <stdio.h>
/* 열의 개수가 2 개인 이차원 배열과, 총 행의 수를 인자로 받는다. */
int add1_element(int (*arr)[2], int row);
//int add1_element(int arr[][2], int row); //이렇게도 가능(함수의 인자에서만)
int main() {
    int arr[3][2];
    int i, j;

    printf("6개의 정수를 차례대로 입력하세요. \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    add1_element(arr, 3);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
        }
    }    
    return 0;
}

int add1_element(int (*arr)[2], int row) {
//int add1_element(int arr[][2], int row) { //이렇게도 가능(함수의 인자에서만)
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < 2; j++) {
            arr[i][j]++;
        }
    }

    return 0;
}