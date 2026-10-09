#include <stdio.h>

int main(void)
{
	char a;
	printf("Input a lowercase letter: ");
	scanf("%c", &a);
	printf("\n%c(%d)", a, a);
	printf("\n%c(%d)", a-32, a-32); //´óÐ¡Ð´×ÖÄ¸²î32£»

	return 0;
}
