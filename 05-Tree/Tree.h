typedef struct TreeNode {
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
    struct TreeNode *parents;
} TreeNode;

TreeNode* createTreeNode(int value);

TreeNode* BSTSearch(TreeNode *root, int target);

void BSTInsert(TreeNode *root, int value);

void BSTDelete(TreeNode *root, int value);
