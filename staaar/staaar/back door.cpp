#include<stdio.h>

int main()
{
	int a, b = 0;


	for (a = 1; a <= 10; a++)
	{
		if (a % 2 == 0) continue;
		b += a;
		printf("%02d까지 홀수 누적 합 : %02d\n", a, b);
	}
	printf("1~10중 홀수의 누적 합은 : %02d\n", b);

	return 0;
}