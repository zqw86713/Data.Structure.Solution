// bo6-6.cpp main6-4.cpp��algo7-3.cpp����
void PreOrderTraverse(CSTree T, void (*Visit)(TElemType))
{
	if (T) {
		Visit(T->data);
		PreOrderTraverse(T->firstchild, Visit);
		PreOrderTraverse(T->nextsibling, Visit);
	}
}
