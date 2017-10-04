#include <stdio.h>
#include "Graph.h"
#include "../04-Queue/Linked-List/QueueList.h"

int main() {
	int vertexNum=7;
	int visited[7]={0,0,0,0,0,0,0};
	int AdjMat[7][7]={
		{0,1,1,0,0,0,0},
		{1,0,1,1,0,0,0},
		{1,1,0,0,1,0,0},
		{0,1,0,0,1,0,0},
		{0,0,1,1,0,1,0},
		{0,0,0,0,1,0,1},
		{0,0,0,0,0,1,0}
	};
	printf("DFS: ");
	dfs(vertexNum, AdjMat, 0, visited);
	printf("\n");

	QueueList *queue=createQueueList();
	for(int i=0; i<7; i++) visited[i]=0;
	printf("BDS: ");
	bfs(vertexNum, AdjMat, 0, visited, queue);
	printf("\n");

	return 1;
}
