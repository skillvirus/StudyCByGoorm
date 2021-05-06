#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int(*parr)[3];  // 괄호필수 ((배열의 형) (*(포인터 이름))[2 차원 배열의 열 개수])

    parr = arr;  // parr 이 arr 을 가리키게 한다.

    printf("parr[1][2] : %d , arr[1][2] : %d \n", parr[1][2], arr[1][2]);

    return 0;
}