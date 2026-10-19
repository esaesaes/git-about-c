#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int aa, bb, cc;
	int a1, b1, c1;
	
	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &aa, &bb, &cc);
	a1 = abs (aa);
	b1 = abs (bb);
	c1 = abs (cc);
	if (a1 >= b1 && a1 >= c1)
	{
		printf("\nThe number with maximum absolute value is %d.\n", aa);
	}
	else if (b1 >= a1 && b1 >= c1)
	{
		printf("\nThe number with maximum absolute value is %d.\n", bb);
	}
	else if (c1 >= b1 && c1 >= a1)
	{
		printf("\nThe number with maximum absolute value is %d.\n", cc);
	}
	
	return 0;
	
} 
