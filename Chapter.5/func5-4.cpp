// func5-4.cpp ��������������main5-4.cpp��main5-5.cpp����
void main()
{
	char p[80];
	SString t;
	GList n, m;

	InitGList(n);
	printf("�չ����n�����=%d��n�Ƿ�գ�%d(1:�� 0:��)\n", GListDepth(n),
	       GListEmpty(n));
	printf("����������n(��д��ʽ���ձ�:()����ԭ��:(a)������:(a,(b),c))��\n");
	gets(p);
	StrAssign(t, p);
	CreateGList(n, t);
	printf("�����n�ĳ���=%d��", GListLength(n));
	printf("���=%d��n�Ƿ�գ�%d(1:�� 0:��)\n", GListDepth(n), GListEmpty(n));
	printf("���������n��");
	Traverse_GL(n, print2);
	CopyGList(m, n);
	printf("\n���ƹ����m=n��m�ĳ���=%d��", GListLength(m));
	printf("m�����=%d\n���������m��", GListDepth(m));
	Traverse_GL(m, print2);
	DestroyGList(m);
	m = GetHead(n);
	printf("\nm��n�ı�ͷԪ�أ�����m��");
	Traverse_GL(m, print2);
	DestroyGList(m);
	m = GetTail(n);
	printf("\nm����n�ı�β�γɵĹ�������������m��");
	Traverse_GL(m, print2);
	InsertFirst_GL(m, n);
	printf("\n��������nΪm�ı�ͷ�����������m��");
	Traverse_GL(m, print2);
	DeleteFirst_GL(m, n);
	printf("\nɾ��m�ı�ͷ������nָ��m�ı�ͷ�����������m��");
	Traverse_GL(m, print2);
	printf("\n���������n(�����m��ԭ��ͷ)��");
	Traverse_GL(n, print2);
	printf("\n");
	DestroyGList(m);
	DestroyGList(n);
}
