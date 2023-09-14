#include<stdio.h>

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 == 1)
		{
			for(int a = 1; a < i; a++)
			{
				printf("\   ");
			}
			printf("| 0 |\n");
			printf("____________________________\n");
		}
		else
		{
			for (int a = 1; a < i; a++)
			{
				printf("\   ");
			}
			printf("| x |\n");
			printf("____________________________\n");
		}

	}
}