#include <stdio.h>

int main(void)
{
	int x;
	__int64 n;
	
	printf("Please input x: ");
	scanf("%d", &x);
	n = (__int64)x;
	if (x < 0)
	{
		printf("\nF(%d) =%I64d", x, -5 * n + 27);
	}
	if (x == 0)
	{
		printf("\nF(%d) =7909", x);
	}
	if (x > 0)
	{
		printf("\nF(%d) =%I64d", x, 2 * n - 1);
	}
	
	return 0;
}
