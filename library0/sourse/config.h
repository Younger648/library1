#ifndef __CONFIG_H_
#define __CONFIG_H_



#define DELAY_TIME	5


sbit DQ = P1^4;
sbit scl = P2^0;
sbit sda = P2^1;
sbit SCK = P1^7;
sbit RST = P1^3;


sbit R1 = P3^0;
sbit R2 = P3^1;
sbit R3 = P3^2;
sbit R4 = P3^3;

sbit C4 = P3^4;
sbit C3 = P3^5;
sbit C2 = P4^2;
sbit C1 = P4^4;

#endif
