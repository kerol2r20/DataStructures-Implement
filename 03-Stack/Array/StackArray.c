#include <stdio.h>
#include <stdlib.h>
#include "StackArray.h"

StackArray* createStackArray(int size) {
    StackArray* temp=(StackArray*)malloc(sizeof(StackArray));
    temp->top=-1;
    temp->capacity=size;
    temp->arr=(int*)malloc(sizeof(int)*size);
    return temp;
}

int isFull(StackArray *stack) {
    if(stack->top+1==stack->capacity){
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty(StackArray *stack) {
    if(stack->top==-1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(StackArray *stack, int item) {
    if(isFull(stack)) {
        fprintf(stderr, "Stack overflow\n");
        exit(1);
    }
    else {
        stack->arr[++stack->top]=item;
    }
}

int pop(StackArray *stack) {
    if(isEmpty(stack)) {
        fprintf(stderr, "Stack is empty, but you want to pop out something\n");
        exit(2);
    }
    else {
        return stack->arr[stack->top--];
    }
}