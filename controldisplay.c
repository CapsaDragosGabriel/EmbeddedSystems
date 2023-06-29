#include <8051.h>
int main()
{
    P0_7=1;
    int counter=0;
    unsigned char number=102;
    while(1){
    /* if (counter==0)
        {P3_3=0;
        P3_4=0;}
        else if (counter==1)
        {
            P3_3=1;
            P3_4=0;
        }
        else if (counter==2)
        {
            P3_3=0;
            P3_4=1;
        }
        else if (counter==3)
        {
            P3_3=1;
            P3_4=1;
        }
*/
//in functie de ce buton apas afisez numarul respectiv
      if(P2_0==0){
          //9
        //   .gfedcba
        P1=0b11000000;
      }
        else if(P2_1==0)
        {
            //   .gfedcba
            P1=0b11111001;
        }

        else if(P2_2==0)
        {
            //   .gfedcba
            P1=0b10100100;
        }
        else if(P2_3==0)
        {  //    .gfedcba
            P1=0b10110000;
        }
        else if(P2_4==0)
        {
            //   .gfedcba
            P1=0b10011001;
        }
        else if(P2_5==0)
        {
            
            //   .gfedcba
            P1=0b10010010;
        }

        else if(P2_6==0)
        {
            //   .gfedcba
            P1=0b10000010;
        }
        else if(P2_7==0)
        {
            //   .gfedcba
            P1=0b11111000;
        }
        else
        {   //   .gfedcba
            P1=0b10000000;
        }
   /**  if(P2_0)
     P1=0b10101010;
      else
     P1=0b01010101;
    */
    counter=(counter+1)%4;
     
    }
    

    }