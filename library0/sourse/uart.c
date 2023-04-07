#include "head.h"


void led_mode()
{
	if(flag)
	{
		if(uart_dat == '1')
		{
			led_uart(5,1);
			SendString("led\r\n");
		}
		else if(uart_dat == '2')
		{
			Scon = 1;
			SendString("temp\r\n");
		}
		flag = 0;
	}
	
}


void led_uart(unsigned char adr,unsigned char dat)
{
	led_config(adr,dat);
}



