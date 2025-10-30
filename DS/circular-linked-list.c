// Circular Linked List with Dummy Head Node
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;
struct node* tail;

void insert_end() {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data to insert to the node: ");
    scanf("%d", &newnode->data);

    if (head->next == head) {
        head->next = newnode;
        tail = newnode;
        tail->next = head;
    } else {
        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
    }

    printf("\nNode inserted at the end successfully!");
    getc(stdin); getc(stdin);
}

void insert_front() {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data to insert to the node: ");
    scanf("%d", &newnode->data);

    if (head->next == head) {
        head->next = newnode;
        tail = newnode;
        tail->next = head;
    } else {
        newnode->next = head->next;
        head->next = newnode;
        tail->next = head->next;
    }

    printf("\nNode inserted at the front successfully!");
    getc(stdin); getc(stdin);
}

void insert_middle() {
    if (head->next == head) {
        printf("\nList is empty!");
        getc(stdin); getc(stdin);
        return;
    }

    int key;
    printf("\nEnter the element after which to insert the node: ");
    scanf("%d", &key);

    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data to insert to the node: ");
    scanf("%d", &newnode->data);

    struct node* ptr = head->next;
    while (ptr != head) {
        if (ptr->data == key) {
            newnode->next = ptr->next;
            ptr->next = newnode;

            if (ptr == tail)
                tail = newnode;

            printf("\nNode inserted after %d successfully!", key);
            getc(stdin); getc(stdin);
            return;
        }
        ptr = ptr->next;
    }

    printf("\nKey not found!");
    getc(stdin); getc(stdin);
}

void delete_end() {
    if (head->next == head) {
        printf("\nThe Linked List is empty!");
        getc(stdin); getc(stdin);
        return;
    }

    struct node* ptr = head;
    while (ptr->next != tail)
        ptr = ptr->next;

    struct node* temp = tail;
    ptr->next = head;
    tail = ptr;
    free(temp);

    printf("\nNode deleted from the end successfully!");
    getc(stdin); getc(stdin);
}

void delete_front() {
    if (head->next == head) {
        printf("\nThe Linked List is empty!");
        getc(stdin); getc(stdin);
        return;
    }

    struct node* temp = head->next;

    if (head->next == tail) {
        head->next = head;
        free(temp);
        tail = NULL;
    } else {
        head->next = temp->next;
        tail->next = head->next;
        free(temp);
    }

    printf("\nNode deleted from the front successfully!");
    getc(stdin); getc(stdin);
}

void delete_middle() {
    if (head->next == head) {
        printf("\nThe Linked List is empty!");
        getc(stdin); getc(stdin);
        return;
    }

    int key;
    printf("\nEnter the node to delete: ");
    scanf("%d", &key);

    struct node* ptr = head;
    while (ptr->next != head) {
        if (ptr->next->data == key) {
            struct node* temp = ptr->next;
            ptr->next = temp->next;

            if (temp == tail)
                tail = ptr;

            free(temp);
            printf("\nNode %d deleted successfully!", key);
            getc(stdin); getc(stdin);
            return;
        }
        ptr = ptr->next;
    }

    printf("\nKey not found!");
    getc(stdin); getc(stdin);
}

void search() {
    if (head->next == head) {
        printf("\nList is empty!");
        getc(stdin); getc(stdin);
        return;
    }

    int key, pos = 1;
    struct node* ptr = head->next;

    printf("\nEnter the node to search for: ");
    scanf("%d", &key);

    while (ptr != head) {
        if (ptr->data == key) {
            printf("\nThe element found at position %d successfully!", pos);
            getc(stdin); getc(stdin);
            return;
        }
        ptr = ptr->next;
        pos++;
    }

    printf("\nNode not found!");
    getc(stdin); getc(stdin);
}

void disp() {
    if (head->next == head) {
        printf("\nThe Linked List is empty!");
        getc(stdin); getc(stdin);
        return;
    }

    printf("\nThe elements of the linked list are: ");
    struct node* ptr = head->next;
    while (ptr != head) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("(back to start)");

    getc(stdin); getc(stdin);
}

void main() {
    head = (struct node*) malloc(sizeof(struct node));
    head->data = 0;
    head->next = head;
    tail = NULL;

    int choice;
    while (1) {
        printf("\n\nCircular Linked List\n");
        printf("\n1. Insertion at End");
        printf("\n2. Insertion at Front");
        printf("\n3. Insertion at Middle");
        printf("\n4. Deletion at End");
        printf("\n5. Deletion at Front");
        printf("\n6. Deletion at Middle");
        printf("\n7. Searching");
        printf("\n8. Display");
        printf("\n9. Exit");
        printf("\n\nEnter the option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert_end(); break;
            case 2: insert_front(); break;
            case 3: insert_middle(); break;
            case 4: delete_end(); break;
            case 5: delete_front(); break;
            case 6: delete_middle(); break;
            case 7: search(); break;
            case 8: disp(); break;
            case 9: exit(0);
            default: printf("\nInvalid Option");
        }
    }
}
