#include <stdio.h>

int main() {
    //First program in c language.

    printf ("Hello world!");
    
    //Declareing variables in c language
    int a = 5;
    char c = '@';
    float b = 4.7;
    int sum=a + b;
    // rules of variables
    int sum;
    
    //int sum of number; 
    
    // error because no space allow between variable name
    
   // both of this variable different because c language is case sensitive 
    int Sum_Of_Number;
    int sum_of_number;
      
    // single line comments
   
   /*
   multiple line comments 
   in c language.
   */
   
   //printing variables data of variables
   printf ("\n %d",a); //%d for int
   printf ("\n %c",c);  //%d for char
   printf ("\n %f",b);. //%d for float
   printf ("\n %d",sum);
   printf ("\n %d",Sum_Of_Number);
   printf ("\n %d",sum_of_number);
   
    return 0;
}