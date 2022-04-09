#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
};

int main(){
    struct employee facebook[100];

    strcpy(facebook[0].name, "Mayur");

    strcpy(facebook[1].name, "Abhi");

    printf("%s\n", facebook[0].name);
    printf("%s\n", facebook[1].name);

    return 0;
}