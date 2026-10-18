#include <stdio.h>

int main(void)
{
	int x;
	int b1, b2, b3, b4;
	
	printf("Input a number with 4-digit: ");
	scanf("%d", &x);
	b1 = x % 10;
	b2 = x % 100 / 10;
	b3 = x % 1000 / 100;
	b4 = x / 1000;
	printf("\nsum=%d\n", b1 + b2 + b3 + b4);
	
	return 0;
}
