#include <stdio.h>
#include "00.CommonFile.h"

int SequenceSort(int *base, int n);

int main(void) {
    printf("Swap 실행 횟수 : %d \n", SequenceSort(arr, arrayCount));
    return 0;
}

int SequenceSort(int *base, int n) {
    int i = 0;
    int j = 0;
    int exeCount = 0;
    
    ViewArr(base, n); //현재 상태 출력
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (base[i] > base[j]) { //앞쪽 원소가 더 크면
                Swap(&base[i], &base[j]); //교환
                ViewArr(base, n); //상태 출력
                
                exeCount++;
            }
        }
    }
    
    return exeCount;
}
