#include<stdio.h>
int main(){
   int n,flag=1;
   scanf("%d",&n);

   if(n==1 || n==0) flag=0;
   for (int i = 2; i < n; i++)
   {
      if (n%i==0)
      {
         
         flag=0;
         break;
      }
      
   }
   if (flag==1)
   {
      printf("Prime Number");
   } else {
      printf("Not prime");
   }
   
   return 0;
}