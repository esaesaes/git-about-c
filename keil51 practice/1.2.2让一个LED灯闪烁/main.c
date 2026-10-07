#include<at89c51RC2.h>
#include<INTRINS.h>

void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms)
	{
	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
		xms=xms-1;
	}
	
}


void main()

{

	while(1)

	{

		P2=0XFE;
		Delay1ms(100);
		P2=0XFF;
		Delay1ms(100);
	}
}