#include <stdio.h>
int main()
{
	char grade;
	printf("please input the grade:");
	scanf("%c",&grade); 
	if(grade=='A'){printf("grade=A,score=95");}
	else if(grade=='B'){printf("grade=B,score=85");}
	else if(grade=='C'){printf("grade=C,score=75");}
	else if(grade=='D'){printf("grade=D,score=65");}
	else if(grade=='E'){printf("grade=E,score=55");}
	else if(grade=='F'){printf("grade=F,score=45");}
	else if(grade=='G'){printf("grade=G,score=35");}
	else if(grade=='H'){printf("grade=H,score=25");}
	else if(grade=='I'){printf("grade=I,score=15");}
	else if(grade=='J'){printf("grade=J,score=0");}
	else printf("grade=%c,Error",grade);
	return 0;
 } 
