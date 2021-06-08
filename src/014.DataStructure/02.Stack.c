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
    if(top >= MAX_STACK_SIZE - 1) {
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
    if(IsEmpty() == true) {
        printf("Stack is Empty. \n");
    }
    else {
        return stack[top--];
    }
}
 
int main(){
    
    push(3);
    push(5);
    push(12);
    push(10);
    push(20);
    push(100);
    
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    
    printf("\n");
 
    return 0;
}