#include <stdio.h>;
int main(){
	int x;
	scanf("%d",&x);
	int yu;
	int isPrime=1;//重要 
	for(int i=2;i<x;i++){
	if(x%i==0){
		isPrime=0;	
	}
  }
  if(isPrime==0){//*****引入isPrime很关键***** 
  	printf("不是质数");
  }
  else{
  	printf("是质数"); 
  }
	return 0;
} 
