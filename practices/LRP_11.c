#include<stdio.h>
#include<math.h>
int main(){
    int sum=0,sq,n,s;
    scanf("%d",&n);
   for(int i=1; i<=n ;i++){
    sq=pow(i,2);
    s=sq * (i+1);
    sum+=s;
   }
   printf("%d",sum);
   return 0;
}