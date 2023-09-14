#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("숫자를 입력하시오");

	int a;
	printf(">");
	scanf_s("%d", &a);

	printf("%d", a);
	return 0;
}