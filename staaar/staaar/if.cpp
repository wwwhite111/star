#include<stdio.h>

int main()
{
	int a;

	printf("1~99 ������ ���� �Է�\n>");
	scanf_s("%d", &a);

	if (a > 100 || a < 0)
		printf("�Է� ����");
	else if (a > 90)
		printf("A");
	else if (a > 80)
		printf("B");
	else if (a > 70)
		printf("C");
	else if (a > 60)
		printf("D");
	else 
		printf("F");
	
}