// Breadth First Search
#define MAX 6
int queue[MAX];
int visited[MAX]={0};
int front=-1, rear=-1;
#include <stdio.h>
void enqueue(int vertice){
    if(rear==MAX)
        return;
    if(front==-1){
        front=0;
        rear=0;
    }
    queue[rear]=vertice;
    rear++;
}
int dequeue(){
    if(front==-1||front==rear)
        return -1;
    return queue[front++];
}
void bfs(int graph[MAX][MAX],int start){
    visited[start]=1;
    enqueue(start);
    while(front!=-1&&front<rear){
        int current=dequeue();
        printf("%d ",current);
        for(int i=0;i<MAX;i++){
            if(graph[current][i]==1&&visited[i]==0){
                enqueue(i);
                visited[i]=1;
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
    bfs(graph,0);
}