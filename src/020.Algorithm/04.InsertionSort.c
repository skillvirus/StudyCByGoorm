#include <stdio.h>
#include "00.CommonFile.h"

int InsertionSort(int *base, int n);

int main(void) {
    printf("Swap 실행 횟수 : %d \n", InsertionSort(arr, arrayCount));
    return 0;
}

int InsertionSort(int *base, int n) {
    int i = 0;
    int j = 0;
    int exeCount = 0;

    ViewArr(base, n); //현재 상태 출력
    for (i = 1; i < n; i++) { 
        for (j = i; j > 0; j--) { //정렬할 범위를 확대
            if (base[j - 1] > base[j]) { //앞쪽 원소가 더 크면
                Swap(&base[j - 1], &base[j]); //교환
                exeCount++;
                ViewArr(base, n); //상태 출력
            }
            else {
                break;
            }
        }
    }
    
    return exeCount++;
}