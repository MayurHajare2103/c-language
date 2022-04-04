#include<stdio.h>

int main(){

     printf("Multiplication of given number. \n\n");
    int n = 5;
    for(int i=1; i<11;i++){
         printf("\n%d  ",n*i);
    }

    printf("\n\nMultiplication table of 10 reverse order \n\n");
    for(int i=10;i;i--){
        printf(" %d\n",  10*i);
    }
    return 0;
}