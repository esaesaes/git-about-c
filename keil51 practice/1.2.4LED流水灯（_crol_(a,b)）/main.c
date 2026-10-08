
#include <at89c51RC2.h>
#include <INTRINS.H>

void Delayxms(unsigned int xms);
void main()
{
	P2=0xFE;
	while(1)
	{
		
		Delayxms(100);
		P2=_crol_(P2,1);
	}
}

void Delayxms(unsigned int xms)		//@11.0592MHz
{
	while(xms--)
	{
		unsigned char i, j;

	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	}
	
}

