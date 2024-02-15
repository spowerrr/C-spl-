#include<stdio.h>
int main() {
    char ch,str[100];
    gets(str); 
    scanf("%c",&ch);
    int i,cnt=0;
    for (i = 0; str[i] != '\0'; i++){
        if((ch>='A'&& ch<='Z') || (ch>='a' && ch<='z'))
        {
            if(ch==str[i] || ch == str[i]+32 || ch == str[i]-32)
                cnt++;
        }
        else if(ch==str[i])
            cnt++;
        
    }
    printf("%d",cnt);

    return 0;
}
