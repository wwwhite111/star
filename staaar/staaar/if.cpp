#include<stdio.h>

int main()
{
	int a;

	printf("정수 입력>");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d는 짝수 입니다.", a);
	}
	else
	{
		printf("%d는 홀수 입니다.", a);
	}
}