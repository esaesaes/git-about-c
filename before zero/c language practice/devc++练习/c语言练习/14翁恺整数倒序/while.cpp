#include <stdio.h>
int main(){
	int x;
	int rx=0;
	int a;
	printf("输入一个整数："); 
	scanf("%d",&x);
	while(x>0){
		a=x%10;
		x=x/10;
		//b=x%10;
		rx=rx*10+a;	//*************最重要的一步；错写成rx=a*10+b 
	} 
	printf("倒过来是%d",rx);
	return 0;
}
