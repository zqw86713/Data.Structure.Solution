// bo8-2.cpp �����������Ļ�������(4��)�������㷨9.5(b)���㷨9.6��9.8
Status SearchBST(BiTree &T, KeyType key, BiTree f, BiTree &p)
{
	if (!T) {
		p = f;
		return FALSE;
	} else if EQ(key, T->data.key)    {
		p = T;
		return TRUE;
	} else if LT(key, T->data.key)
	return SearchBST(T->lchild, key, T, p);
	else {
		return SearchBST(T->rchild, key, T, p);
	}
}

Status InsertBST(BiTree &T, ElemType e)
{
	BiTree p, s;

	if (!SearchBST(T, e.key, NULL, p)) {
		s = (BiTree)malloc(sizeof(BiTNode));
		s->data = e;
		s->lchild = s->rchild = NULL;
		if (!p)
			T = s;
		else if LT(e.key, p->data.key)
		p->lchild = s;
		else
			p->rchild = s;
		return TRUE;
	} else {
		return FALSE;
	}
}

void Delete(BiTree &p)
{
	BiTree s, q = p;

	if (!p->rchild) {
		p = p->lchild;
		free(q);
	} else if (!p->lchild) {
		p = p->rchild;
		free(q);
	} else { s = p->lchild;
		 while (s->rchild) {
			 q = s;
			 s = s->rchild;
		 }
		 p->data = s->data;
		 if (q != p)
			 q->rchild = s->lchild;
		 else
			 q->lchild = s->lchild;
		 free(s); }
}

Status DeleteBST(BiTree &T, KeyType key)
{
	if (!T) {
		return FALSE;
	} else { if EQ(key, T->data.key)
		 Delete(T);
		 else if LT(key, T->data.key)
		 DeleteBST(T->lchild, key);
		 else
			 DeleteBST(T->rchild, key);
		 return TRUE; }
}
