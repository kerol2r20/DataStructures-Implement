#include <stdio.h>
#include <stdlib.h>
#include "QueueList.h"
#include "../../02-Linked-List/ListNode.h"

QueueList* createQueueList() {
    QueueList *temp=(QueueList*)malloc(sizeof(QueueList));
    temp->rear=NULL;
    temp->front=NULL;
    return temp;
}

int isEmpty(QueueList *queue) {
    if(!queue->front) {
        return 1;
    }
    else {
        return 0;
    }
}

void enQueue(QueueList *queue, int value) {
    ListNode *node=createNode(value);
    if(!queue->rear) {
        queue->rear=node;
    }
    else {
        queue->rear->next=node;
        queue->rear=node;
    }
    if(!queue->front) {
        queue->front=node;
    }
}

int deQueue(QueueList *queue) {
    if(isEmpty(queue)) {
        fprintf(stderr, "Queue is empty\n");
        exit(0);
    }
    else {
        int temp=queue->front->value;
        ListNode *previous=queue->front;
        queue->front=queue->front->next;
        free(previous);
        return temp;
    }
}
