// Online C compiler to run C program online
#include <stdio.h>
void mul(int a);


int main() {
    //call by value 
    int x = 5;
     mul(x);
    printf("The value of x  is : %d ", x);

    return 0;
}

void mul(int a) {
    a = a * 10;
}
