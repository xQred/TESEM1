#include<reg51.h>
void delay(unsigned int time)
{
	unsigned int i;
	TMOD = 0x10;
	for(i=0;i<time;i++)
	{
		TH1=0xFF;
		TL1=0x49;
		while(TF1==0);
		TR1 = 0;
		TF1 = 0;
	}
}

void main()
{
	P0=0x09;
	while(1)
	{
		P0=0x09;
		delay(100);
		P0=0x0A;
		delay(100);
		P0=0x06;
		delay(100);
		P0=0x05;
		delay(100);
	}
}