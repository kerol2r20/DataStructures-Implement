#include <stdio.h>
#include <stdlib.h>
#include "QueueList.h"
#include "../../02-Linked-List/ListNode.h"

QueueList* createQueueArray() {
    QueueList *temp=(QueueList*)malloc(sizeof(QueueList));
    temp->rear=NULL;
    temp->front=NULL;
    return temp;
}

int isEmpty(QueueList *queue) {
}

void enQueue(QueueList *queue, int value) {
}