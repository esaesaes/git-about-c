#include <stdio.h>
int main(){
	int i;
	double sum=0.0;
	int n; 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+1.0/i;
	}
	printf("sum=%f",sum);
	return 0; 
}
