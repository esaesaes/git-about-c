#include <stdio.h>

int main(void)
{
	int arr[5];
	int i = 0;
	int j;
	
	printf("请输入5个数: ");
	for ( i; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\n这5个数倒序为: ");
	
	for ( j = 4; j>=0; j--)
	{
		printf("%d ", arr[j]);
	}
	
	return 0;
} 
