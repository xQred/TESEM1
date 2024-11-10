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
	while(1)
	{
		P1=0x0AA;
		Delay(250);
		P1=~P1;
		Delay(250);
	}
}