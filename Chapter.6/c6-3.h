// c6-3.h �������Ķ��������洢�ṹ���ڽ̿����133ҳ
enum PointerTag
{ Link, Thread };
struct BiThrNode
{ TElemType	data;
  BiThrNode *	lchild, *rchild;
  PointerTag	LTag : 2;
  PointerTag	RTag : 2; };
typedef BiThrNode *BiThrTree;
