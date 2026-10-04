#include <stdio.h>
int main()
{
	int num_1,num_2,num_3;
	char c_1,c_2;
	double d_1,d_2;
	printf("请输入7个数据（依次为3整数，2字符，2实数）：");
	scanf("%d %d %d %c %c %lf %lf",&num_1,&num_2,&num_3,&c_1,&c_2,&d_1,&d_2);
	//scanf里面不能用%g 
	//%g的作用：自动去0；自动科学计数法 
	//printf("\n这7个数据的倒序为:%lf,%lf,%c,%c,%d,%d,%d",d_2,d_1,c_2,c_1,num_3,num_2,num_1);
	printf("\n这7个数据的倒序为:%g,%g,%c,%c,%d,%d,%d",d_2,d_1,c_2,c_1,num_3,num_2,num_1);
	return 0;
 } 
