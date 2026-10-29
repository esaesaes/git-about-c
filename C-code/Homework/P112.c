#include <stdio.h>

int main(void)
{
	double x, tep = 5000;
	int i = 0;
	
	printf("Please input x: ");
	scanf("%lf", &x);
	do
	{
		tep =tep * (1 + x * 0.01); 
		i++;
	} while (tep < 10000.0);
	printf("\nyear = %d nian, chanzhi = %.2lf", 2006 + i, tep);
	
	return 0;
}
 
