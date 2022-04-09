#include<stdio.h>
#include<string.h>

struct bank{
    int Ano;
    char name[10];
};

int main(){
   
    struct bank b1;
    b1.Ano = 50;
    strcpy(b1.name, "Mayur");

    printf("%d\n", b1.Ano);
    printf("%s\n", b1.name);

    return 0;
}