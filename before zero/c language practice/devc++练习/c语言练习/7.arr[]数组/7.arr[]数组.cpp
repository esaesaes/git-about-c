#include <stdio.h>
int main(){
	int arr[5];
	printf("请输入5个整数（数字之间用空格隔开）：");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]) ;                                                                              
	int i=0;
	for(arr[i];i<=4;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
//printf（"请逐一输入5个数："\n）;
//for (int i=0;i<5;i++){
//     scanf("%d",&arr[i]);
//}
//printf("输入完毕"\n) ;
//for (int i=0;i<5;i++){
//     printf("%d\n",arr[i]);
//}
