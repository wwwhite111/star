#include<stdio.h>

int main()
{
	int a = 1, b = 2;

	while (b <= 9)
	{
		if (b == 5)
		{
			b++;
			continue;
		}
		while (a <= 9)
		{
			printf("%d * %d = = %d\n", b, a, a * b);
			a++;
		}
		a = 1;
		b++;
	}
	return 0;
}