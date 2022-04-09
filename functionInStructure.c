#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    int salary;
    char name[20];
};

void show(struct employee emp){
    printf("Employee code is: %d\n", emp.code);
    printf("Employee salary is: %f\n", emp.salary);
    printf("Employee Name is: %s\n", emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 156;
    ptr->salary = 100000;
    strcpy(ptr->name, "Mayur");

    show(e1); 
    return 0;
}