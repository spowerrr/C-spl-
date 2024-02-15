#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int r=1 ; r<=n ; r++){
        for(int c=1 ; c<=n ;c++){
            printf("%d",c);
        }
        printf("\n");
    }
}