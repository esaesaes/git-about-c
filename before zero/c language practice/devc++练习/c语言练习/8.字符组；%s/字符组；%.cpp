#include <stdio.h> 
int main(){
	int n;
	char name[999];
	printf("你想要给多少人打招呼:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("请输入名字：\n");
		scanf("%s",name);
		printf("%s,你好\n",name);	
	}
	printf("打完了！"); 
	return 0;
}
