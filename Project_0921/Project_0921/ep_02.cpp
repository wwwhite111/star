#include<stdio.h>

double A(double a, double b)
{
	printf("%lf + %lf = %lf", a, b, a + b);
	return a + b;
}

double B(double a, double b)
{
	printf("%lf - %lf = %lf", a, b, a - b);
	return a - b;
}

double C(double a, double b)
{
	printf("%lf X %lf = %lf", a, b, a * b);
	return a * b;
}

double D(double a, double b)
{
	printf("%lf / %lf = %lf", a, b, a / b);
	return a / b;
}

void cal(int selector)
{
	double a, b;

	printf("���� 1 �Է� \n>");
	scanf_s("%lf", &a);

	printf("���� 2 �Է� \n>");
	scanf_s("%lf", &b);

	double R;

	if (selector == 1) R = A(a, b);
	else if (selector == 2) R = B(a, b);
	else if (selector == 3) R = C(a, b);
	else if (selector == 4) R = D(a, b);

	printf("%lf", R);
}

int main(void)
{
	int sel;

	printf("1. ���ϱ�, 2. ����, 3. ���ϱ�, 4. ������ \n>");
	scanf_s("%d", &sel);

	cal(sel);

	return 0;
}




