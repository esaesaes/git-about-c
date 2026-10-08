#include <at89c51RC2.h>
#include <INTRINS.H>

void Delayxms(unsigned int xms);
void main()
{
	unsigned char i=0;
	unsigned char arr[8]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
	while(1)
	{
		for(i=0;i<8;i++)
		{
			P2=arr[i];
			Delayxms(100);
		}
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

