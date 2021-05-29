#include <stdio.h>
#include <stdlib.h>

int main() {
    int SizeOfArray;
    int *arr;

    printf("만들고 싶은 배열의 원소의 수 : ");
    scanf("%d", &SizeOfArray);

    arr = (int*)malloc(sizeof(int) * SizeOfArray); 
    //인자로 전달된 바이트 수만큼 메모리 공간을 확보
    //arr에는 malloc함수가 할당해준 메모리를 이용할 수 있음
    //힙 영역에 위치함(동적으로 변경이 가능)
    // int arr[SizeOfArray] 와 동일한 작업을 한 크기의 배열 생성

    free(arr); //사용후 메모리 영역을 다시 컴퓨터에게 반환

    return 0;
}