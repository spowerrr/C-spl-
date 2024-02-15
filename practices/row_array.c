#include<stdio.h>
int main(){
   int num[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
   for (int row = 0; row < 3; row++)
   {
    for (int c = 0; c < 4; c++)
    {
        printf("%d ",num[row][c]);
    }
    printf("\n");
    
   }
   
   return 0;
}