#include<reg51.h>
void Delay(unsigned int time)
{
	int i,j;
	for(i=0;i<time;i++)
	{
	for(j=0;j<165;j++);
	}
}
void main()
{
	P1=0x00;
	while(1)
	{
		P1=0x0FF;
		Delay(250);
		P1=0x00;
		Delay(250);
	}
}



