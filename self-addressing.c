#include <stdio.h>
#include <stdlib.h>

// Definition of the list node
typedef struct Node {
    int data;           // Data field of the node
    struct Node* next;  // Pointer to the next node
} Node;

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    Node* head = NULL;    // Head pointer to the list
    Node* temp = NULL;    // Temporary pointer for creating new nodes
    int i;

    // Create the first node of the list
    head = createNode(1);
    temp = head;

    // Create the remaining 9 nodes of the list
    for (i = 2; i <= 10; i++) {
        temp->next = createNode(i);
        temp = temp->next;
    }

    // Display the values of the list elements
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
