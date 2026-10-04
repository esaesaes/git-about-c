#include <stdio.h>;
int main(){
	int x;
	scanf("%d",&x);
	int isPrime=1;
	for(int i=2;i<x;i++){
	if(x%i==0){
		isPrime=0;	
		break;//break后直接跳出for循环，执行13行代码 ;如果是continue,则先i++（步进），判断，再执行第7行 
	}
  }
  if(isPrime==0){
  	printf("不是质数");
  }
  else{
  	printf("是质数"); 
  }
	return 0;
} 