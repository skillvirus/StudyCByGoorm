#include <stdio.h>
int add_number(int *parr);
int main() {
    int arr[3];
    int i;

    /* 사용자로 부터 3 개의 원소(정수)를 입력 받는다. */
    printf("정수 3개를 차례로 입력하세요. \n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    add_number(arr);
    printf("배열의 각 원소 : %d, %d, %d \n", arr[0], arr[1], arr[2]);

    return 0;
}
//특정한 타입의 값을 변경하는 함수를 제작하려면, 반드시 그 타입을 가리키는 포인터를 인자로 가져야 한다.
int add_number(int *parr) {
    int i;
    
    for (i = 0; i < 3; i++) 
    {
        parr[i]++;
    }
    
    return 0;
}