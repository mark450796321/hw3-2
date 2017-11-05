
#include<stdio.h>
#include<stdlib.h>

void main()
{
	long n;
	scanf_s("%d", &n);
	if (F(n)<0)
	{
		printf("already overflow");
	}
	else
	{
		printf("%d", F(n));
	}
	
	system("pause");
}

long F(long n)
{
	long a1 = 0, a2 = 1, a3 = 1, i;
	if (n <= 2) return 1;
	for (i = 3; i <= n; i++) {
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
	}
	return a3;
}