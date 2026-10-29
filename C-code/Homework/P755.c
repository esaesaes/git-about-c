#include <stdio.h>

int main(void)
{
	int sc;
	char gr;
	
	printf("please input the grade: ");
	scanf("%c", &gr);
	switch(gr)
	{
		case 'A':
			sc = 95;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'B':
			sc = 85;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'C':
			sc = 75;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'D':
			sc = 65;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'E':
			sc = 55;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'F':
			sc = 45;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'G':
			sc = 35;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'H':
			sc = 25;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'I':
			sc = 15;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		case 'J':
			sc = 0;
			printf("\ngrade=%c, score=%d\n", gr, sc);
			break;
		default:
			printf("\ngrade=%c Error\n", gr);
	}
	return 0;
}
