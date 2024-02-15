#include<stdio.h>
int main(){
   int a,b,c;
   printf("Enter the three arms ");
   scanf("%d %d %d",&a,&b,&c);
   if (a + b > c && b + c > a && a + c > b)
   {
    printf("Valid triangle");
   } else {
    printf("Not a valid triangle");
   }
   
   return 0;
}