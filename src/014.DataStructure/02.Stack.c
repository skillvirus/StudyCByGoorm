#include <stdio.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;
 
int IsEmpty(){
    if(top < 0) {
        return true;
    }
    else {
        return false;
    }
}

int IsFull(){
    int temp = top;
    if (++temp >= MAX_STACK_SIZE) {
        return true;
    }
    else {
        return false;
    }
}
 
void push(int value){
    if(IsFull() == true) {
        printf("Stack is Full. \n");
    }
    else {
        stack[++top] = value; 
    }
}
 
int pop(){
    if (IsEmpty() == true) {
        printf("Stack is empty \n");
    } 
    else {
        int currentIndex = top;
        int returnValue = stack[top--];
        stack[currentIndex] = 0;
        return returnValue;
    }
}
 
int main(){
    
    push(3);
    push(2);
    push(10);
    push(12);
    push(13);
    //push(14);
    
    printf("-----Stack의 POP 전----- \n");
    printf("배열5 : %d \n", stack[4]);
    printf("배열4 : %d \n", stack[3]);
    printf("배열3 : %d \n", stack[2]);
    printf("배열2 : %d \n", stack[1]);
    printf("배열1 : %d \n", stack[0]);
    
    printf("\n");
    
    printf("%d \n", pop());
    printf("%d \n", pop());
    printf("%d \n", pop());
    printf("%d \n", pop());
    printf("%d \n", pop());
    printf("%d \n", pop());
    
    printf("\n");
    
    printf("-----Stack의 POP 후----- \n");
    printf("배열5 : %d \n", stack[4]);
    printf("배열4 : %d \n", stack[3]);
    printf("배열3 : %d \n", stack[2]);
    printf("배열2 : %d \n", stack[1]);
    printf("배열1 : %d \n", stack[0]);
 
    return 0;
}