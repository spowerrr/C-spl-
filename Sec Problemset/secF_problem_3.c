#include<stdio.h>
int main(){
   float a,b,c,avg;
   // printf("Enter the numbers:");
   scanf("%f %f %f",&a,&b,&c);
   avg=(a+b+c)/3;
   printf("The average of three numbers is %.4f",avg);
   return 0;
}