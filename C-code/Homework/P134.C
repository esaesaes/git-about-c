#include <stdio.h>

int main(void)
{
	char arr[10];
	int i;
	int j;
	
	printf("\n请输入10个字符：");
	for (i = 0; i < 10 ; i++)  
	{
		scanf("%c", &arr[i]);
	} 
	printf("\n加密结果为：");
	for (j = 0; j < 10; j++)
	{
		if ( j > 0 )
		{
			printf(",");
		}
        
		printf("%d", arr[j]);
	}
    
	return 0;    
}
