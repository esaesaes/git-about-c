#include <at89c51RC2.h>
#include "Delay.h"
#include "LCD1602.h"
#include "Matrixkey.h"
/**
  * @brief Read key codes of matrix keyboard
  * @param  
  * @retval Keynum:Key-code value of the pressed key;
	          If the key is held down, the program stays inside this function. 
						It returns the key-code at the momentthe key is released.
						Returns 0 when no key is pressed.
  */
unsigned char KeyNum;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Matrixkey");
		
	while(1)
	{
		KeyNum=Matrixkey();
		if(KeyNum)
		{
			LCD_ShowNum(2,1,KeyNum,2);
		}
	
	}
	
	
}


