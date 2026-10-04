#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int fact=1; 
	for(int i=1;i<=n;i++){//i<=nºÜ¹Ø¼ü 
		fact*=i;
	}
	printf("n!=%d",fact);
	return 0;
} 
