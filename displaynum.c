#include <8051.h>
 int counter=0;
    unsigned char number[3];
  
int main()
{
    P0_7=1;
   P3_3=0;
    P3_4=1;
    int k=-1;
    int wait=1;
    number[0]=1;
    number[1]=2;
    number[2]=3;
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
 k++;
 //selectez care dintre display-uri sa folosesc
if (k==0)
{
    P3_3=0;
        P3_4=1;
    
}
else if (k==1)
{
    P3_3=1;
        P3_4=0;
}
else if (k==2)
{
    P3_3=0;
        P3_4=0;
}
//numarul de pe display
      if(number[k]==0){
        //   .gfedcba
        P1=0b11000000;
      }
        else if(number[k]==1)
        {
            //   .gfedcba
            P1=0b11111001;
        }

        else if(number[k]==2)
        {
            //   .gfedcba
            P1=0b10100100;
        }
        else if(number[k]==3)
        {  //    .gfedcba
            P1=0b10110000;
        }
        else if(number[k]==4)
        {
            //   .gfedcba
            P1=0b10011001;
        }
        else if(number[k]==5)
        {
            
            //   .gfedcba
            P1=0b10010010;
        }

        else if(number[k]==6)
        {
            //   .gfedcba
            P1=0b10000010;
        }
        else if(number[k]==7)
        {
            //   .gfedcba
            P1=0b11111000;
        }
        else if (number[k]==8)
        {   //   .gfedcba
            P1=0b10000000;
        }
         else if (number[k]==9)
        {   //   .gfedcba
            P1=0b10010000;
        }
   /**  if(P2_0)
     P1=0b10101010;
      else
     P1=0b01010101;
    */
    //counter=(counter+1)%4;
   
   //daca am afisat tot numarul o iau de la capat
    if (k==3)k=-1;
   //las numarul aprins cateva momente
     while (wait--);
     wait=3;
    }
    

    }