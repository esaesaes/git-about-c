#include <stdio.h>

int main(void)
{
	char c;
	
	printf("Input a character: ");
	scanf("%c", &c);
	printf("\nAscii('%c') = 0x%02x\n", c, c);
	
	return 0;
}

