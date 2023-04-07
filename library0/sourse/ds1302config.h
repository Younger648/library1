#ifndef __DS1302CONFIG_H_
#define __DS1302CONFIG_H_

void Write_Ds1302(unsigned  char temp);
void Write_Ds1302_Byte( unsigned char address,unsigned char dat ); 
unsigned char Read_Ds1302_Byte ( unsigned char address );

#endif