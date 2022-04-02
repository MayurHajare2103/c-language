#include<stdio.h>

int main(){
/*
//Q1 invalid format
    int a; int b=a;
    printf("%d\n", b); //0
    int v = 3^3;
    printf("%d\n", v); //0
    char dt = '21 dec 2020';
    printf("%c\n", dt); //0
    
    // Q2 what is the data type
     float d = (3.0/8-2);
     printf("%f\n", d); // -1.6....
*/
// Q3. Write a program to determine whether a number is divisible by 97 or not
    int number ;
    printf("Enter the number\n : ");
    scanf("%d", &number);
    printf("Divisible by 97: %d\n", number / 97);

    // Q4. Step by step evaluation of 3*x/y-z+k
    int x = 2, y=3, z=3, k=1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 2 - 3 + 1 
    // 0
    printf("The result is %d", result);


        return 0;
}