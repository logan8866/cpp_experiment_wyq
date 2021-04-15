#include<8051.h>

#define uint unsigned int 
#define uchar unsigned char 

void Delay(uint xms)
{
        uint i,j;
        for(i=xms;i>0;i--)
        for(j=110;j>0;j--);
}

void main()
{
        uchar tab = 0x01;
        uchar i;
        while(1)
        {
                for(i=0;i<8;i++)
                {
                        P1 = ~(tab);
                        Delay(100);
                        tab = tab<<1;


                }
                tab = 0x01;
        }
}

