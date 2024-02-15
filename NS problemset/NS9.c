#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n-1+i; j++)
        {
            if(j%2==1)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",0);
            }
        }
        printf("\n");
    }
    return 0;
}
