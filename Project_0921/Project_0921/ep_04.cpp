#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	double x = 0;
	double y = 0;

	int circle = 0;

	srand(time(NULL));

	for (int count = 0; count < 1000000000; count++)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		circle = pow(x, 2) + pow(y, 2);

		if (count % 10000000 == 0)
		{
			printf("%d진행... 원주율 : %d\n", count / 1000000, circle);
		}
	}
	return 0;
}