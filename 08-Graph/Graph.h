#ifndef GRAPH_H
#define GRAPH_H

#include "../04-Queue/Linked-List/QueueList.h"
void dfs(int vertexNum, int graph[vertexNum][vertexNum], int start, int visited[vertexNum]);
void bfs(int vertexNum, int graph[vertexNum][vertexNum], int start, int visited[vertexNum], QueueList *queue);

#endif
