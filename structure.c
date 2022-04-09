#include<stdio.h>
#include<string.h>

struct employee{
    int no;
    float salary;
    char name[10];
};

int main(){
   
    struct employee e1;
    e1.no = 50;
    e1.salary = 54.000;
    strcpy(e1.name, "Mayur");

    printf("%d\n", e1.no);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}