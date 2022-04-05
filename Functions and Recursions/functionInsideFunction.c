#include<stdio.h>
void display(); // Function prototype

int main(){
    int a;
    printf("this is main function!\n\n\n");
    //function inside function
    morning();
    
    return 0;
}

//Quick Quiz: Write a program with three functions,

void morning() {
    printf("Good Morning.");
    //function inside function
    afternoon();
}

void afternoon() {
    printf("Good Afternoon.");
    //function inside function
    night();
}

void night() {
    printf("Good night.");
}

