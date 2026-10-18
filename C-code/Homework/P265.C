#include <stdio.h>

int main(void)
{
	double f1, f2;
	int d1, d2, d3;
	char c1, c2;
	
	printf("请输入7个数据(依次为2实数、3整数、2字符): ");
	scanf("%lf %lf %d %d %d %c %c", &f1, &f2, &d1, &d2, &d3, &c1, &c2);
	printf("\n这7个数据倒序为:7-%c 6-%c 5-%d 4-%d 3-%d 2-%.7lf 1-%.7lf", c2, c1, d3, d2, d1, f2, f1);
	
	return 0;		
} 
