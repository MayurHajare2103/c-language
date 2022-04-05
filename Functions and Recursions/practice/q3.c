
#include <stdio.h>
 float force();
int main()
{
    //Force = G((m1*m2)/r*r)
    force();
    return 0;
}

float  force() {
    
    int m1 =5, m2= 5, r =5;
    float  force = (9.8)*((m1*m2)/r*r);
   printf("\nValue of force of attraction on a body is  %f", force);
   return force;
}