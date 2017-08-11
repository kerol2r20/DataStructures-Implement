#include <stdio.h>
#include <stdlib.h>
#include "StackList.h"
#include "../../02-Linked-List/ListNode.h"

StackList* createStackList() {
    StackList *temp=(StackList*)malloc(sizeof(StackList));
    temp->top=NULL;
    return temp;
}

int isEmpty(StackList *stack) {
    if(!stack->top) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(StackList *stack, int item) {
    ListNode *node=createNode(item);
    node->next=stack->top;
    stack->top=node;
}

int pop(StackList *stack) {
    if(isEmpty(stack)) {
        fprintf(stderr, "stack is empty, but you want to pop out something\n");
        exit(1);
    }
    else {
        int value = stack->top->value;
        ListNode *oldTop=stack->top;
        stack->top=stack->top->next;
        free(oldTop);
        return value;
    }
}
