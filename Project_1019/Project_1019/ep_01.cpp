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
//	printf("�л��� �Է� : ");
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
//		printf("�л� # %d-%d���� �Է� : ", a, i + 1);
//		scanf("%d", &(std[i].sno));
//
//		printf("�л� # %d-%d�̸� �Է� : ", a, i + 1);
//		scanf("%s", &std[i].name, 10);
//
//		printf("�л� # %d-%d���� �Է� : ", a, i + 1);
//		scanf("%d", &(std[i].score));
//	}
//	/*for (int i = 0; i < a; i++)
//	{
//		sum += scores[i];
//	}*/
//
//	/*printf("���� : %d", sum);*/
//}