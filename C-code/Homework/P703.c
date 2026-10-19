#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Input  profit: ");
	scanf("%d", &x);
	if (x <= 1000)
	{
		printf("\nsalary=500\n");
	}
	else if (x > 1000 && x <= 2000)
	{
		printf("\nsalary=%.2lf\n", x * 0.1 + 500);
	}
	else if (x > 2000 && x <= 5000)
	{
		printf("\nsalary=%.2lf\n", x * 0.15 + 500);
	}
	else if (x > 5000 && x <= 10000)
	{
		printf("\nsalary=%.2lf\n", x * 0.2 + 500);
	}
	else if (x > 10000)
	{
		printf("\nsalary=%.2lf\n", x * 0.25 + 500);
	}
	
	return 0;
	
}
