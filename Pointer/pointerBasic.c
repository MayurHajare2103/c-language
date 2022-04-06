// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int i = 8;
 
    printf("The value of i is : %d", i);
    printf("\n\nThe address of i is : %d", &i);
    
    //int *j = &i;   //here *j is denotes the address of variable i
    
    int *j;   //another way to declare pointer
    j = &i;
    printf("\n\n Another way to get the value of i is : %d", *j);
    printf("\n\nThe value of  %d address of i is : %u", &i ,*j);
    printf("\n\nThe address of j which is store the address of i is : %u", &j);
    printf("\n\n The value of &j is %d", *(&j));

    //Pointer to the Pointer
    int **k = &j;
     printf("\n\nThe address of &j is : %u", k);
    return 0;
}