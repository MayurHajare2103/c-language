#include<stdio.h>

int main(){
    int demoArray[10];
    int *ptr = demoArray;
    ptr = ptr+2;
    if(ptr==&demoArray[2]){
        printf("These point to the same location in memory\n");
    }
    else{
        printf("These do not point to the same location in memory\n");
    }

    return 0;
}