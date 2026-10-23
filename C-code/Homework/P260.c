#include <stdio.h>

int main(void)
{
	int aa, bb, cc;
	
	printf("请输入3个数：");
	scanf("%d %d %d", &aa, &bb, &cc);
	if (aa >= bb && bb >= cc)
	{
		printf("\n这三个数由小到大为: %d   %d   %d\n", cc, bb, aa);
	}
	if (bb >= cc && cc >= aa)
	{
		printf("\n这三个数由小到大为: %d   %d   %d\n", aa, cc, bb);
	}
	if (aa >= cc && cc >= bb)
	{
		printf("\n这三个数由小到大为: %d   %d   %d\n", bb, cc, aa);
	}
	if (bb >= aa && aa >= cc)
	{
		printf("\n这三个数由小到大为: %d   %d   %d\n", cc, aa, aa);
	}
	if (cc >= aa && aa >= bb)
	{
		printf("\n这三个数由小到大为: %d   %d   %d\n", bb, aa, cc);
	}
	if (cc >= bb && bb >= aa)
	{
		printf("\n这三个数由小到大为: %d   %d   %d\n", aa, bb, cc);
	}
	
	return 0;
	
	
}
