#include <at89c51RC2.h>
#include "Nixie.h"
#include "Delay.h"

void main()
{
	while(1)
	{
		Nixie(1,1);
		Delay(1);
		Nixie(2,2);
		Delay(1);
		Nixie(3,3);
		Delay(1);
	}
}	
	
