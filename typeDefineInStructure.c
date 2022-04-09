#include<stdio.h>
#include<string.h>

typedef struct employee{
    char name[20];
} emp;

void show(emp emp1){
    printf("The Name of employee is: %s\n", emp1.name);
    
}

int main(){
    emp e1;
    emp *ptr = &e1;

    strcpy(ptr->name, "Mayur"); 

    show(e1);

    return 0;
}