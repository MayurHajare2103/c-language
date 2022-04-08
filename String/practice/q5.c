#include <stdio.h>
#include <string.h> 

void strCpy(char *str1, char *str2)
{
    int n = strlen(str2);
    for (int i = 0; i <= n; i++)
    {
        str1[i] = str2[i];
    }
}

int main()
{
    char str1[20] = "noob"; 
    char str2[20] = "Pro";  

    printf("str1 = %s", str1); 
    printf("\nstr2 = %s",str2);

    strCpy(str1, str2);

    printf("\nstr1 = %s", str1); 
    printf("\nstr2 = %s",str2);

    return 0;
}
      