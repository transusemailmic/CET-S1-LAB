#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createStack() {
    return NULL; 
}


void push(struct Node** top, int value) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = *top;  
    *top = newNode;        
    printf("%d pushed onto the stack.\n", value);
}


int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow! The stack is empty.\n");
        return -1;  
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;  
    free(temp);  
    return poppedValue;
}


int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1;  
    }
    return top->data;
}


int isEmpty(struct Node* top) {
    return top == NULL;
}


void display(struct Node* top) {
    if (top == NULL) {
        printf("The stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom):\n");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Node* stack = createStack();  
    
 
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    

    display(stack);
    
   
    printf("Top element: %d\n", peek(stack));
    

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    
   
    display(stack);
    
    
    if (isEmpty(stack)) {
        printf("The stack is empty.\n");
    } else {
        printf("The stack is not empty.\n");
    }

    return 0;
}
