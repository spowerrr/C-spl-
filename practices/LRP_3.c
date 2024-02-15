#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i % 2);//here % it is not divided sign it is only giving the remaining
        if(i!=n){
            printf(",");
        }
        }
    printf("\n");
   return 0;
}
