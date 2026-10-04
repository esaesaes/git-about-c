#include <stdio.h>
//写一个程序,输入数量不确定的[0,9]范围
//内的整数,统计每一种数字出现的次数,
//输入-1表示结束
int main(){
	int x;
	int count[10];
	int i;
	for(i=0;i<10;i++){
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<10){
			count[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<10;i++){
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
} 
//多次出现10这个数字，可以用int consist number =10;
