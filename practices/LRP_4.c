#include<stdio.h>
int main(){
   int count;
   float num;
   // printf("Input total number:");
   scanf("%d",&count);
   float sum=0;

   for (int i = 1; i <= count; i++)
   {
   //  printf("Input the %dnumber:",i);
    scanf("%f",&num);
    sum+=num;
   }
   // float avg=sum/count;
   printf("AVG of %d inputs: %f",count,(sum/count));
   return 0;
}