#include "head.h"

unsigned char refer = 23;

unsigned char code SMG_Table[18] = 
{
0xc0, //0
0xf9, //1
0xa4, //2
0xb0, //3
0x99, //4
0x92, //5
0x82, //6
0xf8, //7
0x80, //8
0x90, //9
0x88, //A
0x83, //b
0xc6, //C
0xa1, //d
0x86, //E
0x8e, //F
0x7f,
0xbf
};

unsigned char code SMG_adr[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};




void DS18b20_show()
{
	unsigned char adr,dat;
	
	static char i;
	i ++;
	if(i == 6)
	i = 1;
	switch(i)
	{
		case 1:
			adr = 0;
			dat = 10;
		break;
		
		case 2:
			adr = 5;
			dat = temp / 100;
		break;
		
		case 3:
			adr = 6;
			dat = 16;
		break;
				
		case 4:
			adr = 6;
			dat = temp / 10 % 10;
		break;
						
		case 5:
			adr = 7;
			dat = temp % 10;
		break;
	
	}
	SMG_config(SMG_adr[adr],SMG_Table[dat]);

}




void ADC_show()
{
	unsigned char adr,dat;
	
	static char i;
	i ++;
	if(i == 6)
	i = 1;
	switch(i)
	{
		case 1:
			adr = 0;
			dat = 11;
		break;
		
		case 2:
			adr = 5;
			dat = adc_volt / 100;
		break;
		
		case 3:
			adr = 6;
			dat = 16;
		break;
				
		case 4:
			adr = 6;
			dat = adc_volt / 10 % 10;
		break;
						
		case 5:
			adr = 7;
			dat = adc_volt % 10;
		break;
	
	}
	SMG_config(SMG_adr[adr],SMG_Table[dat]);

}




void ds1302_show()
{
	static char i;
	unsigned char adr,dat;
	unsigned dat1,dat2,dat3;
	
	dat1 = (Timer[2] >> 4)*10 + (Timer[2] & 0x0f);
	dat2 = (Timer[1] >> 4)*10 + (Timer[1] & 0x0f);
	dat3 = (Timer[0] >> 4)*10 + (Timer[0] & 0x0f);
	
	i ++;
	if(i == 9)
	i = 1;
	switch(i)
	{
		case 1:
			adr = 0;
			dat = dat1 / 10;
		break;
		
		case 2:
			adr = 1;
			dat = dat1 % 10;
		break;
		
		case 3:
			adr = 2;
			dat = 17;
		break;
				
		case 4:
			adr = 3;
			dat = dat2 / 10;
		break;
						
		case 5:
			adr = 4;
			dat = dat2 % 10;
		break;
		
		case 6:
			adr = 5;
			dat = 17;
		break;
						
		case 7:
			adr = 6;
			dat = dat3 / 10;
		break;
		
		case 8:
			adr = 7;
			dat = dat3 % 10;
		break;
						
	
	}
	SMG_config(SMG_adr[adr],SMG_Table[dat]);

}



void refer_show()
{
	
	static char i;
	unsigned char adr,dat;

	
	i ++;
	if(i == 9)
	i = 1;
	switch(i)
	{
		case 1:
			adr = 0;
			dat = 13;
		break;
						
		case 7:
			adr = 6;
			dat = refer / 10;
		break;
		
		case 8:
			adr = 7;
			dat = refer % 10;
		break;
						
	
	}
	SMG_config(SMG_adr[adr],SMG_Table[dat]);


}




