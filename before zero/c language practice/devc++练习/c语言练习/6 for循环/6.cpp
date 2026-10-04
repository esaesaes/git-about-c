#include <stdio.h> 
int main(){
	for(int i=1;i<=50;i++){
		if(i%2!=0){
			continue;
		}
		if(i%3==0){
			continue;
		}
		if(i>40){
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}

