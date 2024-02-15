#include<stdio.h>
int main(){
   int n,r,n_fac=1,r_fac=1,n_r_fac=1;
   scanf("%d %d",&n,&r);
   for (int i = n; i>=1; i--)
   {
    n_fac*=i;
   }
   
   for (int i = n-r; i>=1; i--)
   {
    n_r_fac*=i;
   }

   for (int i = r; i>=1; i--)
   {
    r_fac*=i;
   }
   printf("%d",n_fac/(r_fac*n_r_fac));
   return 0;
}