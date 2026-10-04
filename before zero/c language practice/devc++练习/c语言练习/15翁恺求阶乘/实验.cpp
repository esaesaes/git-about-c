#include <stdio.h>
int main(){
	int n;
	int product=1;
	scanf("%d",&n);
	for(n;n>1;n--){
	product=product*n;
	}
	printf("n!=%d",product);
return 0;
}

