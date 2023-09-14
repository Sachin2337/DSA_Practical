#include <stdio.h>
#include <stdlib.h>
#include "Stack/stack.h"               // Include the stack-related header
#include "InfixToPostfix/InfixToPostfix.h" // Include the infix-to-postfix header
//#include "EvaluatePostfixFolder/EvaluatePostfix.h" // Include the postfix evaluation header

int main() {
    int choice;
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    while (1) {
        // Display the main menu
        printf("\nMain Menu:\n");
        printf("1. Stack Operations\n");
        printf("2. Infix to Postfix Conversion\n");
        printf("3. Evaluate Postfix Expression\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");

        // Read user's choice
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Call functions for stack operations from StackFolder
                // You can implement and call specific functions as needed
                // Example:
                // stackOperations();
                printf("Stack Operations selected.\n");
                break;
            case 2:
                // Call functions for infix-to-postfix conversion from InfixToPostfixFolder
                // You can implement and call specific functions as needed
                // Example:
                // infixToPostfix();
                printf("Infix to Postfix Conversion selected.\n");
                break;
            case 3:
                // Call functions for evaluating postfix expressions from EvaluatePostfixFolder
                // You can implement and call specific functions as needed
                // Example:
                // evaluatePostfix();
                printf("Evaluate Postfix Expression selected.\n");
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
