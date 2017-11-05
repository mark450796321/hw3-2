#include <stdio.h>
#include <stdlib.h>

int integerPower(int base, int exponent);


int main(void)
{

	int a,m,n;

	printf("base:");
	scanf_s("%d", &m);
	printf("exponent:");
	scanf_s("%d", &n);
	a = integerPower(m, n);
	printf("%d", a);

	system("pause");


}
int integerPower(int base, int exponent)
{
	if (exponent >= 1)
	{
		long int result = base* integerPower(base, exponent - 1);
		return result;

	}
	else
	{
		return 1;
	}



}
