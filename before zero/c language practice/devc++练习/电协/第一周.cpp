#include <stdio.h>
#include <math.h>//小数取余不能用% 
int main()
{
	double num1,num2,num3,num4;
	double x;
	printf("请输入四个数") ;
	scanf("%lf %lf %lf %lf",&num1,&num2,&num3,&num4);
	x=fmod(num1,num2)*num3+num4;
	printf("\n计算结果为：%015lf",x);//！！！！8位整数，double默认小数点后6位 ，小数点占一位。Sn=8+1+6=15;
	//！！！0的意思是把默认的填充物换成0； ！！！！！ 
	return 0;
} 
  
