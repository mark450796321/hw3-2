#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	printf("輸入兩個數:");
	scanf_s("%d %d", &a, &b);
	c = 1;
	while ((c%b != 0) || (c%a != 0))
	{
		c = c + 1;

	}

	printf("最小公倍數:%d\n", c);


	system("pause");

}