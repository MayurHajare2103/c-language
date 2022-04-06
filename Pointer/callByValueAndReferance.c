// Online C compiler to run C program online
#include <stdio.h>
int mul(int a,int b);
void swap(int *x,int *y);

int main() {
    //call by value 
    printf("The multiplication is : %d ", mul(5,5));
    
    
     //call by referance 
   int x=3, y=4;
    printf("\nThe value of x and y before swap is %d and %d", x, y);
   
    swap(&x, &y); 
    printf("\nThe value of x and y after swap is %d and %d", x, y);
    
    
    return 0;
}

int mul(int a,int b) {
    return a * b;
}

void swap(int *x,int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
  
}

