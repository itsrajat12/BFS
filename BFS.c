#include<stdio.h>
#include<stdlib.h>
# define MAX 4
int a[MAX][MAX],visited[MAX],que[MAX],v,n,i,j,front=-1,rear=-1;
void bfs(int v){
	for(i=1;i<=MAX;i++){
		if(a[v][i]&&!visited[i])
		que[++rear]=i;
		
	}
	if(front<=rear){
		visited[que[front]]=1;
		bfs(que[front++]);
	}
}
void main()
{
	int vertices;
	printf("enter the number of vertices:");
	scanf("%d",&vertices);
	for(i=1;i<vertices;i++){
		que[i]=0;
		visited[i]=0;
	}
	printf("enter the graph data:\n");
	for(i=1;i<=MAX;i++){
	
	for(j=1;j<=MAX;j++){
		scanf("%d",&a[i][j]);
	}
}
	printf("enter the starting data:");
	scanf("%d",&v);
	bfs(v);
	printf("The nodes which are reachable:\n");
	for(i=1;i<=MAX;i++){
		if(visited[i]){
		printf("%d\t",i);
		}
	}
}