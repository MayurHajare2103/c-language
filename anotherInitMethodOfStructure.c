#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    int salary;
    char name[20];
};

int main(){
    struct employee mayur = {786, 50000, "Mayur"};

    printf("Code is: %d \n", mayur.code);
    printf("Salary is: %d \n", mayur.salary);
    printf("Name is: %s \n", mayur.name);
 

    return 0;
}