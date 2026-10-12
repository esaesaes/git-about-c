#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Input an integer: ");
	scanf("%d", &n);
	
	printf("\nThe result is %d%d%d", n % 10, n / 10 % 10, n / 100);
	
	return 0;
}
