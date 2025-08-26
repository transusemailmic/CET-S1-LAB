#include <stdio.h>
#define MAX 100
void main(){
    char queue[MAX];
    int front=-1,rear=0;
    char str[MAX];
    int i=0;
    int flag=1;
    printf("Enter the string: ");
    scanf("%s",str);
    while(str[i]!='\0'){
        queue[rear]=str[i];
        i++;
        rear++;
    }
    queue[i]='\0';
    front++;
    rear--;
    while(front<=rear){
        if(queue[front]!=queue[rear]){
            flag=0;
            break;
        }
        front++;
        rear--;
    }
    if(flag==1){
        printf("%s is a palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
}