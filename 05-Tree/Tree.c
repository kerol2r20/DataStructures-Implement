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
            root->right->parents=root;
        }
        else {
            BSTInsert(root->right, value);
        }
    }
    else if(value<root->value) {
        if(!root->left) {
            root->left=createTreeNode(value);
            root->left->parents=root;
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

    // Find out the max node of left child tree of min node of right tree
    TreeNode *replace=NULL;
    if(target->left) {
        replace=target->left;
        while(replace->right) replace=replace->right;
    }
    else if(target->right) {
        replace=target->right;
        while(replace->left) replace=replace->left;
    }
    else {
        replace=target;
    }
    
    target->value=replace->value;
    TreeNode *parents=replace->parents;
    TreeNode *subreplace=NULL;
    if(replace->left) subreplace=replace->left;
    if(replace->right) subreplace=replace->right;
    if(parents) {
        if(parents->left==replace) {
            if(subreplace) {
                parents->left=subreplace;
            }
            else {
                parents->left=NULL;
            }
        }
        else if (parents->right==replace) {
            if(subreplace) {
                parents->right=subreplace;
            }
            else {
                parents->right=NULL;
            }
        }
    }
    free(replace);
}

void InorderTraversal(TreeNode *root) {
    if(root) {
        InorderTraversal(root->left);
        printf("%d ", root->value);
        InorderTraversal(root->right);
    }
}

void PreorderTraversal(TreeNode *root) {
    if(root) {
        printf("%d ", root->value);
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
}

void PostorderTraversal(TreeNode *root) {
    if(root) {
        PostorderTraversal(root->left);
        PostorderTraversal(root->right);
        printf("%d ", root->value);
    }
}
