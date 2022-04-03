#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2st number : ");
    scanf("%d", &b);

    printf("Enter 3st number : ");
    scanf("%d", &c);

    printf("Enter 4st number : ");
    scanf("%d", &d);

   if (a>b && a>c && a>d)
   {
      printf("%d is grater \n",a);
   }

   else if (b>a && b>c && b>d)
   {
       printf("%d is grater \n",b);
   }
   
    else if (c>a && c>b && c>d)
   {
        printf("%d is grater \n",c);
   }

    else if (d>a && d>c && d>c)
   {
        printf("%d is grater \n",d);
   }

   else
   {
        printf("invalid result \n");
   }

   
    return 0;
}