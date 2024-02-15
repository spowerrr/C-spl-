#include<stdio.h>
int main(){
   int a=1,count;
   printf("Enter the number:");
   scanf("%d",&count);
   do
   {
    printf("the value of a is %d\n",a);
    a++;
   } while (a<=count);
   
   return 0;
}