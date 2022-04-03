#include<stdio.h>

int main(){
    // note : 97-122 = a-z ASCII Values
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("this is lowercase");
    }
    else{
        printf("this is not lowercase");
    }
    return 0;
}