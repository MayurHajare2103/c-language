
#include <stdio.h>
 
int main()
{
    
    //practice set 3 a) 
    //°F = °C × (9/5) + 32
    int c;
     
    printf("\n Enter the Celsius  :");
    scanf("%d", &c);

    int  f = (c * (9/5) )+ 32;
   printf("\nValue of Converted Celsius to Fahrenheit is  %d", f);
    
   
   
    
 return 0;
}