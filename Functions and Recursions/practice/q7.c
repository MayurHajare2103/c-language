#include<stdio.h>
void pattern();

int main(){
    
    pattern();
    return 0;
    
//      int main(){
//      int n =4;
//      printPattern(n);
}


void pattern(){
  for(int i = 0; i< 5; i++){
      for(int j = 0; j<=i; j++){
        printf("* ");
  } 
  printf("\n");
  }
  
}

// void printPattern(int n){
//     if (n==1){
//         printf("*\n");
//         return;
//     }
//     printPattern(n-1);
//     for(int i=0;i<(2*n-1);i++){
//         printf("*");
//     }
//     printf("\n");
// }


   


