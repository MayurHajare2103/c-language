// Online C compiler to run C program online
#include<stdio.h>

int main(){
    int i = 345;
    int *ptr = &i;
    int **ptrToptr = &ptr;

    printf("The value of i is %d", i);
    printf("\nThe address of i is %d", ptr);
     printf("\nThe value of i is %d", **ptrToptr);
    printf("\nThe address of i is %d", ptrToptr);
    return 0;
}