#include <8051.h>
unsigned char LED;
int main()
{
    TH0=0b00000011;
    TL0=0b11101000;
    TMOD=0b01;//asta mereu e asa
    LED=1;
    P1=~LED;
    while(1){//aprinde becurile incepand din dreapta pana-n stanga
        TR0=1;
            while(TF0==0);//asteptare de timer

            TR0=0;//spunem ca suntem gata sa preluam rezultatul
            P1=~LED;//aprindem becurile
            TF0=0;
            if (LED==0b10000000) LED=1;//daca am ajuns in capat o luam de la inceput
            else LED=LED<<1;
          


    }
}