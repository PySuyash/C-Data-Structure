#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node * head = NULL;
struct Node * current = NULL;

void traverse(struct Node* node) {
    while (node != NULL) {
        printf("\n%d\n", node->data);
        node = node -> next;
    }
    printf("\nNode printed successfully");
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {     // newNode == NULL;
        printf("\nMemory Error!\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBegin(struct Node** head, struct Node* newNode) {
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, struct Node* newNode) {
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(struct Node** head, struct Node* newNode, int position) {
    if (position < 1) {
        printf("Invalid Position\n");
        return;
    }

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;

    for (int i=1; i<position-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;
    
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node5 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *endNode1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *endNode2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *position = (struct Node *)malloc(sizeof(struct Node));

    node1 -> data = 7;
    node1 -> next = node2;

    node2 -> data = 8;
    node2 -> next = node3;

    node3 -> data = 9;
    node3 -> next = NULL;

    // Creating new node in the begining.
    node4 = createNode(10);
    node5 = createNode(11); 

    insertAtBegin(&node1, node4);
    insertAtBegin(&node1, node5);

    endNode1 = createNode(23);
    endNode2 = createNode(24);

    insertAtEnd(&node1, endNode1);
    insertAtEnd(&node1, endNode2);

    position = createNode(45);

    insertAtPosition(&node1, position, 3);
    
    // traversing the node.
    traverse(node1);

    deleteNode(&node1, 10);

    traverse(node1);

    return 0;
}