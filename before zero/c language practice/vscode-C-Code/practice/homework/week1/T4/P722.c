#include <stdio.h>

int main(void)
{
	int year, month, day;

	printf("please input a date: ");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("the date is:%d/%02d/%02d", year, month, day);
	return 0;
}