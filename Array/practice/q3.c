#include<stdio.h>

int main(){
     int multiplication[10];
    for(int i=0; i<10; i++){
        multiplication[i] = 5*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("%d\n",  multiplication[i]);
    }

    return 0;
}