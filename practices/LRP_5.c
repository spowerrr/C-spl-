#include<stdio.h>
int main(){
   int X,Y;
   scanf("%d %d",&X,&Y);
   while (X!=Y)
   {
        printf("%d ",X*X);
    if(X<Y){
        X+=1;
        printf(",");
    }
    else if (X>Y)
    {
        X-=1;
        printf(",");
    }
   }
   printf("Reached\n");
   
   
   return 0;
}