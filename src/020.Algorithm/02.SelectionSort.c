#include <stdio.h>
#include "00.CommonFile.h"

int SelectionSort(int *base, int n);

int main(void) {
    printf("Swap 실행 횟수 : %d \n", SelectionSort(arr, arrayCount));
    return 0;
}

int SelectionSort(int *base, int n) {
    int i = 0;
    int j = 0;
    int maxi = 0;
    int exeCount = 0;
    
    ViewArr(base, n); //현재 상태 출력
    for (i = n; i > 1; i--) { //정렬할 범위를 축소
        maxi = 0;
        for (j = 1; j < i; j++) {
            if (base[maxi] < base[j]) { //더 큰 원소를 만나면
                maxi = j;
            }
        }
        Swap(&base[maxi], &base[i - 1]); //교환
        exeCount++;
        ViewArr(base, n); //상태 출력
    }
    
    return exeCount;
}