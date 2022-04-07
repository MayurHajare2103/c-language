// Online C compiler to run C program online
#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
}

int main(){
    int x, y, sum;
    float avg;
    x = 5;
    y = 5 ;
    sumAndAvg(x, y, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);
    
    return 0;
}
