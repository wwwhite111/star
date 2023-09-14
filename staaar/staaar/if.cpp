#include<stdio.h>

int main()
{
	char season;

	printf("봄 : a or A\n");
	printf("여름 : s or S\n");
	printf("가을 : d or D\n");
	printf("겨울 : f or F\n");
	printf("좋아하는 계절의 알파벳 입력\n>");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("봄");
		break;
	case 'S':
	case 's':
		printf("여름");
		break;
	case 'd':
	case 'D':
		printf("가을");
		break;
	case 'f':
	case 'F':
		printf("겨울");
		break;
	}
	return 0;
}