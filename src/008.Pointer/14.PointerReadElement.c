#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *parr;

    parr = &arr[0];

    printf("arr[3] = %d , *(parr + 3) = %d \n", arr[3], *(parr + 3)); //* : 그 주소값에 저장된 데이터
    
    return 0;
}