#include<stdio.h>
int main() {
    char str[100];
    gets(str);
    int i,count=0;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i]==' ')
        {
            count++;
        }
        
    }
    count++;
    printf("%d",count);

    return 0;
}
