#include "head.h"


unsigned P0_DAT = 0xff;

void led_config(unsigned char led_adr,unsigned char led_dat)
{
	if(led_dat == 0)
		P0_DAT |= 0x01 << (led_adr - 1);
	else
		P0_DAT &= ~(0x01 << (led_adr - 1));
	
	P0 = P0_DAT;
}


void led_Init()
{
	HC138_config(5);
	P0 = 0x00;
	HC138_config(4);
	P0 = 0xff;
}

