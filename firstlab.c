#include <8051.h>
int main()
{

 
    char check=5;
   
    while(1){
      
      if(P2_1){//daca activez butoanele
        if(P2_0){//daca-l apas pe unu din ele se roteste intr-un sens
        P3_0=1;
        P3_1=0;
        }
        else
        {P3_0=0; //daca nu-l apas se roteste in celalalt
            P3_1=1;
        }    
      }
      else {P3_0=1;//motor inactiv
        P3_1=1;};

    //luminite in functie de buton apasat
   /**  if(P2_0)
     P1=0b10101010;
      else
     P1=0b01010101;
    */
     
    }
    

    }