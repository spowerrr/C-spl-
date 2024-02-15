#include<stdio.h>
int main() {
    char s1[100],s2[100];
    gets(s1);
    gets(s2); 
    int a,i;
    for (i = 0; s1[i] != '\0'; i++);
    a=i;
     for (i ;s2[i-a] != '\0' ; i++)
     {
          s1[i]=s2[i-a];
     }
     s2[i]='\0';
     puts(s1);
    
    
    return 0;
}
/*#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i, j;

    // Input the first string
    printf("Enter the first string: ");
    gets(s1);

    // Input the second string
    printf("Enter the second string: ");
    gets(s2);

    // Find the length of the first string
    for (i = 0; s1[i] != '\0'; i++)
        ;

    // Concatenate the second string to the first string
    for (j = 0; s2[j] != '\0'; j++) {
        s1[i] = s2[j];
        i++;
    }

    // Null-terminate the concatenated string
    s1[i] = '\0';

    // Print the concatenated string
    printf("Concatenated string: %s\n", s1);

    return 0;
}
*/