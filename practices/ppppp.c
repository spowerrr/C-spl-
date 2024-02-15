#include<stdio.h>
int main(){
   int num,originalnum,remainder,num1=0;
   printf("Enter");
   scanf("%d",&num);
   
   originalnum=num;
   while (num!=0)
   {
    remainder=num%10;
    num1=num1*10+remainder;
    num/=10;
    
   } if (originalnum==num1)
   {
    printf("Palindrome");
   } else {
    printf("Not Palindrome");
   }
   
   
   return 0;
}