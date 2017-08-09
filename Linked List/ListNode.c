#include "ListNode.h"
#include <stdlib.h>

#ifndef LISTNODE_H
#define LISTNODE_H

ListNode* createNode(int value) {
    ListNode *head = (ListNode*)malloc(sizeof(ListNode));
    head->next=NULL;
    head->value=value;
    return head;
}

void attachList(ListNode *head, ListNode *node) {
    ListNode* temp=NULL;
    for(temp=head; temp->next!=NULL;temp=temp->next);
    temp->next = node;
}

void removeItem(ListNode *head, int target) {
    ListNode *current=NULL, *previous=NULL;
    for(current=head; current!=NULL&&current->value!=target; current=current->next){
        previous=current;
    }
    if(current) {
        previous->next=current->next;
        free(current);
    }
    else {
        exit(1);
    }
}

void freeLinkedList(ListNode *head) {
    ListNode *next=NULL;
    while(head!=NULL){
        next=head->next;
        free(head);
        head=next;
    }
}

#endif