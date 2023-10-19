#include<stdio.h>
#include<stdlib.h>

int maim() 
{
	FILE* fp = NULL;
	fopen_s(&fp, "data.txt", "wt");

	int n1, n2, n3;
	while (fprintf(fp, "%d %d %d\n", 100, 200, 300) != EOF)
	{

	}

	/*fprintf(fp, "%d %d %d\n", 100, 200, 300);
	fprintf(fp, "%d %d %d\n", 400, 500, 600);*/

	fclose(fp);
	return 0;
}