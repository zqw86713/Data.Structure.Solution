// algo7-1.cpp ����2�ֽṹ�����㷨7.4��7.6(������Ⱥ͹������)���������ĳ���
// �������ALGraph����Ϊͼ�Ĵ洢�ṹ����������Ϊע��
#define MG
#include "c1.h"
#include "func7-1.cpp"
#ifdef MG
#include "func7-2.cpp"
#include "c7-1.h"
#include "bo7-1.cpp"
typedef MGraph Graph;
#else
#include "func7-4.cpp"
#include "c7-2'.h"
#include "bo7-2.cpp"
typedef ALGraph Graph;
#endif
#include "bo7-3.cpp"

void main()
{
	Graph g;
	char filename[13];

	printf("�����������ļ�����");
	scanf("%s", filename);
#ifdef MG
	CreateFromFile(g, filename, 0);
#else
	CreateFromFile(g, filename);
#endif
	printf("����������������Ľ����\n");
	DFSTraverse(g, Visit);
	printf("����������������Ľ����\n");
	BFSTraverse(g, Visit);
}
