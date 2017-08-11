#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

typedef struct QueueArray {
    int capacity;
    int rear;
    int front;
    int *arr;
} QueueArray;

QueueArray* createQueueArray(int size);

int isEmpty(QueueArray *queue);

int isFull(QueueArray *queue);

void enQueue(QueueArray *queue, int value);

int deQueue(QueueArray *queue);

#endif
