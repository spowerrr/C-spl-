#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    for(int i;str[i]!='\0'; i++)
    {
        for(int j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]>str[j])
            {
                int tempstr=str[i];
                str[i]=str[j];
                str[j]=tempstr;
            }
        }
    }

    puts(str);
    return 0;
}