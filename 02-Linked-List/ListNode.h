#ifndef LISTNODE_H
#define LISTNODE_H

typedef struct ListNode {
    int value;
    struct ListNode *next;
} ListNode;

ListNode* createNode(int value);

void attachList(ListNode *head, ListNode *node);

void removeItem(ListNode *head, int target);

void freeLinkedList(ListNode *head);

void reverseList(ListNode **head);

#endif
