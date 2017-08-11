#include <stdio.h>
#include "StackList.h"

int main() {
    StackList *stack=createStackList();
    for(int i=0; i<9; i++) {
        push(stack, i);
    }
    printf("%d", pop(stack));
    return 1;
}