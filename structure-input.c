#include<stdio.h>
#include<string.h>

struct employee{
    int salary;
};

int main(){
    struct employee e1, e2;
   
    printf("Enter the value for salary of e1: ");
    scanf("%d", &e1.salary);
   
    printf("Enter the value for salary of e2: ");
    scanf("%d", &e2.salary);
    
     printf("%d\n", e1.salary);
     printf("%d\n", e2.salary);
   

    return 0;
}