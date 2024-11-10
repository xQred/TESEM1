#include<reg51.h>
void main(void)
{
	unsigned char x,y,z;
	x=0x08;
	y=0x04;
	P1=0x00;
	z=x-y;
	P1=z;
}