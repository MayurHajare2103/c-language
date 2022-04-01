
#include <stdio.h>
 
int main()
{
    
    //practice set 2 a) area of circle 
    int pi = 3.14 , r, h;
     
    printf("\n Enter the redius of circle :");
    scanf("%d", &r);

    int area = pi * r *r;
   printf("\n area of rectangle is  %d", area);
    
    //practice set 2 b) area of rectangle 
      printf("\n \n \n Enter the height of cylinder :");
    scanf("%d", &h);
    
        int volume = pi * r *r *h;
   printf("\n area of rectangle is  %d", volume);
   
    
 return 0;
}