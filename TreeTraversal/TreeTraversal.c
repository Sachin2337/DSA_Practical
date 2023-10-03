#include "TreeTraversal.h"
#include <stdio.h>

// Function to perform a preorder traversal of the binary tree
void preorderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data); // Process the current node
    preorderTraversal(root->left); // Recursively traverse the left subtree
    preorderTraversal(root->right); // Recursively traverse the right subtree
}

// Function to perform an inorder traversal of the binary tree
void inorderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left); // Recursively traverse the left subtree
    printf("%d ", root->data); // Process the current node
    inorderTraversal(root->right); // Recursively traverse the right subtree
}

// Function to perform a postorder traversal of the binary tree
void postorderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left); // Recursively traverse the left subtree
    postorderTraversal(root->right); // Recursively traverse the right subtree
    printf("%d ", root->data); // Process the current node
}
