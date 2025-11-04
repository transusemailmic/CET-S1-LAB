// Depth First Search
#define MAX 6
int stack[MAX];
int visited[MAX]={0};
int top=-1;
#include <stdio.h>
void push(int vertice){
    if(top==MAX-1)
        return;
    stack[++top]=vertice;
}
int pop(){
    if(top==-1)
        return -1;
    return stack[top--];
}
void dfs(int graph[MAX][MAX],int start){
    push(start);
    while(top!=-1){
        int current=pop();
        if(visited[current]==0){
            printf("%d ",current);
            visited[current]=1;
            for(int i=MAX-1;i>=0;i--){
                if(graph[current][i]==1&&visited[i]==0){
                    push(i);
                }
            }
        }
    }
}
void main(){
    //Graph Creation
    int graph[MAX][MAX]={
        {0,1,0,0,1,1},
        {1,0,1,0,0,1},
        {0,1,0,1,0,1},
        {0,0,1,0,1,1},
        {1,0,0,1,0,1},
        {1,1,1,1,1,0}
    };
    dfs(graph,0);
}
