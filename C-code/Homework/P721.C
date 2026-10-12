#include <stdio.h>

int main(void)
{
	double x, y;
	int z1;
	double re;
	
	printf("please input x,y,z: ");
	scanf("%lf %lf %lf", &x, &y, &z1);
	re = x + z1 % 3*(int)(x+y) % 2 / 4;
	printf("\nResult =%lf", re);
	
	return 0;	
}
