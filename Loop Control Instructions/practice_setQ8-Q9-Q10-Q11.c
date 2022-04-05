// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // question 8
    
  int i=0, num=7, factorial=1;
    for(i=1;i<=num;i++){
        factorial *=i;
    }
    printf("The factorial of  %d is %d", num, factorial);
    
    //question 9
   int n=8, i=1;
    
    while(i<11){
         
      printf(" %d \n", n);
      i++;
    };


    // question 10

    int n = 6, prime=1;
    for(int i=2;i<n;i++){
        if (n%i==0 ){
            prime = 0;
            break;
        }
    }
    if (prime==0){
        printf("\n\n %d is not a prime number",n);
    }
    else{
        printf("\n\n %d is a prime number",n);
    }


    // question 11 

 int n = 1, prime=1;
   int i=2;
   while(i<n) {
       if (n%i==0 ){
            prime = 0;
            break;
        }
       i++;
   }
    
    if (prime==0){
        printf("\n\n %d is not a prime number",n);
    }
    else{
        printf("\n\n %d is a prime number",n);
    }

    

int n = 1, prime=1;
   int i=2;
    do{
       if (n%i==0 ){
            prime = 0;
            break;
        }
       i++;
   }while(i<n);
    
    if (prime==0){
        printf("\n\n %d is not a prime number",n);
    }
    else{
        printf("\n\n %d is a prime number",n);
    }

    return 0;
}