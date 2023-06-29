#include <8051.h>
unsigned char LED;
/*void timer() __interrupt 1
{
    TR0=0;
    P1=~LED;
    TF0=0;
    if (LED==0b10000000) LED=1;
    else LED=LED<<1;
    TR0=1;
    P3_0=!P3_0;
    P3_1=!P3_1;
}*/
void timer() __interrupt 1
{
    //oprim timer-ul ca sa prelucram
    TR0=0;
    TF0=0;
    //inversam sensul de rotatie al motorului
    P3_0=!P3_0;
    P3_1=!P3_1;

    TR0=1;//pornim timerul la loc
}
void timer2() __interrupt 3
{
    
    TR1=0;
    P1=~LED;
    TF1=0;
    if (LED==0b10000000) LED=1;
    else LED=LED<<1;
    TR1=1;
}
int main()
{//timeru unu
    TH1=0b00000011;
    TL1=0b11101011;
    
   //timeru doi 
    TH0=0b00000011;
    TL0=0b11101000;
    TMOD=0b01;

    LED =1;
    P1=~LED;
    //le activam
    ET0=1;
   ET1=1;
    EA=1;

//le resetam
    TR0=1;
    TR1=1;
//pornim motorul intr-un sens
    P3_0=0;
    P3_1=1;

    while(1){
    }
}