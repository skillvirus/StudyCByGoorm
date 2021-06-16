#include <stdio.h>
#include "SimulatorStack.h"

int main() {

    int inputNum;
    int pushNum;
    
    while(1) {
        printf("\n");
        printf("-----STACK 테스트-----\n");
        printf("[1]PUSH\n");
        printf("[2]POP\n");
        printf("[3]현재 STACK 보기\n");
        printf("[4]프로그램종료\n");
        printf("메뉴를 선택하세요 : ");
        scanf("%d", &inputNum);

        if (inputNum == 1) {
            printf("PUSH 숫자를 입력하세요 : ");
            scanf("%d", &pushNum);
            push(pushNum);
        } 
        else if (inputNum == 2) {
            printf("\n");
            printf("POP 결과 : ");
            pop();
        }
        else if (inputNum == 3) {
            int stackCnt;
            printf("조회하고자 하는 STACK의 갯수를 입력하세요 : ");
            scanf("%d", &stackCnt);
            
            printf("\n");
            for (int i = stackCnt; i > 0; i--) {
                printf("STACK[%d] : %d \n", i, stack[i - 1]);
            }
            // printf("Stack[5] : %d \n", stack[4]);
            // printf("Stack[4] : %d \n", stack[3]);
            // printf("Stack[3] : %d \n", stack[2]);
            // printf("Stack[2] : %d \n", stack[1]);
            // printf("Stack[1] : %d \n", stack[0]);
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