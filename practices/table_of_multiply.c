#include<stdio.h>
int main(){
   int num;
   printf("Enter the number");
   scanf("%d",&num);
   for (int i = 10; i ; i--)
   {    
    printf("%d X %d = %d\n",num,i,num*i);
   }
   
   return 0;
}