#ifndef QUEUELIST_H
#define QUEUELIST_H

#include "../../02-Linked-List/ListNode.h"

typedef struct QueueList {
    ListNode *rear;
    ListNode *front;
} QueueList;

QueueList* createQueueList();

int isEmpty(QueueList *queue);

void enQueue(QueueList *queue, int value);

int deQueue(QueueList *queue);

#endif