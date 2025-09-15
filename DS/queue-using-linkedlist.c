#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct Queue{
    struct node* front;
    struct node* rear;
}

void enqueue(struct Queue* queue, int value){
    strcut node* newnode=(struct node*)malloc(sizeof(struct node*));
    if(!newnode)
    printf("memory allocation failed!!");
}

newnode->data=value;
newnode->next=NULL;

if(queue->rear==NULL){
    queue->front=queue->rear=newnode
    printf("enqueue operation.\n",value);
    return;
}

if(queue->front==NULL){
     printf("Queue underflow! The queue is empty.\n");
        return -1;
}




