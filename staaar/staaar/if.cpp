#include<stdio.h>

int main()
{
	char season;

	printf("�� : a or A\n");
	printf("���� : s or S\n");
	printf("���� : d or D\n");
	printf("�ܿ� : f or F\n");
	printf("�����ϴ� ������ ���ĺ� �Է�\n>");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("��");
		break;
	case 'S':
	case 's':
		printf("����");
		break;
	case 'd':
	case 'D':
		printf("����");
		break;
	case 'f':
	case 'F':
		printf("�ܿ�");
		break;
	}
	return 0;
}