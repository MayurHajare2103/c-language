// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //array basic

    // int marks[3];
    // marks[0] =22;
    // marks[1] =25;
    // marks[2] =26;
    // printf("first element of array is : %d", marks[0]);
    // printf("\n second element of array is : %d", marks[1]);
    // printf("\n third element of array is : %d", marks[2]);
    
    
    //array input 

   int marks[2]; 

    printf("Enter the value of marks for student 1: ");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for student 2: ");
    scanf("%d", &marks[1]);
 

    printf("You have entered %d and %d", marks[0], 
            marks[1]);
            


//array input using lopp

    //  int marks[3];

    // for(int i=0; i<3;i++)
    // {
    //     printf("Enter the marks for student %d: ", i+1);
    //     scanf("%d", &marks[i]);
    // }

    // for(int i=0; i<3;i++)
    // {
    //     printf("The marks for student %d is: %d \n", i+1, marks[i]); 
    // }
            
// array initialization

    // int marks[3]= {38,25,23};
    // printf("\n The value of a[0] is %d", marks[0]);
    // printf("\n The value of a[1] is %d", marks[1]);
    // printf("\n The value of a[2] is %d", marks[2]);


    return 0;
}