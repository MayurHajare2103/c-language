
#include <stdio.h>
 
int main()
{
    
    //practice set 4 

    int p, r, y;
     
    printf("\n Enter the principal  :");
    scanf("%d", &p);
    
    printf("\n Enter the rate  :");
    scanf("%d", &r);
    
    printf("\n Enter the year  :");
    scanf("%d", &y);
    
    int simpleInterest = (p*r*y)/100;
    
   printf("\n the simple Interest is  %d", simpleInterest);
    
   
   
    
 return 0;
}