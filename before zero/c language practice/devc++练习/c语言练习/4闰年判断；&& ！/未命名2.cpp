#include <stdio.h>
int main(){
	int year=2008;
	if((year%4==0&&year%100!=0)||(year%400==0)){
		printf("是闰年"); 
	}else printf("不是闰年") ;
	return 0;
}
