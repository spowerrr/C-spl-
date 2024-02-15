#include<stdio.h>
int main(){
   char ch;
   // printf("Enter:");
   scanf("%c",&ch);
   if (ch<'z' && ch>'a' || ch<'Z' && ch>'A')
   {
    printf("Alphabet\n");
   } else {
    printf("Not Alphabet\n");
   }
   
   return 0;
}