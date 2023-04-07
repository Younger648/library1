#ifndef __TIMER_H_
#define __TIMER_H_

void Timer0Init();
void UartInit();

void UartInit();
void SendData(unsigned char dat);
void SendString(char *s);

extern unsigned char uart_dat;
extern unsigned char flag;
extern unsigned char busy;


#endif
