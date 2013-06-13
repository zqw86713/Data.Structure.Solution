// algo7-10.cpp ʵ���㷨7.16�ĳ���
#include "c1.h"
#include "func7-1.cpp"
#include "func7-2.cpp"
#include "c7-1.h"
#include "bo7-1.cpp"
typedef Status PathMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM][MAX_VERTEX_NUM];
typedef VRType DistancMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
#include "func7-8.cpp"

void main()
{
	MGraph g;
	int i, j, k;
	PathMatrix p;
	DistancMatrix d;

	CreateFromFile(g, "f7-6.txt", 0);
	for (i = 0; i < g.vexnum; i++)
		g.arcs[i][i].adj = 0;
	Display(g);
	ShortestPath_FLOYD(g, p, d);
	printf("d����\n");
	for (i = 0; i < g.vexnum; i++) {
		for (j = 0; j < g.vexnum; j++)
			printf("%6d", d[i][j]);
		printf("\n");
	}
	printf("p����\n");
	for (i = 0; i < g.vexnum; i++)
		for (j = 0; j < g.vexnum; j++) {
			for (k = 0; k < g.vexnum; k++)
				printf("%d ", p[i][j][k]);
			printf("\n");
		}
	for (i = 0; i < g.vexnum; i++)
		for (j = 0; j < g.vexnum; j++)
			if (i != j)
				path(g, d, p, i, j);
}
