#include <8051.h>
unsigned char  number;
unsigned char zecimala;
unsigned char afisare;

int main()
{
    
    
    while(1){
        P3_6=0;
    P3_6=1;
    //are nevoie de un front crescator
    P3_7=0;//resetam ready flag
        while(P3_2);//astept sa calculeze
        P3_7=0;//resetam ready flag
//5 v reprezinta 255
//1 v reprezinta 51
//puteam folosi si numere normale, nush dc am facut asa
       if (P2<51)        number=0b00000000;
        else if (P2<102) number=0b00000001;
         else if (P2<153) number=0b00000010;
          else if (P2<204) number=0b00000011;
           else if (P2<255) number=0b00000100;
            else if (P2==255) number=0b00000101;
//.99 volti repr 50
//.1 volti repr 5
        zecimala=P2- number*51;
        if (zecimala<5) afisare=0;
        else if (zecimala<10) afisare=1;
           else if (zecimala<15) afisare=2;
              else if (zecimala<20) afisare=3;
                 else if (zecimala<25) afisare=4;
                    else if (zecimala<30) afisare=5;
                       else if (zecimala<35) afisare=6;
                          else if (zecimala<40) afisare=7;
                             else if (zecimala<45) afisare=8;
                                else afisare=9;

/*
        if (zecimala==50) afisare=9;

        else if (zecimala<50 && zecimala>44) afisare=8; 
        else if (zecimala<44 && zecimala>=38) afisare=7;
*/

       if(afisare==0){
          //9
        //   .gfedcba
        P1=0b11000000;
      }
        else if(afisare==1)
        {
            //   .gfedcba
            P1=0b11111001;
        }

        else if(afisare==2)
        {
            //   .gfedcba
            P1=0b10100100;
        }
        else if(afisare==3)
        {  //    .gfedcba
            P1=0b10110000;
        }
        else if(afisare==4)
        {
            //   .gfedcba
            P1=0b10011001;
        }
        else if(afisare==5)
        {
            
            //   .gfedcba
            P1=0b10010010;
        }

        else if(afisare==6)
        {
            //   .gfedcba
            P1=0b10000010;
        }
        else if(afisare==7)
        {
            //   .gfedcba
            P1=0b11111000;
        }
        else if (afisare==8)
        {   //   .gfedcba
            P1=0b10000000;
        }
        else {
            P1=0b10010000;
        }
       


        P3_7=1;


    }
}
/*
        P3_7=1;
if ( number>0 && number<1 )
        P1=~(0b00000000);
    else if (number>=1&&number<2)
        P1=~(0b00000001);
        else if (number>=2&&number<3)
               P1=~(0b00000010);
        else if (number>=3&&number<4)
               P1=~(0b00000011);
                 else if (number>=4&&number<5)
               P1=~(0b00000100);
                 else if (number>=2&&number<3)
               P1=~(0b00000101);*/