// c3-2.h �������У����е���ʽ�洢�ṹ���ڽ̿����61ҳ
typedef struct QNode
{ QElemType	data;
  QNode *	next; } *QueuePtr;

struct LinkQueue
{ QueuePtr front, rear; };