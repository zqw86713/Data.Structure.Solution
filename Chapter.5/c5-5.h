// c5-5.h ��������չ��������洢�ṹ���ڽ̿����110ҳ
enum ElemTag { ATOM, LIST };
typedef struct GLNode1
{ ElemTag	tag;

  union
  { AtomType	atom;
    GLNode1 *	hp; };
  GLNode1 *	tp; } *GList1, GLNode1;
