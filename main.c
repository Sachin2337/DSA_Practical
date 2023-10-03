#include <stdio.h>
#include <stdlib.h>
#include "Stack/stack.h"    // Include the stack-related header
#include "InfixToPostfix/InfixToPostfix.h"  // Include the InfixToPostfix header
#include "EvaluatePostfix/EvaluatePostfix.h"    // Include the postfix evaluation header
#include "BracketMatching/BracketMatching.h"    // Include the BracketMatching header
#include "BinaryTrees/BinaryTrees.h"    // Include the BinaryTrees header
#include "TreeTraversal/TreeTraversal.h"    // Include the TreeTraversal header

// Define the stackOperations function separately
void stackOperations() {
    // Create a stack with a specified capacity (e.g., 10)
    Stack* stack = createStack(10);

    int choice;
    int item;

    while (1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element to push: ");
                scanf("%d", &item);
                push(stack, item);
                break;
            case 2:
                item = pop(stack);
                if (item != -1) {
                    printf("Popped element: %d\n", item);
                }
                break;
            case 3:
                item = peek(stack);
                if (item != -1) {
                    printf("Top element: %d\n", item);
                }
                break;
            case 4:
                displayStack(stack);
                break;
            case 5:
                free(stack->array);  // Free the memory allocated for the stack array
                free(stack);         // Free the memory allocated for the stack structure
                return;              // Return to the main menu
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Define binary tree operations function separately
void binaryTreeOperations() {
    TreeNode* root = NULL; // Initialize an empty binary tree

    int choice;
    int item;

    while (1) {
        printf("\nBinary Tree Operations Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element to insert: ");
                scanf("%d", &item);
                root = insert(root, item);
                break;
            case 2:
                printf("Enter an element to delete: ");
                scanf("%d", &item);
                root = deleteNode(root, item);
                break;
            case 3:
                printf("Enter an element to search: ");
                scanf("%d", &item);
                TreeNode* result = search(root, item);
                if (result) {
                    printf("Element %d found in the tree.\n", item);
                } else {
                    printf("Element %d not found in the tree.\n", item);
                }
                break;
            case 4:
                // Free the memory allocated for the binary tree (you may need to implement this function)
                // freeBinaryTree(root);
                return;  // Return to the main menu
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    int choice;
    TreeNode* root = NULL; // Initialize the root pointer

    while (1) {
        // Display the main menu
        printf("\nMain Menu:\n");
        printf("1. Stack Operations\n");
        printf("2. Infix to Postfix Conversion\n");
        printf("3. Evaluate Postfix Expression\n");
        printf("4. Bracket Matching\n");
        printf("5. Binary Trees\n");
        printf("6. Tree Traversal\n");
        printf("7. Quit\n");
        printf("Enter your choice: ");

        // Read user's choice
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                stackOperations();  // Call functions for stack operations from Stack
                break;
            case 2:
                infixToPostfix();   // Call functions for infix-to-postfix conversion from InfixToPostfix
                break;
            case 3:
                evaluatePostfix();  // Call functions for evaluating postfix expressions from EvaluatePostfix
                break;
            case 4:
                bracketMatching();   // Call function for bracket matching from BracketMatching
                break;
            case 5:
                binaryTreeOperations();  // Call functions for binary tree operations
                break;
            case 6:
                // Add code here to call tree traversal functions
                while (1) {
                    printf("Tree Traversal Menu:\n");
                    printf("1. Preorder Traversal\n");
                    printf("2. Inorder Traversal\n");
                    printf("3. Postorder Traversal\n");
                    printf("4. Back to Main Menu\n");
                    printf("Enter your choice: ");
                    int traversalChoice;
                    scanf("%d", &traversalChoice);
                    switch (traversalChoice) {
                        case 1:
                            // Call the preorder traversal function
                            preorderTraversal(root); // You should pass your binary tree's root here
                            break;
                        case 2:
                            // Call the inorder traversal function
                            inorderTraversal(root); // You should pass your binary tree's root here
                            break;
                        case 3:
                            // Call the postorder traversal function
                            postorderTraversal(root); // You should pass your binary tree's root here
                            break;
                        case 4:
                            // Return to the main menu
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                }
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
