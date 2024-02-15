#include<stdio.h>
int main(){
   int n,count=0;
   scanf("%d",&n);
   char arr[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%c",&arr[i]);
    if (arr[i]== 'A' || arr[i]=='E' || arr[i]=='I'|| arr[i]=='O' || arr[i]=='U')
    {
        count+=1;
    }
   }
   printf("%d",count);
   return 0;
}