#include<stdio.h>

int main()
{
	int a, b = 0;


	for (a = 1; a <= 10; a++)
	{
		if (a % 2 == 0) continue;
		b += a;
		printf("%02d���� Ȧ�� ���� �� : %02d\n", a, b);
	}
	printf("1~10�� Ȧ���� ���� ���� : %02d\n", b);

	return 0;
}