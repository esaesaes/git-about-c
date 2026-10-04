#include <stdio.h>
int main(){
	int type;
	double price;
	printf("请输入商品类型（1代表电子产品，2代表服装）和价格："); 
	scanf("%d %lf",&type,&price);
    switch(type){
    	case 1:
    		if(price<500){
    			printf("电子产品价格较低，无优惠");}
    		else if(price>1000)	{
    			printf("电子产品可享受10%%的优惠");}
    		    else printf("电子产品可享受5%%的优惠"); 
				 
				 
	            break;
	    case 2:
		    if(price<200){
    			printf("服装价格较低，无优惠");}
    		else if(price>500)	{
    			printf("服装可享受15%%的优惠");}
    		    else printf("服装可享受8%%的优惠"); 
				 
		   break;
		default	:
		printf("有误");
		 
         }return 0;

} 
