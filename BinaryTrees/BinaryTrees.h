#ifndef BINARYTREES_H
#define BINARYTREES_H

// Define a structure for a binary tree node
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Function prototypes
TreeNode* createNode(int data);
TreeNode* insert(TreeNode* root, int data);
TreeNode* search(TreeNode* root, int key);
TreeNode* findMin(TreeNode* node);
TreeNode* deleteNode(TreeNode* root, int key);

#endif
