typedef struct ListNode {
    int value;
    ListNode *next;
} ListNode;

ListNode* createNode(int value);

void attachList(ListNode *head, ListNode *node);

void removeItem(ListNode *head, int target);

void freeLinkedList(ListNode *head);
