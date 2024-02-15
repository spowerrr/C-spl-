#include<stdio.h>
#include<math.h>
int main(){
   int a,sq;
   printf("Enter the value of a");
   scanf("%d",&a);
   sq=sqrt(a);
   if(sq*sq==a)
   {
    printf("Perfect Square");
   } else {
    printf("Not a Perfect Square");
   }
   return 0;
}