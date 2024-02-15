#include<stdio.h>
int main(){
   int a, b;
   scanf("%d %d", &a, &b);
   
   int quotient = a / b;
   int remainder = a % b;
   if (remainder < 0)
   {
       remainder += b;
       quotient--;
   }
   
   printf("Quotient: %d remainder: %d", quotient, remainder);
   return 0;
}
