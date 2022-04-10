#include<stdio.h>
// file reading
/*int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("mayur.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    return 0;
}
*/

//quiz
/*
int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("mayur.txt", "r");
    if (ptr == NULL){
        printf("This file does not exist\n");
    }
    else{
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }
    return 0;
}
*/
/*
int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprintf", number);
    fclose(fptr);

    return 0;
}
*/

//fget fput
/*
int main(){
    FILE *ptr;

    ptr = fopen("demo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}
*/

//file reading fgetc

/*
int main(){
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}
*/

//practice set

// q1

/*

int main(){
    int a, b, c;
    FILE *ptr;
    ptr = fopen("pr01.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The values of a b and c is %d %d %d\n", a, b, c);

    return 0;
}
*/

//q2

/*
int main(){
    FILE *ptr;
    int num;
    printf("Enter the integer you need the table of\n");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for(int i=0; i<10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d to table.txt\n", num);
    return 0;
}

*/

//q3

/*
int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("a.txt", "r");
    ptr2 = fopen("b.txt", "w");

    char c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
*/


//q4
/*
int main(){
    FILE *fptr;
    char name[90] = "mayur" ;
    int salary = 3300;
    fptr = fopen("info.txt", "w");
    // fscanf(fptra, "%s", name);
    fprintf(fptr, "The name and salary is %s and %d\n",name, salary);

    fclose(fptr);

    return 0;
}
*/

