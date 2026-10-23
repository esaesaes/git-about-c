#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("please input x y: ");
	scanf("%d %d", &a, &b);
	if (a == b)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	
	return 0;
}
