#include<stdio.h>
int main()
{
    char str[100];    // Declare a character array to store input text
    gets(str);        // Read input text

    // Loop through the input text to compare characters
    for(int i = 0; str[i] != '\0'; i++)
    {
       // Inner loop to compare characters with subsequent characters
       for(int j = i + 1; str[j] != '\0'; j++)
       {
           if(str[i] == str[j])  // If two characters are the same
           {
               // Shift characters to the left to remove the duplicate
               for(int k = j; str[k] != '\0'; k++)
               {
                   str[k] = str[k + 1];
               }
           }
       }
    }

    puts(str);  // Print the modified string

    return 0;
}
