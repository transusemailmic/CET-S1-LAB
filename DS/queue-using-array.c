// Queue using Array
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX],n,front=-1,rear=-1;
void disp(){
    for(int i=front;i<=rear;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void insert(){
    printf("\nInsert Operation\n");
    if(rear==MAX-1){
        printf("Queue Overflow\n");
    }
    else{
        int val;
        rear++;
        n++;
        printf("Enter the value: ");
        scanf("%d",&val);
        arr[rear]=val;
        printf("\nElement %d inserted to the queue succesfully!",val);
        printf("\nThe elements in the queue are: ");
        disp();
    }
}
void delete(){
    printf("\nDelete Operation\n");
    if(front==-1&&rear==-1||front>rear){
        printf("Queue Underflow\n");
    }
    else{
        int val=arr[front];
        front++;
        n--;
        printf("\nElement %d deleted from the queue succesfully!",val);
        printf("\nThe elements in the queue are: ");
        disp();
    }
}
void main(){
    int i,m;
    printf("Queue Using Array\n");
    printf("Enter the number of elemnents to insert: ");
    front=0;
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        rear++;
        scanf("%d",&arr[i]);
    }
    printf("Elements are inserted into the queue succesfully!\n");
    printf("The elements in the queue are: ");
    disp();
    printf("\nQueue Operations\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Print\n");
    printf("4. Exit\n\n");
    while(1){
        printf("Select the operation: ");
        scanf("%d",&m);
        switch(m){
            case 1: insert();break;
            case 2: delete();break;
            case 3: printf("The elements in the queue are: ");disp();break;
            case 4: exit(0);
            default: printf("invalid\n");
        } 
    }
}