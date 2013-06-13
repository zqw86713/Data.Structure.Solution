// main6-3.cpp �����������������ֻ��������ĳ���
#define CHAR 1
//#define CHAR 0 // ����(����ѡһ)����3��
#include "func6-1.cpp"
#include "c6-3.h"
#include "bo6-4.cpp"
#define FLAG 0
void main()
{
	BiThrTree H, T;
	int i;

	for (i = 1; i <= 3; i++) {
#if CHAR
		printf("�밴�������������(�磺ab�����ո��ʾaΪ����㣬bΪ�������Ķ�����)��\n");
#else
		printf("�밴�������������(�磺1 2 0 0 0��ʾ1Ϊ����㣬2Ϊ�������Ķ�����)��\n");
#endif
		CreateBiThrTree(T);
		scanf("%*c");
		switch (i) {
		case 1: PreOrderThreading(H, T);
			printf("�������(���)������������\n");
			PreOrderTraverse_Thr(H, visit);
			break;
		case 2: InOrderThreading(H, T);
			printf("�������(���)������������\n");
			InOrderTraverse_Thr(H, visit);
			break;
		case 3: PostOrderThreading(H, T);
#if FLAG
			printf("�������(���)������������\n");
			PostOrderTraverse_Thr(H, visit);
#endif
		}
		printf("\n");
		DestroyBiThrTree(H);
	}
}
