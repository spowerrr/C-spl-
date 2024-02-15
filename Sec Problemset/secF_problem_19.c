#include<stdio.h>
int main(){
   int a,b,c,dif1,dif2;
   scanf("%d %d %d",&a,&b,&c);
   dif1=b-a;
   dif2=c-b;
   if (dif1==dif2)
   {
    printf("Yes\n");
   } else{
    printf("No\n");
   }
   
   return 0;
}