#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	printf("��J��Ӽ�:");
	scanf_s("%d %d", &a, &b);
	c = 1;
	while ((c%b != 0) || (c%a != 0))
	{
		c = c + 1;

	}

	printf("�̤p������:%d\n", c);


	system("pause");

}