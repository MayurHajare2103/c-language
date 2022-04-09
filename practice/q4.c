#include <stdio.h>
 
struct MovieName
{ 
    char *name; 
};
 
int main()
{
     struct MovieName* M;
     M = (struct MovieName*) 
        malloc(sizeof(struct MovieName)); 
     
     M->name = "RRR";
    
     printf("\nName: %s", M->name);
   
     return 0;
}