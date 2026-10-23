#include <stdio.h>

int main(void)
{
	int x, y;
	int max;
	
	printf("please input x, y: ", &x, &y);
	scanf("%d,%d", &x, &y);
	max = x >= y ? x : y;
	printf("\n%d is bigger\n", max);
	
	return 0;
}
