// Online C compiler to run C program online
#include <stdio.h>


int main() {
   
    int k =5;
    printf(" the value of k is : %d", k);
    int *j = &k;
     printf("\n the address of k is : %d", j);
    printAddress(k);
    return 0;
}

printAddress(int a){
     printf("\n the address of k is : %u", &a);
}

