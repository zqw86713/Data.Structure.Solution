// algo7-11.cpp ʵ�ֽ̿���ͼ7.33�ĳ���(������������̨��)
#include "c1.h"
#include "func7-1.cpp"
#include "func7-2.cpp"
#include "c7-1.h"
#include "bo7-1.cpp"
typedef char PathMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM][MAX_VERTEX_NUM];
// ��ά���飬��ֵֻ������0��1������char�����Լ��ٴ洢�ռ���˷�
typedef VRType DistancMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
#include "func7-8.cpp"

void main()
{
	MGraph g;
	int i, j, q = 1;
	PathMatrix p;
	DistancMatrix d;
	char filename[8] = "map.txt";

	CreateFromFile(g, filename, 0);
	for (i = 0; i < g.vexnum; i++)
		g.arcs[i][i].adj = 0;

	ShortestPath_FLOYD(g, p, d);
	while (q) {
		printf("��ѡ��1 ��ѯ  0 ����\n");
		scanf("%d", &q);
		if (q) {
			printf("���д��룺\n");
			for (i = 0; i < g.vexnum; i++) {
				printf("%2d.%-8s", i, g.vexs[i].name);
				if (i % 7 == 6)
					printf("\n");
			}
			printf("\n������Ҫ��ѯ�������д��� �յ���д��룺");
			scanf("%d%d", &i, &j);
			path(g, d, p, i, j);
		}
	}
}
