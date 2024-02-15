#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    i=1;
   while (i<=n)
{
    if (i % 2== 0)
    {
        printf("0");
    }else {
        printf("1");
    }
    i++;
}
   return 0;
}