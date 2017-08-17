#include "Tree.h"

int main() {
    TreeNode *root=createTreeNode(12);
    BSTInsert(root, 1);
    BSTInsert(root, 10);
    BSTInsert(root, 20);
    return 0;
}