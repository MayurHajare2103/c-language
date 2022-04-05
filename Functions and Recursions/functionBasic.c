#include<stdio.h>
void display(); // Function prototype
void morning();
void afternoon();
void night();

int main(){
    int a;
    printf("this is main function!");
    printf("Initializing display function in main function\n");
    display(); // Function Call
    printf("Display function finished \n\n\n");

    //Quick Quiz
    morning();
    afternoon();
    night();
    
    return 0;
}

// Function definition
void display(){
    printf("This is display function \n"); 
}


//Quick Quiz: Write a program with three functions,

void morning() {
    printf("Good Morning.\n");
}

void afternoon() {
    printf("Good Afternoon.\n");
}

void night() {
    printf("Good night.\n");
}

