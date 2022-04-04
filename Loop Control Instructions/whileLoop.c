#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    while(a<50){
        printf("%d\n", a);
        a++;
    }
    if(a>=50){
        printf("no output!");
    }

//Quick quiz
  printf("values between 10 to 20 :");

     int i = 0;
    while(i<=20){
        if (i >= 10){ 
        printf("The value of i is %d\n", i);
        }
        i++; // i = i + 1;
    }

    return 0;
}