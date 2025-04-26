#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

typedef struct {
    Node* head;
} List;

List* create() {
    List* list = (List*)malloc(sizeof(List));
    if (list == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    list->head = NULL;
    return list;
}

void insert(List* L, int key) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = key;
    new_node->next = L->head;
    L->head = new_node;
}

void print_list(Node* ptr) {
    int position = 1;
    while (ptr != NULL) {
        printf("Node position %d: %d\n", position, ptr->data);
        ptr = ptr->next;
        position++;
    }
}

void reverse(List* L) {
    Node* prev = NULL;
    Node* current = L->head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    L->head = prev;
}

int main() {
    List* list = create();
    int num;
    char choice;

    do {
        printf("Enter an integer to add:\n");
        scanf("%d", &num);
        insert(list, num);

        printf("Do you want to add more numbers? (y/n):\n");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nOriginal List:\n");
    printf("Printing...\n");
    print_list(list->head);

    reverse(list);
    printf("\nReversed List:\n");
    printf("Printing...\n");
    print_list(list->head);

   
    return 0;
}