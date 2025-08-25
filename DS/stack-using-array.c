// Stack using Array
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX],n,top=-1;
void disp(){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void push(){
    printf("\nPush Operation\n");
    if(top==MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        int val;
        top++;
        n++;
        printf("Enter the value: ");
        scanf("%d",&val);
        arr[top]=val;
        printf("\nElement %d pushed to the stack succesfully!",val);
        printf("\nThe elements in the stack are: ");
        disp();
    }
}
void pop(){
    printf("\nPop Operation\n");
    if(top==-1){
        printf("Stack Underflow\n");
    }
    else{
        int val=arr[top];
        top--;
        n--;
        printf("\nElement %d popped from the stack succesfully!",val);
        printf("\nThe elements in the stack are: ");
        disp();
    }
}
void main(){
    int i,m;
    printf("Stack Using Array\n");
    printf("Enter the number of elemnents to insert: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        top++;
        scanf("%d",&arr[i]);
    }
    printf("Elements are inserted into the stack succesfully!\n");
    printf("The elements in the stack are: ");
    disp();
    printf("\nStack Operations\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Print\n");
    printf("4. Exit\n\n");
    while(1){
        printf("Select the operation: ");
        scanf("%d",&m);
        switch(m){
            case 1: push();break;
            case 2: pop();break;
            case 3: printf("The elements in the stack are: ");disp();break;
            case 4: exit(0);
            default: printf("invalid\n");
        } 
    }
}