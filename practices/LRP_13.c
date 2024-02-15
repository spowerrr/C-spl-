// #include<stdio.h>
// int main(){
//    int n,sum=1;
//    scanf("%d",&n);

//    for (int i = 1; i <=n; i++)
//    {
//     sum*=i;
//    }
//    printf("%d",sum);
//    return 0;
// }
#include<stdio.h>
int main(){
   int n,fac=1;
   scanf("%d",&n);
   for (int i = n; i; i--)
   {
    printf("%d",i);
    if (i!=1)
    {
        printf("X");
    }
    fac*=i;
   }
   printf("= %d",fac);
   return 0;
}