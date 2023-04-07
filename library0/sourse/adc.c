#include "head.h"

unsigned int adc_volt;


void dat_output(unsigned char dat)
{
	I2CStart();
	
	I2CSendByte(0x90);
	I2CWaitAck();
	I2CSendByte(0x40);
	I2CWaitAck();
	I2CSendByte(dat);
	I2CWaitAck();
	
	I2CStop();
}








unsigned char read_adc()
{
	unsigned int dat;
	I2CStart();
	
	I2CSendByte(0x90);
	I2CWaitAck();
	
	I2CSendByte(0x41);
	I2CWaitAck();
	
	I2CStart();
	I2CSendByte(0x91);
	I2CWaitAck();
	
	dat = I2CReceiveByte();
	I2CWaitAck();
	
	I2CStop();
	
	return dat;
}



void adc_switch()
{
	unsigned int dat_switch;
	
	dat_switch = read_adc();
	adc_volt = dat_switch * 500 / 255;
}