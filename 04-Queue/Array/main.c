#include <stdio.h>
#include "QueueArray.h"

int main() {
    QueueArray *queue=createQueueArray(5);
    for(int i=0; i<5; i++) {
        enQueue(queue, i);
    }
    printf("%d\n",deQueue(queue));
    return 1;
}