#include<stdio.h>
int main() {
    char str[100];
    gets(str); //for taking input instead of scanf
    int i=0;
    for (i ; str[i] != '\0'; i++);

    for (int j = 0; j<=(i-1)/2; j++){
        char temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;

    }
    puts(str);

    return 0;
}
/*#include <stdio.h>

int main() {
    char str[100];
    int length, i, j;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string
    for (length = 0; str[length] != '\0'; length++)
        ;

    // Reverse the string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
*/