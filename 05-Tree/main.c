#include <stdio.h>
#include "Tree.h"

int main() {
    TreeNode *root=createTreeNode(12);
    BSTInsert(root, 5);
    BSTInsert(root, 3);
    BSTInsert(root, 20);
    BSTInsert(root, 25);
    BSTInsert(root, 23);
    BSTInsert(root, 27);
    BSTInsert(root, 24);
    BSTDelete(root, 23);
    printf("\nInorder: ");
    InorderTraversal(root);
    printf("\nPostorder: ");
    PostorderTraversal(root);
    printf("\nPreorder: ");
    PreorderTraversal(root);
    return 0;
}