#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *parr = arr;

    printf("Sizeof(arr)  : %ld \n", sizeof(arr));
    printf("Sizeof(parr) : %ld \n", sizeof(parr));
}

//배열의 이름이 배열의 첫 번째 원소를 가리키는 포인터라고 할 수 있을까? NO!
//배열의 이름과 첫 번째 원소의 주소값은 엄밀히 다른 것