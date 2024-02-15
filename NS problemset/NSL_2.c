// #include<stdio.h>
// int main(){
//    int n;
//    scanf("%d",&n);
//    for(int i=1; i<=n; i++){
//     for(int j=i; j<=n; j++){
//         printf("%d",j);
//     }
//     printf("\n");
//    }
//    return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int r=1 ; r<=n ; r++){
        for(int c=r ; c<=(n-1)+r ;c++){
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}