#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {  
    char str1[20];
    char *str2;
    printf("enter string \n"); 
    scanf("%c",str1);
    str1[1] = '\0';
    printf(" string 1  is %s  \n",str1);

    str2 = malloc(102400);
    if (str2 == NULL) return 1;
    printf("enter string 2 \n");
 
    scanf("%s",str2);
 
    printf(" string 1 and 2 is %c and %s \n",*str1,str2); 
    int a=strcmp(str1,str2); 
    printf("%d",a);
    free(str2); 
    return 0; 
}