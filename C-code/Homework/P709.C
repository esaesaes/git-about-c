#include <stdio.h>

int main(void)
{
	double x;
	
	printf("Input the degree: ");
	scanf("%lf", &x);
	printf("\nF(%.2lf)=C(%.2lf)", x, 5 * ( x - 32 ) / 9);
	
	return 0;
}
