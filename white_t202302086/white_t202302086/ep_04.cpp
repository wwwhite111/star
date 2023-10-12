#include<stdio.h>

void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("a : %d, b : %d", a, b);

	swap(&a, &b);

	printf("reverce a : %d, b : %d", a, b);

	return 0;
}

