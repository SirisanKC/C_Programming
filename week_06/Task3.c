#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct {
    Node *top;
} Stack;

Stack *createStack() {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (!s) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    s->top = NULL;
    return s;
}

int StackEmpty(Stack *s) {
    return s == NULL || s->top == NULL;
}

void pushStack(Stack *s, int key) {
    if (s == NULL) {
        printf("Stack not initialized!\n");
        return;
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = key;
    newNode->next = s->top;
    s->top = newNode;
}

int popStack(Stack *s) {
    if (StackEmpty(s)) {
        printf("Stack is empty!\n");
        printf("\n");
        return -1;
    }
    Node *temp = s->top;
    int poppedValue = temp->data;
    s->top = temp->next;
    free(temp);
    return poppedValue;
}

void print_list(Node *ptr) {
    if (ptr == NULL) {
        printf("\nStack is empty!\n\n");
        return;
    }
    int position = 1;
    printf("\nPrinting...\n");
    while (ptr != NULL) {
        printf("Node position %d: %d\n", position, ptr->data);
        ptr = ptr->next;
        position++;
    }
    printf("\n");
}

int main() {
    Stack *s = NULL;
    int choice, value;

    while (1) {
        printf("Menu:\n");
        printf("1.Create an empty stack\n");
        printf("2.Push element to a stack\n");
        printf("3.Pop element from a stack\n");
        printf("4.Print stack contents\n");
        printf("0.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (s != NULL) {
                    printf("Stack already created!\n");
                    
                } else {
                    s = createStack();
                    printf("\nStack created successfully!\n");
                    printf("\n");
                }
                break;
            case 2:
                if (s == NULL) {
                    printf("\nThe stack does not exist, please create a stack first!\n");
                    printf("\n");
                } else {
                    printf("\nEnter an integer to be pushed:\n");
                    printf("\n");
                    scanf("%d", &value);
                    pushStack(s, value);
                }
                break;
            case 3:
                if (s == NULL) {
                    printf("\nThe stack does not exist, please create a stack first!\n");
                    printf("\n");
                } else {
                    value = popStack(s);
                    if (value != -1) {
                        printf("\nPopped element: %d\n", value);
                        printf("\n");
                    }
                }
                break;
            case 4:
                if (s == NULL) {
                    printf("\nThe stack does not exist, please create a stack first!\n");
                    printf("\n");
                } else {
                    print_list(s->top);
                }
                break;
            case 0:
                if (s != NULL) {
                    while (!StackEmpty(s)) {
                        popStack(s);
                    }
                    free(s);
                }
                printf("\nExiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}