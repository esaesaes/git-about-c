#include <stdio.h>

int main(void)
{
	int number1, number2;

	printf("please input data: ");
	scanf("%d %d", &number1, &number2);
	printf("\nResult:%d+%d=%d", number1, number2, number1 + number2);
	return 0;
}