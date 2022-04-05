// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //question 5
    int i = 1;
    
    while(i<11){
         printf(" %d \n", i);
         i++;
    }

   //question 6
   int n=1, sum = 0;
    
    do{
         
        sum += n;
        n++;
    }while(n<11);
    printf(" %d \n", sum);



int sum2 = 0;
 for(int i=1; i<11; i++){
        sum2 += i;
    }
     printf("\n\n %d \n", sum2);


    return 0;
}