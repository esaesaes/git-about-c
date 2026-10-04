#include <at89c51RC2.h>
#include <LCD1602.h>
#include "Delay.h"
int Result=0;
void main()
{
	LCD_Init();
	
	//LCD_ShowString(1,1,"Li Yu Rui");
	//LCD_ShowString(2,1,"bing ba ");
//	LCD_ShowNum(1,11,666,3);
	//Result=1+1;
	
	while(1)
	{
		Result++;
		Delay(1000);
		LCD_ShowNum(1,1,Result,3);
	}
}	