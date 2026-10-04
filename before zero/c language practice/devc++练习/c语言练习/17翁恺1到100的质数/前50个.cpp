#include <stdio.h>
int main(){
	int i;
	int x=2;
	int isPrime=1; 
	int cnt=0;
	while(cnt<50){
			//for(x=1;x<=100;x++){
		for(i=2;i<x;i++){
		isPrime=1;//±ØÐëÒªÓÐ 
			if(x%i==0) {
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d ",x);
			cnt++;
		}
		x++;
	}	
	

	return 0;
} 
