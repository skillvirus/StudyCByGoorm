#include <stdio.h>
#include <stdbool.h>
#include "SimulatorStack.h"

int top = -1;

int IsEmpty() {
    if (top < 0) {
        return true;
    }
    else {
        return false;
    }
}

int IsFull() {
    int temp = top;
    if (++temp >= MAX_STACK_SIZE) {
        return true;
    }
    else {
        return false;
    }
}

void push(int value) {
    if (IsFull() == true) {
        printf("Stack is Full. \n");
    }
    else {
        stack[++top] = value;
    }
}

int pop() {
    if (IsEmpty() == true) {
        printf("Stack is empty \n");
    }
    else {
        int currentIndex = top;
        int returnValue = stack[top--];
        stack[currentIndex] = 0;
        printf("%d \n", returnValue);
        //return returnValue;
    }
}