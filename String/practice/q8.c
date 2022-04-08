#include<stdio.h>
#include <string.h>

int occurence(char st[], char c){
    char *ptr = st;
    int count=0;
    while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "mayur55";
    int count = occurence(st, '5');
    printf("Occurences = %d", count);
    return 0;
}