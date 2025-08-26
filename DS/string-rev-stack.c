// Reversing a String using Stack Operation
#include <stdio.h>
#define MAX 100
void main(){
    char s1[MAX];
    char s2[MAX];
    char stack[MAX];
    int top=0;
    printf("Please Enter the String: ");
    scanf("%s",s1);
    int i=0;
    while(s1[i]!='\0'){
        stack[top]=s1[i];
        i++;
        top++;
    }
    top--;
    i=0;
    while(top>=0){
        s2[i]=stack[top];
        top--;
        i++;
    }
    s2[i]='\0';
    printf("Reversed String is %s",s2);
}