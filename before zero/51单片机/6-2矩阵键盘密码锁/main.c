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
unsigned char KeyNum;//Uninitialized values default to zero.
unsigned int Password,count;

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"Password");
		
	while(1)
	{
		KeyNum=Matrixkey();
		if(KeyNum)
		{
			if(KeyNum<=10)
			{
				if(count<4)
				{
					Password*=10;// Left shift by 1.
					Password+=KeyNum%10;// Get a one-digit password
					count++;//Increment counter by 1
				}
				
				LCD_ShowNum(2,1,Password,4);//Update display
				

			}
			if(KeyNum==11)//If S11 pressed, confirm
			{
				if(Password==2345)//
				{
					LCD_ShowString(1,14,"OK ");//OK followed by a space
					Password=0;//Reset password
					count=0;//Reset counter
				}
				else
				{
					LCD_ShowString(1,14,"ERR");
					Password=0;//Reset password
					count=0;//Reset counter
				}
				LCD_ShowNum(2,1,Password,4);//Update display
			}
			if(KeyNum==12)//If S12 pressed, Cancel
			{
				Password=0;//Reset password
				count=0;//Reset counter
				LCD_ShowNum(2,1,Password,4);//Update display
			}
		}
	
	}
	
	
}


