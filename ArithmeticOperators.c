//girilen 3 sayının en büyüğünü bulan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
    int a,b,c,enb;
    
    printf("Enter 3 numbers: \n");  
      scanf("%d %d %d",&a,&b,&c); 
     
      if(a>b){
              
           if(a>c)
                  {
                   enb = a;
                   }
                   else
                   {
                        enb = c;
                   }
           }
      else 
           {
              if(b>c)
                  {
                   enb = b;
                   }
                   else 
                   {
                        enb = c;
                   }
         
           }
           
           printf ("Largest number entered %d", enb);
           
    return 0;
    
}
