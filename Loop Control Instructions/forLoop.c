#include<stdio.h>

int main(){
    for(int a=0; a<=100; a++){
        if(a%2==0)
        printf("The value of a is %d \n", a);
    }

//quick quiz

    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for(int i=n; i ; i--){
        printf("The value of i is %d\n", i);
    }
    return 0;
}