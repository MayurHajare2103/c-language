#include<stdio.h>

int main(){

    int number;
    printf("Enter a number\n");
    scanf("%d", &number);

    if(number%2==0){
        printf("%d is even\n", number);
    }
    else{
        printf("%d is odd\n", number); 
    }

    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    
    if(age>=18){
        printf("You are eligible to drive, you can drive\n");
    }
    else{
        printf("You cannot drive, plese try later! \n");
    }


    if(age==50){
        printf("Half Century\n");
    }
    if(age==100){
        printf("Century\n");
    }
    


     char chracter;

    printf("Enter your chracter\n");
    scanf("%d", &chracter);

    if(chracter=='a'){
        printf("Your chracter is a \n");
    }
    else if (chracter == 'b')
    {
        printf("Your chracter is b \n");
    }
    else if (chracter == 'c')
    {
        printf("Your chracter is c \n");
    }
    else{
        printf("Its not a, b or c !\n");
    }



    int age;
    int emergancy = 0;
   

    printf("Enter your age\n");
    scanf("%d", &age); 

    // if (age <= 70 && age>=18)
    if ((age <= 70 && age>=18) || (vipPass>=16))
    {
        printf("You are above 18 and if emergary at least you should above 15, you can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }
   
     

    return 0;
}