#include <stdio.h>

#define MAX 100

int main()
{
int graph[MAX][MAX];
int visited[MAX] = {0};
int n, edges = 0;
int min, u = -1, v = -1;
int total = 0;
printf("Enter number of vertices: ");
scanf("%d", &n);
printf("Enter adjacency matrix:\n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
scanf("%d", &graph[i][j]);
}
}

visited[0] = 1;
printf("\nEdges in Minimum Spanning Tree:\n");
while (edges < n - 1)
{
min = 999;
u = -1;
v = -1;
for (int i = 0; i < n; i++)
{
if (visited[i])
{
for (int j = 0; j < n; j++)
{
if (!visited[j] && graph[i][j] != 0 &&
graph[i][j] < min)
{
min = graph[i][j];
u = i;
v = j;
}
}
}
}
if (u == -1)
{
printf("Graph is disconnected!\n");
return 0;

}
printf("%d - %d : %d\n", u + 1, v + 1, min);
visited[v] = 1;
total = total + min;
edges++;
}
printf("Total cost of MST = %d\n", total);
return 0;
}
