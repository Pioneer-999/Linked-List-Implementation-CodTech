#include <stdio.h>
#include <stdlib.h>

// Structure for each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Head pointer (global for simplicity)
struct Node* head = NULL;

// Function to create a new node with given data
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert a node at the beginning
void insertAtBeginning(int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at the beginning.\n", value);
}

// Insert a node at the end
void insertAtEnd(int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("Inserted %d at the end.\n", value);
}

// Delete the first node with the given value
void deleteNode(int value) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    // If the head itself holds the value
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        printf("Deleted %d from the list.\n", value);
        return;
    }

    // Search for the node to delete
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If value not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node and free memory
    prev->next = temp->next;
    free(temp);
    printf("Deleted %d from the list.\n", value);
}

// Display the linked list
void traverseList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main menu
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete a Node (by value)\n");
        printf("4. Traverse (Display)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;
            case 4:
                traverseList();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
