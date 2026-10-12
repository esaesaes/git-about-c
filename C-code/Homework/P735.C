#include <stdio.h>
#include <math.h>

int main(void)
{
	int bc, c;
	double p, s;
	
	printf("Input a side of triangle: ");
	scanf("%d", &bc);
	p = 1.5 * bc;
	s = sqrt(p * (p - bc) * (p - bc) * (p - bc));
	c = 3 * bc;
	printf("\nThe area of triangle is %.2lf, the circle of triangle is %d.", s, c);
	
	return 0;
} 
