#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please input an integer: ");
	scanf("%d", &x);
	if (x % 5 == 0 && x % 7 == 0)
	{
		printf("\nYes.");
	}
	else
	{
		printf("\nNo.");
	}
	
	return 0;

} 
