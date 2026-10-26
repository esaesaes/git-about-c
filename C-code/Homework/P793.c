#include <stdio.h>

int main(void)
{
	long int xx, j;
	long int arr[64];
	int i = 0, sum = 0;
	
	printf("请输入一个数：");
	scanf("%ld", &xx);
	do 
	{
		arr[i] = xx % 10;
		xx /= 10;
		i++;
	}while (xx != 0);
	
	printf("\n该数的各位数之逆序为：");
	for (j = 0; j < i; j++)
	{
		printf("%ld", arr[j]);
	}
	for (j = 0; j < i; j++)
	{
		sum +=arr[j];
	}
	printf("\n该数的各位数之和为：%d\n", sum);
	
	return 0;
}
