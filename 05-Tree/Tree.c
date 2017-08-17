#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

TreeNode* createTreeNode(int value) {
    TreeNode *temp=(TreeNode*)malloc(sizeof(TreeNode));
    temp->left=NULL;
    temp->right=NULL;
    temp->parents=NULL;
    temp->value=value;
}

TreeNode* BSTSearch(TreeNode *root, int target) {
    if(target==root->value) return root;
    else if(target>root->value) {
        if(root->right) {
            BSTSearch(root->right, target);
        }
        else {
            return NULL;
        }
    }
    else {
        if(root->left) {
            BSTSearch(root->left, target);
        }
        else {
            return NULL;
        }
    }
}

void BSTInsert(TreeNode *root, int value) {
    if(value>root->value) {
        if(!root->right) {
            root->right=createTreeNode(value);
        }
        else {
            BSTInsert(root->right, value);
        }
    }
    else if(value<root->value) {
        if(!root->left) {
            root->left=createTreeNode(value);
        }
        else {
            BSTInsert(root->left, value);
        }
    }
    else {
        fprintf(stderr, "Fail to insert node to bst, the value has been added\n");
        return;
    }
}

void BSTDelete(TreeNode *root, int value) {
    TreeNode *target=BSTSearch(root, value);
}
