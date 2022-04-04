#include<stdio.h>

int main(){
    int i = 0;
    do{
        printf("The value of i is %d\n", i);
        if(i==4){
            break;
        }
        i++;
    }while(i<10);

//continue 

 int skip=5, j=0;
    while(j<10){
        j++;
        if(j!=skip){
            continue;
        }
        else{
            printf("%d\n", j);
        }
    }

    return 0;
}