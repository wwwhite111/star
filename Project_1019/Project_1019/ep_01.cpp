//#include<stdio.h>
//#include<stdlib.h>
//
//struct Student
//{
//	int sno;
//	char name[10];
//	int score;
//};
//
//int main()
//{
//	int a;
//	int sum = 0;
//	
//	printf("학생수 입력 : ");
//	scanf_s("%d", &a);
//
//	/*int* scores;
//	scores = (int*)malloc(sizeof(int) * a);*/
//
//	struct Student* std;
//	std = (struct Student*)malloc(sizeof(struct Student) * a);
//
//	for (int i = 0; i < a; i++)
//	{
//		printf("학생 # %d-%d성적 입력 : ", a, i + 1);
//		scanf("%d", &(std[i].sno));
//
//		printf("학생 # %d-%d이름 입력 : ", a, i + 1);
//		scanf("%s", &std[i].name, 10);
//
//		printf("학생 # %d-%d점수 입력 : ", a, i + 1);
//		scanf("%d", &(std[i].score));
//	}
//	/*for (int i = 0; i < a; i++)
//	{
//		sum += scores[i];
//	}*/
//
//	/*printf("총점 : %d", sum);*/
//}