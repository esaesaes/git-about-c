#include <stdio.h>

int main(void)
{
	double r=0.0;
	double h=0.0;
	
	printf("Input: ");
	scanf("r=%lf, h=%lf", &r, &h);
	printf("\nC1= %.2lf\nS= %.2lf\nV= %.2lf", 6.28*r, 3.14*r*r, 3.14*r*r*h);
	
	return 0;
}
