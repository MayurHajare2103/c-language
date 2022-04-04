#include<stdio.h>

int main(){
    int i = 0;

    do {
    printf("%d\n", i);
    i++;
    }
    while (i < 5);

//quick quiz
    int i=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do{
        printf("The number is %d \n", i+1);
        i++;
    }while(i<n);

    return 0;
}