#include <stdio.h>
#include "QueueList.h"

int main() {
    QueueList *queue=createQueueList();
    for(int i=0; i<5; i++) {
        enQueue(queue, i);
    }
    printf("%d\t", deQueue(queue));
    printf("%d\t", deQueue(queue));
    printf("%d\t", deQueue(queue));
    printf("%d\t", deQueue(queue));
    printf("%d\t", deQueue(queue));
    enQueue(queue, 6);
    return 1;
}
