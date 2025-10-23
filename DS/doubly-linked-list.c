// Doubly Linked Lists
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;
void insert_end(){
    struct node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=(struct node*) malloc(sizeof(struct node));
    printf("\nEnter the data to insert to the node: ");
    scanf("%d",&ptr->next->data);
    ptr->next->next=NULL;
    ptr->next->prev=ptr;
    printf("\nNode inserted at the end succesfully!");
    getc(stdin);getc(stdin);
}
void insert_front(){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to insert to the node: ");
    scanf("%d",&ptr->data);
    ptr->next=head->next;
    ptr->next->prev=ptr;
    ptr->prev=head;
    head->next=ptr;
    printf("\nNode inserted at the front succesfully!");
    getc(stdin);getc(stdin);
}
void insert_middle(){
    int key;
    printf("\nEnter the element after which to insert the node: ");
    scanf("%d",&key);
    printf("\nEnter the data to insert to the node: ");
    struct node* n1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n1->data);
    struct node* ptr=head->next;
    while(ptr!=NULL){
        if(ptr->data==key){
            n1->next = ptr->next;
            n1->prev = ptr;
            ptr->next->prev=n1;
            ptr->next=n1;
            printf("\nNode inserted after %d succesfully!",key);
            getc(stdin);getc(stdin);
            return;
        }
        ptr=ptr->next;
    }
    printf("\nKey not found");
    getc(stdin);getc(stdin);
}
void delete_end(){
    struct node* ptr=head;
    if(head->next==NULL){
        printf("\nThe Linked List is empty!");
        getc(stdin);getc(stdin);
        return;
    }
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=NULL;
    printf("\nNode deleted from the end successfully!");
    getc(stdin);getc(stdin);
}
void delete_front(){
    struct node* ptr=head;
    if(head->next==NULL){
        printf("\nThe Linked List is empty!");
        getc(stdin);getc(stdin);
        return;
    }
    head->next=ptr->next->next;
    head->next->prev=head;
    printf("\nNode deleted from the front successfully!");
    getc(stdin);getc(stdin);
}
void delete_middle(){
    struct node* ptr=head;
    int key;
    if(head->next==NULL){
        printf("\nThe Linked List is empty!");
        getc(stdin);getc(stdin);
        return;
    }
    printf("\nEnter the node to delete: ");
    scanf("%d",&key);
    while(ptr->next!=NULL){
        if(ptr->next->data==key){
            ptr->next=ptr->next->next;
            ptr->next->prev=ptr;
            printf("\nNode %d deleted succesfully!",key);
            getc(stdin);getc(stdin);
            return;
        }
        ptr=ptr->next;
    }
    printf("\nKey not found");
    getc(stdin);getc(stdin);
}
void search(){
    struct node* ptr=head->next;
    int key;
    int pos=0;
    printf("\nEnter the node to search for: ");
    scanf("%d",&key);
    while(ptr!=NULL){
        pos++;
        if(ptr->data==key){
            printf("\nThe element found at position %d succesfully!",pos);
            getc(stdin);getc(stdin);
            return;
        }
        ptr=ptr->next;
    }
    printf("\nNode not found");
    getc(stdin);getc(stdin);
}
void disp(){
    printf("\nThe elements of the linked list are: ");
    struct node* ptr=head->next;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
    getc(stdin);getc(stdin);
}
void main(){
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    head->prev=NULL;
    head->data='\0';
    int choice;
    while(1){
        printf("\n\nDoubly Linked List\n");
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
        scanf("%d",&choice);
        switch(choice){
            case 1:insert_end(); break;
            case 2:insert_front(); break;
            case 3:insert_middle(); break;
            case 4:delete_end(); break;
            case 5:delete_front(); break;
            case 6:delete_middle(); break;
            case 7:search();break;
            case 8:disp();break;
            case 9:exit(0); break;
            default: printf("\nInvalid Option");
        }
    }
}