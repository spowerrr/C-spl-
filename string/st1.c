#include<stdio.h>
int main() {
    char str[100];
    //gets(str); //for taking input instead of scanf
    scanf("%[^\n]s",str);
    int i;
    for (i = 0; str[i] != '\0'; i++);
    printf("%d",i);

    return 0;
}
