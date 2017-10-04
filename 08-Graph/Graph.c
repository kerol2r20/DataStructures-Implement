#include <stdio.h>
#include "Graph.h"
#include "../04-Queue/Linked-List/QueueList.h"

void dfs(int vertexNum, int graph[vertexNum][vertexNum], int start, int visited[vertexNum]) {
	printf("%d ", start);
	visited[start]=1;
	for(int j=0; j<vertexNum; j++) {
		if(graph[start][j]!=0 && visited[j]!=1) {
			dfs(vertexNum, graph, j, visited);
		}
	}
}

void bfs(int vertexNum, int graph[vertexNum][vertexNum], int start, int visited[vertexNum], QueueList *queue) {
	printf("%d ", start);
	visited[start]=1;
	enQueue(queue, start);
	int count=0;
	while(!isEmpty(queue)) {
		int target=deQueue(queue);
		for(int j=0; j<vertexNum; j++) {
			if(graph[target][j]!=0 && visited[j]!=1) {
				printf("%d ", j);
				visited[j]=1;
				enQueue(queue, j);
			}
		}
		count++;
	}
}
