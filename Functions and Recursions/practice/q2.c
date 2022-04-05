
#include <stdio.h>
 
int main()
{
    //°F = °C × (9/5) + 32
     int c;
    printf("\n Enter the Celsius  :");
    scanf("%d", &c);
    cToF(c);
    return 0;
}

void cToF(int c) {
    int  f = (c * (9/5) )+ 32;
   printf("\nValue of Converted Celsius to Fahrenheit is  %d", f);
}