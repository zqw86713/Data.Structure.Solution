// func8-6.cpp ������B_���������������
void Visit(BTNode c, int i)
{
	printf("(%d,%d)", c.recptr[i]->key, c.recptr[i]->others.order);
}

void InputKey(KeyType &k)
{
	scanf("%d", &k);
}
