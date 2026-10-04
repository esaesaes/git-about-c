#include <stdio.h>;
int main(){
	char ch='A';
	printf("修改前的ch:%c\n",ch);//ch换成*ptr也可以 
	char* ptr=&ch;
	*ptr='a';
	printf("修改后的ch:%c\n",ch);//ch换成*ptr也可以 
	return 0;
	
} 
