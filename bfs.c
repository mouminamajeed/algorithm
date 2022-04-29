#include<stdio.h>
int a[20][20], que[20], visited[20], n, i, j, fr = 0, rr = -1;

void bfs(int v) {
 for(i = 1; i <= n; i++)
 if(a[v][i] && !visited[i])
 que[++rr] = i;//pre incr i.e q[0]=strt vrtx
 if(fr <= rr) {
 visited[que[fr]] = 1;
 bfs(que[fr++]);
 }
}

void main() {
 int v;
 printf("\n Enter the number of vertices:");
 scanf("%d", &n);
 
 for(i=1; i <= n; i++) {
 que[i] = 0;
 visited[i] = 0;
 }
 
 printf("\n Enter graph data in matrix form:\n");
 for(i=1; i<=n; i++) {
 for(j=1;j<=n;j++) {
 scanf("%d", &a[i][j]);
 }
 }
 
 printf("\n Enter the starting vertex:");
 scanf("%d", &v);
 bfs(v);
 printf("\n The node which are reachable are:\n");
 
 for(i=1; i <= n; i++) {
 if(visited[i])
 printf("%d\t", i);
 else {
 printf("\n Bfs is not possible. Not all nodes are reachable");
 break;
 }
 }
}
