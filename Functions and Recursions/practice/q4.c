// Online C compiler to run C program online
#include<stdio.h>
int fibonacci (int);
int main ()
{
  int n, res;
  printf ("Enter the  Number: ");
  scanf ("%d", &n);
  res = fibonacci (n);
  printf ("The %dth number in Fibonacci series is %d\n", n, res);
  return 0;
}
 

int fibonacci (int n)
{
  if (n == 0)
    {
      return 0;
    }
  else if (n == 1)
    {
      return 1;
    }
  else
    {
      return (fibonacci (n - 1) + fibonacci (n - 2));
    }
}
