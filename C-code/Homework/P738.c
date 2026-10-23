#include <stdio.h>

int main(void)
{
	double x, y;
	
	printf("Input 2 numbers: ");
	scanf("%lf %lf", &x, &y);
	if (y == 0)
	{
		printf("\nDivid by zero");
	}
	else 
	{
		printf("\nThe result is: %.2lf", x / y);
	}
	
	return 0;
	
}
