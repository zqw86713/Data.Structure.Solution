// c8-8.h ˫�������Ĵ洢�ṹ���ڽ̿����248ҳ
typedef struct DLTNode
{ char		symbol;
  DLTNode *	next;
  NodeKind	kind;
  union
  { Record *	infoptr;
     DLTNode *	first; }; }DLTNode, *DLTree;
/*
 * enum NodeKind {LEAF, BRANCH};
 * template<typename D>struct DLTNode
 * {//������ģ��<D>��˫���������ṹ
 *      char symbol;
 *      NodeKind kind;
 *      union
 *      {
 *              Record<D> *rcptr;
 *              DLTNode<D> *first;
 *      };
 *      DLTNode<D> *next;
 * };
 */
