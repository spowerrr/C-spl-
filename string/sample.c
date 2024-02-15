#include<stdio.h>
int main() {
    char str[100];
    gets(str);
    int i;
    for (i = 0; str[i] != '\0'; i++);  // Note the semicolon here
    printf("%d",i);

    return 0;
}
