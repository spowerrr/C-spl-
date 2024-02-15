#include<stdio.h>
int main(){
    int n,term1=1,term2=1,nextTerm;
    scanf("%d",&n);
    printf("%d %d ",term1,term2);


   for(int i=3; i<=n ;i++){
    nextTerm=term1+term2;
    printf("%d ",nextTerm);

     term1=term2;
    term2=nextTerm;

   }
//    printf("\n");
   return 0;
}