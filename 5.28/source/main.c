#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	

	int a;
	char c;

	printf("�п�J�@�ӭ^���r:");
	a = getchar();
	for (c = 'A'; c <= 'Z'; c++)
	if (a - 32 == c)
	{

		printf("%c \n", c);
	}
	for (c = 'a'; c <= 'z'; c++)
	if (a + 32 == c)
	{

		printf("%c\n", c);
	}
		system("pause");



}
