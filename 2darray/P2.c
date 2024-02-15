#include<stdio.h>
int main(){
   int m,n;
   scanf("%d%d", &m,&n); //wrong input format
   int arr[m][n];
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }
   printf("Row wise:");
    for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
           printf("%d ", arr[i][j]);
       }
   }
   printf("\nColumn wise:");
    for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
           printf("%d ", arr[j][i]);
       }
   }
   return 0;
}