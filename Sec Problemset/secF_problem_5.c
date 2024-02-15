#include<stdio.h>
int main(){
   int a,b;
   // printf("Enter the two numbers:");
   scanf("%d %d",&a,&b);
   if(a>b)
   {
    printf("Maximum value is %d",a);
   } else if (b>a)
   {
    printf("Maximum value is %d",b);
   }
   
   
   return 0;
}