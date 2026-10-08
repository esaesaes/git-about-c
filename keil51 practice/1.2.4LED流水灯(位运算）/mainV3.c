#include <at89c51RC2.h>
#include <INTRINS.H>
void Delay(unsigned int xms);
void main()
{
	unsigned int i=0;
	//P2=0x01;
	for(i=0;i<8;i++)
	{
		P2=~(0x01<<i);
		Delay(100);		
	}
}

void Delay(unsigned int xms)		//@11.0592MHz
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
