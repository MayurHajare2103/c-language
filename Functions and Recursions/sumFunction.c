#include<stdio.h>
#include<math.h>

void sum(); 
void change(); 
void quibOfNum();

int main(){
    int a;
    printf("this is main function!\n\n\n");
   
    sum(5,6);

    //change function
    int x = 786;
    change(x);
    printf("\nThe x after change is %d\n", x);

    //Quib of number
    int num;
    printf("Enter the any number \n");
    scanf("%d", &num);
    quibOfNum(num);

    return 0;
}



void sum(int a, int b) {
    int c =a + b;
    printf("\nsum of %d and %d is %d", a, b, c);
    
}

void change(int x){
    x = 687;
}

void quibOfNum(int n){
       printf("The Quib of number is %f", pow(n,3));
}
