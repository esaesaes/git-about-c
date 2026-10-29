#include <stdio.h>

int main(void)
{
	int t1, t2;
	char op;
	double re;
	
	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &t1, &op, &t2);
	
	
	switch (op)
	{
		case '+':
			re = (double)t1 + t2;
			printf("%d+%d=%.0lf", t1, t2, re);
			break;
		case '-':
			re = (double)t1 - t2;
			printf("%d-%d=%.0lf", t1, t2, re);
			break;
		case '*':
			re = (double)t1 * t2;
			printf("%d*%d=%lf", t1, t2, re);
			break;
		case '/':
			if (t2 == 0)
			{
				printf("\nError! chu shu wei 0.\n");
				break;
			}
			else
			{
				re = (double)t1 / t2;
				printf("%d/%d=%.0lf", t1, t2, re);
			}
			break;		
		case '%':
			if (t2 == 0)
			{
				printf("\nError! chu shu wei 0.\n");
				break;
			}
			else
			{
				re = t1 % t2;
				printf("%d/%d=%.0lf", t1, t2, re);
			}
			break;
		default:
			break;		
	}
	return 0;
	
}
