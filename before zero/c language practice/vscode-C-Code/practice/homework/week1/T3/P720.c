#include <stdio.h>

int main(void)
{
	double a;
	double b;

	printf("please input two numbers: ");
	scanf("%lf,%lf", &a, &b);
	printf("\na=%.6f,b=%.6f", a, b);
	return 0;
}