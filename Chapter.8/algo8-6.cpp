// algo8-6.cpp ����bo8-4.cpp�ĳ���
#include "c1.h"
#define m 3
int s = (m + 1) / 2;
typedef int KeyType;
struct Others
{ int order; };
#include "c8-2.h"
#define N 12
#include "c8-4.h"
#include "c8-5.h"
#include "c8-6.h"
#include "bo8-4.cpp"
#include "func8-6.cpp"

void main()
{
	Record r[N] = { { 24,  1 }, { 45, 2  }, { 53, 3	 }, { 12, 4  }, { 37, 5 }, { 50, 6 }, { 61, 7 }, { 90, 8 },
			{ 100, 9 }, { 70, 10 }, { 3,  11 }, { 37, 12 } };
	BTree t;
	Result u;
	KeyType j;
	int i;

	InitDSTable(t);
	for (i = 0; i < N; i++) {
		u = SearchBTree(t, r[i].key);
		if (u.tag)
			printf("��t���Ѵ��ڹؼ���Ϊ%d�ļ�¼����(%d,%d)�޷����롣\n", r[i].key,
			       r[i].key, r[i].others.order);
		else
			InsertBTree(t, &r[i], u.pt, u.i);
	}
	printf("���ؼ��ֵ�˳�����B_��t��\n");
	TraverseDSTable(t, Visit);
	for (i = 1; i <= 4; i++) {
		printf("\n����������Ҽ�¼�Ĺؼ��֣�");
		InputKey(j);
		u = SearchBTree(t, j);
		if (u.tag)
			Visit(*(u.pt), u.i);
		else
			printf("δ�ҵ�");
		printf(" u.i=%d u.tag=%d", u.i, u.tag);
	}
	printf("\n");
	DestroyDSTable(t);
}
