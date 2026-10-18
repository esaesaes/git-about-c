#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Input a side of cube: ");
	scanf("%d", &x);
	printf("\nThe volume of cube is %d, the surface area of cube is %d\n", x * x * x, 6 * x* x);
	
	return 0;
	
}
