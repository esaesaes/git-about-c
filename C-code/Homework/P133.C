#include <stdio.h>

int main(void)
{
	int arr[11];
	int i = 0;

	printf("\n请输入11个数字：");
	for (i = 0; i < 11; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n解密结果为：");

	for (i = 0; i < 11; i++)
	{
		printf("%c", arr[i]);
	}

	return 0;
}