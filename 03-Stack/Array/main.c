#include <stdio.h>
#include "StackArray.h"

int main() {
    StackArray *stackarray=createStackArray(5);
    for(int i=0; i<5; i++) {
        push(stackarray, i);
    }
    printf("%d\n", pop(stackarray));
    return 0;
}