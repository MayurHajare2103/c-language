// Online C compiler to run C program online
#include <stdio.h>

void changeValue(int *x);

int main() {

     //call by referance 
   int x=3;
    printf("\nThe value of x is : %d ", x);
   
    changeValue(&x); 
    printf("\nThe value of x after changing 10 to the variable is : %d", x);
    
    return 0;
}



void changeValue(int *x) {
   *x = *x *  10;;
}

