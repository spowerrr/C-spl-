#include<stdio.h>
int main()
{
    int store;
    scanf("%d",&store);
    int num[store];
    for(int i=0;i<store;i++)
    {
        scanf("%d",&num[i]);   
    }
    printf("Array A: ");
    for(int i=0;i<store;i++)
    {
        printf("%d ",num[i]);   
    }
    printf("\n");
    printf("Array B: ");
    for(int i=(store-1);i>=0;i--)
    {
        printf("%d ",num[i]);
    }

    return 0;
}
