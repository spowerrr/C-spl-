#include<stdio.h>
int main() {
    char str[100];
    gets(str);
    int i,count=0;
    for (i = 0; str[i] != '\0'; i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;
    }
    printf("%d",count);

    return 0;
}
