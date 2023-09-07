#include<stdio.h>

int main()
{
	int a;

	scanf_s("%d", &a);

	for (int i = 0; i < a; i++)
	{

		for (int b = i; b <= (a - 1); b++)
		{
			printf(" ");
		}

		for (int j = 0; j <= (i * 2); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}