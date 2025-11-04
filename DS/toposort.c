// // Topological Sort using Kahn's Algorithm (BFS)
// #define MAX 6
// int queue[MAX];
// int visited[MAX] = {0};
// int front = -1, rear = -1;
// #include <stdio.h>

// void enqueue(int vertice){
//     if(rear == MAX) return;
//     if(front == -1) front = 0;
//     queue[++rear] = vertice;
// }

// int dequeue(){
//     if(front == -1 || front > rear) return -1;
//     return queue[front++];
// }

// void topologicalSort(int graph[MAX][MAX]){
//     int indegree[MAX] = {0};

//     // 1. Compute indegree of each vertex
//     for(int i = 0; i < MAX; i++){
//         for(int j = 0; j < MAX; j++){
//             if(graph[i][j] == 1){
//                 indegree[j]++;
//             }
//         }
//     }

//     // 2. Enqueue vertices with indegree 0
//     for(int i = 0; i < MAX; i++){
//         if(indegree[i] == 0){
//             enqueue(i);
//         }
//     }

//     // 3. Process the queue
//     printf("Topological Order: ");
//     while(front != -1 && front <= rear){
//         int current = dequeue();
//         printf("%d ", current);

//         // Decrease indegree of neighbors
//         for(int i = 0; i < MAX; i++){
//             if(graph[current][i] == 1){
//                 indegree[i]--;
//                 if(indegree[i] == 0){
//                     enqueue(i);
//                 }
//             }
//         }
//     }
// }

// void main(){
//     // Graph creation (DAG example)
//     int graph[MAX][MAX] = {
//         {0,1,1,0,0,0},
//         {0,0,0,1,0,0},
//         {0,0,0,1,1,0},
//         {0,0,0,0,0,1},
//         {0,0,0,0,0,1},
//         {0,0,0,0,0,0}
//     };

//     topologicalSort(graph);
// }
