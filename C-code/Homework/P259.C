#include <stdio.h>

int main(void)
{
	int d1, d2, d3;
	char c1, c2;
	double g1, g2;
	
	printf("请输入7个数据(依次为3整数、2字符、2实数): ");
	scanf("%d %d %d %c %c %lf %lf", &d1, &d2, &d3, &c1, &c2, &g1, &g2);
	printf("\n这7个数据倒序为: 7-%.5lf 6-%.5lf 5-%c 4-%c 3-%d 2-%d 1-%d ", g2, g1, c2, c1, d3, d2, d1);
	
	return 0;
}

