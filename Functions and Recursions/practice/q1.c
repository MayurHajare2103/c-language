#include<stdio.h>
void avg();

int main(){
   
     avg(5 , 5, 5);
    return 0;
}

void avg(int a , int b, int c){
    int sum = a + b+ c;
    printf("sum of three number is : %d", sum);
    int avg = sum/3;
    printf("\n\navg of three number is : %d", avg);
}