#include<stdio.h>
#include <string.h>

int main(){
    
    // // intro of strings
    // char str[] = "Mayur";
    // printf("\n %s \n", str);
    
    
    // char str2[] = {'M', 'a', 'y', 'u', 'r', '0'};
    // char *ptr = str2;
    // while(*ptr!='0'){
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    
    // //inputing strings
    // char s[5];
    // printf("\n\nEnter your name: ");
    // scanf("%s", s);
    // printf("Your name is %s", s);
    
    // //get and puts in strings
    // char s[34];
    // printf("Enter your name: ");
    // gets(s); 
    // puts(s); 
    
    //  char *ptr = "mayur";
    // ptr = "ram";
    // printf("%s", ptr);
    
    
    //strlen
    char *str = "mayur";
    int a = strlen(str);
    printf("The length of string st is %d", a);
    
    //strcpy
    char *st = "mayu";
    char st2[8];
    strcpy(st2, st);
    printf("\n\nNow the st2 is %s", st2);
    
    //strcmp
     char str1[45] = "Helo";
    char *str2 = "Helo";
    int val = strcmp(str1, str2);
    printf("\n\n the val is %d", val);
    
    //strcat
     char string[45] = "Hello";
    char *string2 = "Mayur";
    strcat(string, string2);
    printf("\n\nNow the st1 is %s", string);
    return 0;
}