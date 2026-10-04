#include <stdio.h>
int main(){
	int user_type;
	int price;
	int result;
	printf("请输入用户类型（会员为2，普通用户为1）和初始价格：") ;
	scanf("%d %d",&user_type,&price);
	if(user_type==1){
		if(price>100){
			result=price*0.95;
		}else{
			result=price;
		}
	}else{
		if(price>200){
			result=price*0.9;
		}else{
			result=price*0.97;
		}
	}
	printf("最终价格为%d\n",result);
	return 0;
} 
