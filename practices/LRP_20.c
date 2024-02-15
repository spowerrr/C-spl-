#include<stdio.h>
int main(){
   int n,ans=0,sum=0;
   scanf("%d",&n);

   for (int i = 1; i <=n; i++)
   {
    ans=ans*10+i;
    sum+=ans;
   }
   printf("%d",sum);
   return 0;
}