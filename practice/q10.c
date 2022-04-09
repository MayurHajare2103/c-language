#include<stdio.h>

typedef struct time{
    int hour;
    int minute;
    int second;
}time;

void display(time d){
    printf("The time is: %d/%d/%d\n", d.hour, d.minute, d.second);
}

int timeCmp(time d1, time d2){
    if(d1.hour>d2.hour){
        return 1;
    }
    if(d1.hour<d2.hour){
        return -1;
    }

    if(d1.minute>d2.minute){
        return 1;
    }
    if(d1.minute<d2.minute) {
        return -1;
    }

    if(d1.second>d2.second){
        return 1;
    }
    if(d1.second<d2.second) {
        return -1;
    }
    return 0;
}
int main(){
    time d1 = {9, 6, 22};
    time d2 = {5, 12, 22};
    display(d1);
    display(d2);
    int a = timeCmp(d1, d2);
    printf("Date Comparison function returns: %d", a);

    return 0;
}