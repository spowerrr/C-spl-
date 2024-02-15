#include<stdio.h>
int main()
{
    char str[100];
     gets(str);

     int i=0,flag=0;
     for(i; str[i]!='\0'; i++);

     for(int j=0; j<=(i-2)/2; j++)
     {
         if(str[j]!=str[i-1-j])
            flag=1;
     }
     if(flag==0)
         printf("YES");
    else
        printf("NO");

    return 0;
}