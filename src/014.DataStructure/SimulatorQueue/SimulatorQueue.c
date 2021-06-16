#include <stdio.h>
#include "SimulatorQueue.h"

int main() {

    int inputNum;
    int pushNum;
    
    while(1) {
        printf("\n");
        printf("-----QUEUE 테스트-----\n");
        printf("[1]PUT\n");
        printf("[2]GET\n");
        printf("[3]현재 QUEUE 보기\n");
        printf("[4]프로그램종료\n");
        printf("메뉴를 선택하세요 : ");
        scanf("%d", &inputNum);

        if (inputNum == 1) {
            printf("PUT 숫자를 입력하세요 : ");
            scanf("%d", &pushNum);
            put(pushNum);
        } 
        else if (inputNum == 2) {
            printf("\n");
            printf("GET 결과 : ");
            get();
        }
        else if (inputNum == 3) {
            int queueCnt;
            printf("조회하고자 하는 QUEUE의 갯수를 입력하세요 : ");
            scanf("%d", &queueCnt);
            
            printf("\n");
            for (int i = queueCnt; i > 0; i--) {
                printf("QUEUE[%d] : %d \n", i, queue[i - 1]);
            }
        }
        else if (inputNum == 4) {
            break;
        }
        else {
            printf("메뉴번호를 확인하세요.");
        }
    }
    
    return 0;
}