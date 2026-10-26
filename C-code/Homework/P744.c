#include <stdio.h>

int main(void)
{
	float sc;
	char grade;
	
	do
	{
		printf("please input the score(0-100): ");
		scanf("%f", &sc);
	} while (sc < 0 || sc > 100 ) ;
	switch ((int)sc / 10)
	{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'E';
			break;
	}
	printf("\nscore=%g,grade=%c", sc, grade);
	
	return 0;		
	
}
  
