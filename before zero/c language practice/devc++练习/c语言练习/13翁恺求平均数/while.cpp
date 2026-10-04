#include <stdio.h>
int main(){
	double sum;
	int a;
	int n=0; //初始化如果在for循环里面，就不能在循环外面使用 
	printf("输入几个整数，最后一个数为-1（不计入结果）：");
	while(a!=-1){
	    scanf ("%d",&a);
		if(a!=-1){
			sum=sum+a;
			n++;
			scanf("%d",&a);
		}	
	}
	printf("平均数是%f",sum/n); 
	return 0;
}
