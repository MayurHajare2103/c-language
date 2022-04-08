#include<stdio.h>
 
int main()
{
 int Size, i, a[3];
 int Positive_Count = 0;
 
 printf("\n Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\nEnter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] >= 0)
   {
 	Positive_Count++;
   }
 }
  
 printf("\n Total Number of Positive Numbers in this Array is  %d ", Positive_Count);
 
 return 0;
}