#include <stdio.h>
#include "ListNode.h"

int main() {
    ListNode *head=createNode(0);
    for(int i=1; i<10 ;i++) {
        attachList(head, createNode(i));
    }
    removeItem(head, 3);
    for(ListNode *temp=head; temp!=NULL; temp=temp->next){
        printf("%d", temp->value);
    }
    printf("\n");
    reverseList(&head);
    for(ListNode *temp=head; temp!=NULL; temp=temp->next){
        printf("%d", temp->value);
    }
    freeLinkedList(head);
    return 0;
}