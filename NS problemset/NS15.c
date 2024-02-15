#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            printf("Z");
            else
            {

                if(j==n+1-i)
                    printf("Z");
                else
                    printf(" ");

            }
        }
        printf("\n");
    }
}
