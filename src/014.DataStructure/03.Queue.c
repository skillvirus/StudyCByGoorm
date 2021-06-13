#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int front = -1;
int rear = -1;
int queue[MAX];
 
int IsEmpty(void) {
    if(front == rear) { //front와 rear가 같으면 큐는 비어있는 상태 
        return true;
    }
    else {
        return false;
    }
}

int IsFull(void) {
    int tmp = (rear + 1) % MAX; //원형 큐에서 rear+1을 MAX로 나눈 나머지값이
    if(tmp == front) { //front와 같으면 큐는 가득차 있는 상태 
        return true;
    }
    else {
        return false;
    }
}

void put(int value){
    if(IsFull()) {
        printf("Queue is Full. \n");
    }
    else {
         rear = (rear + 1) % MAX;
         queue[rear] = value;
    }
}

int get() {
    if(IsEmpty())
        printf("Queue is Empty. \n");
    else{
        front = (front + 1) % MAX;
        // return queue[front];
        printf("%d \n", queue[front]);
        queue[front] = 0;
    }
}
 
int main(){
    
    put(4);
    put(7);
    put(12);
    
    printf("-----Queue의 GET 전----- \n");
    printf("배열3 : %d \n", queue[2]);
    printf("배열2 : %d \n", queue[1]);
    printf("배열1 : %d \n", queue[0]);
    
    // printf("%d \n", get());
    // printf("%d \n", get());
    // printf("%d \n", get());
    printf("\n");
    printf("-----Queue의 GET 실행----- \n");
    get();
    //get();
    //get();
    //get(); //다시 큐를 불러오려고 하면
    
    printf("\n");
    printf("-----Queue의 GET 후----- \n");
    printf("배열3 : %d \n", queue[2]);
    printf("배열2 : %d \n", queue[1]);
    printf("배열1 : %d \n", queue[0]);
    
    
    return 0;
}