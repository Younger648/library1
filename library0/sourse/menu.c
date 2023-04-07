#include "head.h"

unsigned char Scon = 1;


void Delay5ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 59;
	j = 90;
	do
	{
		while (--j);
	} while (--i);
}







void menu_Scon()
{
	if(Scon == 1)
		DS18b20_show();
	else if(Scon == 2)
		ADC_show();
	else if(Scon == 3)
		ds1302_show();
	else if(Scon == 4)
		refer_show();
}




void menu_key()
{
	key_s(4);
	if(C4 == 0)
	{
		Delay5ms();
		if(C4 == 0)
		{
			Scon ++;
			if(Scon == 5)
			Scon = 1;
		}
		while(C4 == 0);
	}
	

}



void refer_key()
{
	key_s(4);
	if(C1 == 0)
	{
		Delay5ms();
		if(C1 == 0)
		{
			refer ++;
			if(refer >= 99)
			refer = 99;
		}
		while(C1 == 0);
	}
	
	
	
	key_s(4);
	if(C2 == 0)
	{
		Delay5ms();
		if(C2 == 0)
		{
			refer --;
			if(refer <= 9)
			refer = 9;
		}
		while(C2 == 0);
	}

}
