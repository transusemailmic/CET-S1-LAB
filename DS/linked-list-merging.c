//Linked List Merging
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* h1;
struct node* h2;
void main(){
    h1=(struct node*)malloc(sizeof(struct node));
    h2=(struct node*)malloc(sizeof(struct node));
    h1->data='\0';
    h2->data='\0';
    h1->next=NULL;
    h2->next=NULL;
    int val=0;
    struct node* ptr1=h1;
    struct node* ptr2=h2;
    printf("\nLinked List Merging");
    printf("\nEnter \"-1\" to stop creating Linked List");
    printf("\n\nCreate Linked List 1");
    while(1){
        printf("\nEnter the value for the node: ");
        scanf("%d",&val);
        if(val==-1)break;
        struct node* new=(struct node*)malloc(sizeof(struct node));
        new->data=val;
        new->next=NULL;
        ptr1->next=new;
        ptr1=new;
    }
    ptr1=h1->next;
    printf("\nThe elements of first linked list are: ");
    while(ptr1!=NULL){
        printf("%d->",ptr1->data);
        ptr1=ptr1->next;
    }
    printf("\n\nCreate Linked List 2");
    while(1){
        printf("\nEnter the value for the node: ");
        scanf("%d",&val);
        if(val==-1)break;
        struct node* new=(struct node*)malloc(sizeof(struct node));
        new->data=val;
        new->next=NULL;
        ptr2->next=new;
        ptr2=new;
    }
    ptr2=h2->next;
    printf("\nThe elements of second linked list are: ");
    while(ptr2!=NULL){
        printf("%d->",ptr2->data);
        ptr2=ptr2->next;
    }
    printf("\n\nMerging the two lists");
    ptr1=h1;
    while(ptr1->next!=NULL){
        ptr1=ptr1->next;
    }
    ptr1->next=h2->next;
    ptr1=h1->next;
    printf("\nThe elements of merged linked list are: ");
    while(ptr1!=NULL){
        printf("%d->",ptr1->data);
        ptr1=ptr1->next;
    }
}