#include "../../02-Linked-List/ListNode.h"

#ifndef STACKLIST_H
#define STACKLIST_H

typedef struct StackList {
    ListNode *top;
} StackList;

StackList* createStackList();

int isEmpty(StackList *stack);

void push(StackList *stack, int item);

int pop(StackList *stack);

#endif