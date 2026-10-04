#include <stdio.h>
int main(){
	int i;
	int x;
	int isPrime; 
	//int isPrime=1;
	for(x=1;x<=100;x++){//这里x=1建议改为x=2 
		for(i=2;i<x;i++){
		//for(i=2;i<100;i++){
		isPrime=1;//在这里定义为1，否则第12行为0后会一直 为0 //这里不能写成int isPrime=1,会和第5行冲突，运行结果为空白 
		
			if(x%i==0) {
				isPrime=0;
				break;
			}
			
		}
		if(isPrime==1){
			printf("%d ",x);
		}
		
		
	}
	return 0;
} 
