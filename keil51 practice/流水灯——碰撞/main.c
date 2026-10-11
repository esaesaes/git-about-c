#include <at89c51RC2.h>
#include <INTRINS.H>

void Delay(unsigned int xms);
void main()
{
	unsigned char ledl,ledr,temp;
	P2=0x7e;
	//ledl=0x7f;
	//ledr=0xfe;
	ledl=P2|0x0f;
	ledr=P2|0xf0;
	while(1)
	{
		Delay(100);
	  if(P2==0xe7)
	  {
			temp = ledl;
      ledl = ledr;
			ledr = temp;
	  }
		ledl=(ledl>>1)|0x80;
		ledr=(ledr<<1)|0x01;
		P2=(ledl&ledr);
		if(P2==0x7e)
		{
			temp = ledl;
      ledl = ledr;
      ledr = temp;
		}
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
