#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess, numGuesses=1;
    // this is random number program
    srand(time(0));
    num = rand()%10 + 1;
    
    printf("The number is %d\n", num); //this is for hint to complete game
 
    do{
        printf("Guess the number between 1 to 10\n\n");
        scanf("%d", &guess);
        if(guess>num){
            printf("Enter lower number than %d \n", guess);
        }
        else if(guess<num){
            printf("Higher numberthan %d \n", guess);
        }
        else{
            printf("You guessed it in %d attempts\n", numGuesses);
        }
        numGuesses++;
    }while(guess!=num);
    
    return 0;
}