// Online C compiler to run C program online
#include <stdio.h>
void printArray(int ptr[], int n);

int main() {
    //array with arithmetic operation using pointers
    
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 1;
    // // ptr++;
    // // ptr++;
    // printf("\nThe value of ptr is %u", ptr);

    // char c = '3';
    // char *ptr2 = &c;
    // printf("\n\nThe value of ptr is %u", ptr2);
    // // ptr = ptr - 1;
    // ptr2 = ptr2 + 1;
    // ptr2 = ptr2 + 1;
    // printf("\nThe value of ptr is %u", ptr2);
    // // ptr2++;
    // ptr2++;
    // printf("\nThe value of ptr is %u", ptr2);

//array with pointers
    //  int marks[4];
    // int *ptr;
    // // ptr = &marks[0];
    // ptr = marks;
    // for(int i =0; i<4; i++){
    //     printf("\n Enter the value of marks for student %d:", i+1);
    //     scanf("%d", ptr);
    //     ptr ++;
    // }

    // for(int i =0; i<4; i++){
    //     printf("\nThe value of marks for student %d is %d ",i+1, marks[i]);  
    // }
    
    //array with functions
   


    int arr[] = {1,2,3,4,5};
    printArray(arr, 5);
 
    return 0;
}

void printArray(int ptr[], int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, ptr[i]); 
    } 
}

 