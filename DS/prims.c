// Prim's Algorithm 

#define MAX 6
#include <stdio.h>
int visited[MAX]={0};
void removeSelfLoops(int graph[MAX][MAX]){
    for(int i=0;i<MAX;i++){
        graph[i][i]=0;
    }
}
void prims(int graph[MAX][MAX]){
    int totalCost=0;
    visited[0]=1;
    printf("Edges in Minimum Spanning Tree:\n");
    for(int edges=0;edges<MAX-1;edges++){
        int min=999;
        int u=-1,v=-1;
        for(int i=0;i<MAX;i++){
            if(visited[i]==1){
                for(int j=0;j<MAX;j++){
                    if(visited[j]==0&&graph[i][j]!=0&&graph[i][j]<min){
                        min=graph[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        visited[v]=1;
        totalCost+=min;
        printf("%d - %d  Cost: %d\n",u,v,min);
    }
    printf("Total Cost of Minimum Spanning Tree: %d\n",totalCost);
}
void main(){
    // Graph Creation (Weighted)
    int graph[MAX][MAX]={
        {0,3,0,0,6,5},
        {3,0,1,0,0,4},
        {0,1,0,6,0,4},
        {0,0,6,0,8,5},
        {6,0,0,8,0,2},
        {5,4,4,5,2,0}
    };
    removeSelfLoops(graph);
    prims(graph);
}
