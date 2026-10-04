#include <stdio.h>
#include <stdlib.h>//srand rand函数的声明是这个头文件里面的 
#include <time.h>//time（）函数通过时间不同来生成不同的数“种子” 
int main(){
	srand(time(0));//设置随机数种子； 
	int number=rand()%100+1;//rand()生成一个非常大的随机整数 
	int count=0;
	int a=0;
	printf("猜一个100以内的数：");
	scanf("%d",&a);
	do{
		++count;
		if(a>number){
			printf("猜大了，继续猜。\n");
			scanf("%d",&a);
		}else if(a<number){
			printf("猜小了,继续猜。\n");
			scanf("%d",&a);
		}
	}while(a!=number);
	printf("猜对了，一共用了%d次",count);
	return 0;
}
