#include<stdio.h>

int main()
{
	int v1, a, b;

	printf("a = 10, b = 15¿œ ∂ß\n");

	a = 10;
	b = 15;
	v1 = ++a + b--;
	/*
	a++;
	v1 = a + b;
	b--
	*/

	printf("v1 = %d, a = %d, b = %d", v1, a, b);

	return 0;
}