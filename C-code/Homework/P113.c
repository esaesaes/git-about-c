#include <stdio.h>

int main(void)
{
	int benjin;      
	int cunqi;       
	double rate;     
	double lixi;     

	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &benjin, &cunqi);

	switch (cunqi)
	{
		case 1:
			rate = 0.0315;
			break;
		case 2:
			rate = 0.0363;
			break;
		case 3:
			rate = 0.0402;
			break;
		case 5:
			rate = 0.0469;
			break;
		case 8:
			rate = 0.0536;
			break;
		default:
			rate = 0.0;
			break;
	}

	lixi = (double)benjin * rate * cunqi;
	printf("\nlixi = %.2f yuan", lixi);

	return 0;
}
