#include <stdio.h>;
int main(){
	int i;
	int g;
	int score;
	printf("输入整数分数：");
	scanf("%d",&score);
	i=score/10;
	switch(i){
		case 9:
			g='A';
			break;
		case 8:
		    g='B';	
		    break;
		case 7 :
		    g='C';
			break;
		case  6:
		    g='D';
			break;
		default:
			g='E';
			break;  
	}
	printf("你的五分制成绩是%c",g);
	return 0;
} 
