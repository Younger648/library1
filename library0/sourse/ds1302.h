#ifndef __DS1302_H_
#define __DS1302_H_

extern unsigned char Write_adr[7];
extern unsigned char Read_adr[7]; 
extern unsigned int Timer[7];


void write_ds1302();
void read_ds1302();

#endif