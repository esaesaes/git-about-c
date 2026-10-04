#include <stdio.h>
int main(){
	int n;
	int fact=1;
	scanf("%d",&n);
	for(int i=n;i>1;i--){
		fact*=i;
	}
	printf("n!=%d",fact);
	return 0;
}
//	int n;
	//int product=5; 
	//for(n=5;n>1;n--){
	//	product=product*n--;
//	}
//	printf("结成的结果是%d，product");
//	return 0;
// 

