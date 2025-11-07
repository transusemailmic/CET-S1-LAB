// // Kruskal's Algorithm

// #define MAX 6
// #include <stdio.h>
// struct Edge {
//     int u, v, weight;
// };
// int parent[MAX];
// int find(int i){
//     while(parent[i] != i)
//         i = parent[i];
//     return i;
// }
// void unionSet(int i, int j){
//     int a = find(i);
//     int b = find(j);
//     parent[a] = b;
// }
// void removeSelfLoops(int graph[MAX][MAX]){
//     for(int i=0;i<MAX;i++){
//         graph[i][i] = 0;
//     }
// }
// void kruskal(int graph[MAX][MAX]){
//     struct Edge edges[MAX*MAX];
//     int edgeCount = 0;
//     for(int i=0;i<MAX;i++){
//         for(int j=i+1;j<MAX;j++){ 
//             if(graph[i][j] != 0){
//                 edges[edgeCount].u = i;
//                 edges[edgeCount].v = j;
//                 edges[edgeCount].weight = graph[i][j];
//                 edgeCount++;
//             }
//         }
//     }
//     for(int i=0;i<MAX;i++){
//         parent[i] = i;
//     }
//     for(int i=0;i<edgeCount-1;i++){
//         for(int j=0;j<edgeCount-i-1;j++){
//             if(edges[j].weight > edges[j+1].weight){
//                 struct Edge temp = edges[j];
//                 edges[j] = edges[j+1];
//                 edges[j+1] = temp;
//             }
//         }
//     }
//     int totalCost = 0;
//     printf("Edges in Minimum Spanning Tree:\n");
//     for(int i=0;i<edgeCount;i++){
//         int uRoot = find(edges[i].u);
//         int vRoot = find(edges[i].v);
//         if(uRoot != vRoot){
//             printf("%d - %d  Cost: %d\n", edges[i].u, edges[i].v, edges[i].weight);
//             totalCost += edges[i].weight;
//             unionSet(uRoot, vRoot);
//         }
//     }
//     printf("Total Cost of Minimum Spanning Tree: %d\n", totalCost);
// }
// void main(){
//     // Graph Creation (Weighted)
//     int graph[MAX][MAX] = {
//         {0,3,0,0,6,5},
//         {3,0,1,0,0,4},
//         {0,1,0,6,0,4},
//         {0,0,6,0,8,5},
//         {6,0,0,8,0,2},
//         {5,4,4,5,2,0}
//     };
//     removeSelfLoops(graph);
//     kruskal(graph);
// }
