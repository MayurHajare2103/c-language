#include<stdio.h>

int main(){
    int hindi, marathi, english;
    float total;
    printf("Enter hindi Marks\n");
    scanf("%d", &hindi);

    printf("Enter marathi Marks\n");
    scanf("%d", &marathi);

    printf("Enter english Marks\n");
    scanf("%d", &english);

    total = (hindi + english + marathi)/3;

    if((total<40) || (hindi<33 || english<33 || marathi<33)){
        printf("Your total percentage is %d, so you are fail\n", total);
    }
    else{
        printf("Your total percentage is %d, so you are pass\n", total);
    }


    return 0;
}