// algo1-1.cpp �������������ͺͷ��������͵�����
#include "c1.h"
void fa(int a)
{
	a++;
	printf("at function fa, a=%d\n", a);
}

void fb(int &a)
{
	a++;
	printf("at function fb, a=%d\n", a);
}

int main()
{
	int n = 1;

	printf("before call function fa, n=%d\n", n);
	fa(n);
	printf("after function fa called and before function fb called n=%d\n", n);
	fb(n);
	printf("after function fb called, n=%d\n", n);
	return 0;
}
