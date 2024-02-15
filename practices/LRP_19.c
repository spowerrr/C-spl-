#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float term,ans;
    scanf("%d",&x);

    ans=x;
    
    for(int i=1;i<=4;i++)
    {
    int fact=i*2-1;
    int fans=1;
    for(int fi=fact;fi>0;fi--)
    {
        fans=fans*i;
    }


    term = (float)((pow(x,((i*2)-1)))/(fans));

    if(i%2!=0)
    {
        ans = ans+term;
    }
    else
    {
        ans = ans-term;
    }
    }
    printf("%.3f",ans);
    return 0;
}