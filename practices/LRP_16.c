#include<stdio.h>
int main()
{
    int num1,num2,x,y,remainder;
    scanf("%d%d",&x,&y);

    if(x<y){
        num1 = x;
        num2 = y;
    }else{
        num1 = y;
        num2 = x;
    }
    while(  1  )
    {
        remainder = num2%num1;
        if(remainder==0)
        {
            break;
        }
        else
        {
            num2 = num1;
            num1 = remainder;
        }
    }

    printf("GCD:%d\nLCM:%d",num1,(x*y)/num1);

    return 0;
}