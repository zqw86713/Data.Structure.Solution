// c5-4.h ������ͷβ����洢�ṹ���ڽ̿����109ҳ
enum ElemTag { ATOM, LIST };
// ATOM==0��ԭ��,LIST==1���ӱ�
typedef struct GLNode
{ ElemTag tag;
  union
  { AtomType atom;
    struct
    { GLNode *hp, *tp; }ptr; }; } *GList, GLNode;
