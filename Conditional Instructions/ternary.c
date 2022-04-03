#include<stdio.h>

int main(){
    int number;
    printf("Enter number \n");
    scanf("%d", &number);
    (number < 5) ? printf("number is less than 5") : printf("number is not less than 5");
     return 0;
}