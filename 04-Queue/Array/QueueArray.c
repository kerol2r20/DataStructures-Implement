#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"

QueueArray* createQueueArray(int size) {
    QueueArray *temp=(QueueArray*)malloc(sizeof(QueueArray));
    temp->capacity=size;
    temp->rear=-1;
    temp->front=-1;
    temp->arr=(int*) malloc(sizeof(int)*size);
    return temp;
}

int isEmpty(QueueArray *queue) {
    if(queue->rear==queue->front) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(QueueArray *queue) {
    if(queue->rear+1==queue->capacity) {
        return 1;
    }
    else {
        return 0;
    }
}

void enQueue(QueueArray *queue, int value) {
    if(isFull(queue)) {
        fprintf(stderr, "Enqueue fail, queue is full\n");
        exit(1);
    }
    else {
        queue->arr[++queue->rear]=value;
    }
}

int deQueue(QueueArray *queue) {
    if(isEmpty(queue)) {
        fprintf(stderr, "Dequeue fail, queue is empty\n");
        exit(2);
    }
    else {
        return queue->arr[++queue->front];
    }
}
