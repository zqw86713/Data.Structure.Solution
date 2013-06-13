// main6-1.cpp ����bo6-1.cpp��������������������ѡ����������Ϊchar��int
// #define CHAR 1 // �ַ��͡���2��
#define CHAR 0
#include "func6-1.cpp"
#include "c6-1.h"
#include "bo6-1.cpp"

void main()
{
	Status i;
	int j;
	position p;
	TElemType e;
	SqBiTree T, s;

	InitBiTree(T);
	CreateBiTree(T);
	printf("���������������շ�%d(1���� 0����)���������=%d��\n", BiTreeEmpty(T),
	       BiTreeDepth(T));
	i = Root(T, e);
	if (i)
		printf("�������ĸ�Ϊ"form "��\n", e);
	else
		printf("���գ��޸���\n");
	printf("���������������\n");
	LevelOrderTraverse(T, visit);
	printf("���������������\n");
	InOrderTraverse(T, visit);
	printf("���������������\n");
	PostOrderTraverse(T, visit);
	printf("��������޸Ľ��Ĳ�� ������ţ�");
	scanf("%d%d", &p.level, &p.order);
	e = Value(T, p);
	printf("���޸Ľ���ԭֵΪ"form "����������ֵ��", e);
	scanf("%*c"form "%*c", &e);
	Assign(T, p, e);
	printf("���������������\n");
	PreOrderTraverse(T, visit);
	printf("���"form "��˫��Ϊ"form "�����Һ��ӷֱ�Ϊ", e, Parent(T, e));
	printf(form "��"form "�������ֱֵܷ�Ϊ", LeftChild(T, e), RightChild(T, e));
	printf(form "��"form "��\n", LeftSibling(T, e), RightSibling(T, e));
	InitBiTree(s);
	printf("����������Ϊ�յ���s��\n");
	CreateBiTree(s);
	printf("��s�嵽��T�У���������T����s��˫�׽�� sΪ��(0)����(1)������");
	scanf(form "%d", &e, &j);
	InsertChild(T, e, j, s);

	Print(T);
	printf("ɾ���������������������˫�׵Ĳ�� ������� ��Ϊ˫�׵���(0)����(1)������");
	scanf("%d%d%d", &p.level, &p.order, &j);
	DeleteChild(T, p, j);
	Print(T);
	ClearBiTree(T);
	printf("��ն����������շ�%d(1���� 0����)���������=%d��\n", BiTreeEmpty(T),
	       BiTreeDepth(T));
	i = Root(T, e);
	if (i)
		printf("�������ĸ�Ϊ"form "��\n", e);
	else
		printf("���գ��޸���\n");
}
